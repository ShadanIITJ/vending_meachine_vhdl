----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    21:02:56 03/01/2021 
-- Design Name: 
-- Module Name:    vending_meachine - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.numeric_std.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity vending_meachine is
port(
	clk : in std_logic;
	item_input : in std_logic_vector(2 downto 0) 			:= (others => '0');
	money_input: in std_logic_vector(2 downto 0) 			:= (others => '0');
	output_stuff: out std_logic_vector(2 downto 0) 			:= (others => '0');
	out_money_amount : out std_logic_vector(7 downto 0) 	:= (others => '0');
	
	iteam_1 : out integer := 0;
	iteam_2 : out integer := 0;
	iteam_3 : out integer := 0

);

-- understad the signal taken
-- item_input : 3 bit signal 
-- 				1st means iteam with worth 5 selected
--					2nd means iteam with worth 20 selected
--             3rd means iteam with worth 35 selected


-- money_input : 3 bit signal 
-- 				1st means iteam with worth 5 selected
--					2nd means iteam with worth 10 selected
--             3rd means iteam with worth 20 selected

-- output_stuff : 3 bit signal 
-- 				1st means iteam with worth 5 given
--					2nd means iteam with worth 20 given
--             3rd means iteam with worth 35 given

-- output_money : 8 bit binaty value of the money to return
end vending_meachine;

architecture arc1 of vending_meachine is
	constant waiting: std_logic_vector(2 downto 0) := "001";
	constant money_collect: std_logic_vector(2 downto 0) := "010";
	constant stuff_surving: std_logic_vector(2 downto 0) := "100";
	
	signal state : std_logic_vector(2 downto 0) := "001";
	
	signal count_iteam_1  : integer  := 76; -- Last 2 digit of Entry Number
	signal count_iteam_2  : integer := 76;  -- Last 2 digit of Entry Number
	signal count_iteam_3  : integer := 76;  -- Last 2 digit of Entry Number
	
	signal to_collect: integer := 0;
	signal collected : integer :=0;
	
	signal selected : std_logic_vector(2 downto 0) := "000"; -- to store what was selected from the user

begin

	process(clk)
	begin 
	
		if( rising_edge(clk)) then
			case state is
				when waiting =>
						if( item_input = "001" ) then
							if( count_iteam_1 >= 1) then 
								to_collect <= 5;
								selected   <= item_input;
								state      <= money_collect;
							end if;
							
						elsif ( item_input = "010" ) then
							if( count_iteam_2 >= 1) then
								to_collect <= 20;
								selected   <= item_input;
								state      <= money_collect;
							end if;
							
						elsif ( item_input = "100" ) then 
							if( count_iteam_3 >= 1) then
								to_collect <= 35;
								selected   <= item_input;
								state      <= money_collect;
							end if;
						else 
							selected   <= item_input;
							state      <= waiting;
						
						end if;
						
				when money_collect =>
						if( money_input = "001" ) then
							collected <= collected + 5;
							state      <= money_collect;
						
						elsif ( money_input = "010" ) then
							collected <= collected + 10;
							state      <= money_collect;
							
						elsif ( money_input = "100" ) then 
							collected <= collected + 20;
							state      <= money_collect;
							
						else 
							if( collected >= to_collect ) then 
								out_money_amount <= std_logic_vector(to_unsigned(collected - to_collect, 8));
								collected <= 0;
								to_collect <= 0;
								if( selected = "001" ) then
									count_iteam_1 <= count_iteam_1 -1;
		
								elsif ( selected = "010" ) then
									count_iteam_2 <= count_iteam_2 -1;
					
								elsif ( selected = "100") then
									count_iteam_3 <= count_iteam_3 -1;
									
								end if;
								output_stuff     <= selected;
								state      		  <= stuff_surving;
								
							else 
								state      <= money_collect;
							end if;
						end if;
						
				when stuff_surving =>
						output_stuff <= "000";
						out_money_amount <= "00000000";
						state  <= waiting;
				
				when others =>
						state <= waiting;
			end case;
			
		end if;
	
	end process;
	
	iteam_1 <= count_iteam_1;
	iteam_2 <= count_iteam_2;
	iteam_3 <= count_iteam_3;

end arc1;

