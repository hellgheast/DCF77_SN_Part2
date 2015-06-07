--------------------------------------------------------------------------------
--
-- This VHDL file was generated by EASE/HDL 8.0 Revision 2 from HDL Works B.V.
--
-- Ease library  : design_ip_dcf_77
-- HDL library   : design_ip_dcf_77
-- Host name     : INF13-BENSALAHM
-- User name     : mohammed.bensalah
-- Time stamp    : Sun Jun 07 13:18:33 2015
--
-- Designed by   : 
-- Company       : 
-- Project info  : 
--
--------------------------------------------------------------------------------

--------------------------------------------------------------------------------
-- Object        : Entity design_ip_dcf_77.counter_ms_oveflow
-- Last modified : Sat Jun 06 14:57:17 2015.
--------------------------------------------------------------------------------



library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity counter_ms_oveflow is
  port (
    clk                : in     std_logic;
    freq               : in     std_logic;
    reset_n            : in     std_logic;
    rising_edge_dcf_77 : in     std_logic;
    sec_overflow       : out    std_logic);
end entity counter_ms_oveflow;

--------------------------------------------------------------------------------
-- Object        : Architecture design_ip_dcf_77.counter_ms_oveflow.behavioral
-- Last modified : Sat Jun 06 14:57:17 2015.
--------------------------------------------------------------------------------



architecture behavioral of counter_ms_oveflow is

signal counter : std_logic_vector(11 DOWNTO 0); --Signal interne pour compteur, BitCount va jusqu'� 60
signal en_count : std_logic;

begin

P1:process (clk, reset_n)
	begin
	if(reset_n) = '0' then -- reset asynchrone
		counter  <= (OTHERS => '0');
		sec_overflow <= '0';
	elsif(clk'EVENT and clk = '1') then
		if rising_edge_dcf_77 = '1' then 
			en_count <= '1';
			counter <= (OTHERS => '0');
		elsif counter >= x"3E9" then        
			sec_overflow <= '1';
			counter <= (OTHERS => '0');
			en_count <= '0';
		elsif freq = '1' and en_count = '1' then      	
			sec_overflow <= '0';
			counter <= STD_LOGIC_VECTOR(UNSIGNED(counter) + 1);
		end if;      
			
	end if;		
end process;          

end architecture behavioral ; -- of counter_ms_oveflow

