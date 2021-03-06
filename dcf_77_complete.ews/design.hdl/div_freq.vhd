--------------------------------------------------------------------------------
--
-- This VHDL file was generated by EASE/HDL 8.0 Revision 2 from HDL Works B.V.
--
-- Ease library  : design_ip_dcf_77
-- HDL library   : design_ip_dcf_77
-- Host name     : INF13-MEIERV
-- User name     : vincent.meier
-- Time stamp    : Mon Jun 08 15:29:19 2015
--
-- Designed by   : 
-- Company       : 
-- Project info  : 
--
--------------------------------------------------------------------------------

--------------------------------------------------------------------------------
-- Object        : Entity design_ip_dcf_77.div_freq
-- Last modified : Sat Jun 06 14:57:17 2015.
--------------------------------------------------------------------------------



library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity div_freq is
  port (
    Enable  : in     std_logic;
    clk     : in     std_logic;
    div     : in     std_logic_vector(15 downto 0);
    freq    : out    std_logic;
    reset_n : in     std_logic);
end entity div_freq;

--------------------------------------------------------------------------------
-- Object        : Architecture design_ip_dcf_77.div_freq.behavior
-- Last modified : Sat Jun 06 14:57:17 2015.
--------------------------------------------------------------------------------


architecture behavior of div_freq is

signal counter : std_logic_vector(15 downto 0); 

begin

P1:process (clk, reset_n)
	begin
	if(reset_n) = '0' then -- reset asynchrone
		freq <= '0';
		counter <= (OTHERS => '0');
	elsif(clk'EVENT and clk = '1') then
		if (UNSIGNED(counter) = 0 and Enable = '1') then
			counter <= std_logic_vector(UNSIGNED(div) - 1);
			freq <= '1';
		elsif (Enable = '1') then
			counter <= STD_LOGIC_VECTOR(UNSIGNED(counter) - 1);
			freq <= '0';
		end if;
	end if;		
end process;
end architecture behavior ; -- of div_freq

