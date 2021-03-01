--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   22:54:36 03/01/2021
-- Design Name:   
-- Module Name:   /home/ise/Desktop/CODE/vending_meachine/test_benach.vhd
-- Project Name:  vending_meachine
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: vending_meachine
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY test_benach IS
END test_benach;
 
ARCHITECTURE behavior OF test_benach IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT vending_meachine
    PORT(
         clk : IN  std_logic;
         item_input : IN  std_logic_vector(2 downto 0);
         money_input : IN  std_logic_vector(2 downto 0);
         output_stuff : OUT  std_logic_vector(2 downto 0);
         out_money_amount : OUT  std_logic_vector(7 downto 0);
         iteam_1 : OUT  integer;
         iteam_2 : OUT  integer;
         iteam_3 : OUT  integer
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal item_input : std_logic_vector(2 downto 0) := (others => '0');
   signal money_input : std_logic_vector(2 downto 0) := (others => '0');

 	--Outputs
   signal output_stuff : std_logic_vector(2 downto 0);
   signal out_money_amount : std_logic_vector(7 downto 0);
   signal iteam_1 : integer  :=0;
   signal iteam_2 : integer  :=0;
   signal iteam_3 : integer  :=0;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: vending_meachine PORT MAP (
          clk => clk,
          item_input => item_input,
          money_input => money_input,
          output_stuff => output_stuff,
          out_money_amount => out_money_amount,
          iteam_1 => iteam_1,
          iteam_2 => iteam_2,
          iteam_3 => iteam_3
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '1';
		wait for clk_period/2;
		clk <= '0';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;
			item_input <="100";
		wait for clk_period;
			item_input <="000";
			money_input <="001";
		wait for clk_period*2;
			money_input <="010";
		wait for clk_period*2;
			money_input <="100";
      wait for clk_period;
			money_input <="000";
		wait for clk_period;
		
		
		
		
		
			item_input <="100";
		wait for clk_period;
			money_input <="100";
      wait for clk_period*2;
		
			item_input <="001";
		wait for clk_period;
			money_input <="100";
      wait for clk_period*2;
			money_input <="000";
			item_input <= "000";
      -- insert stimulus here 

      wait;
   end process;

END;
