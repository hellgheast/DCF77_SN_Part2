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
-- Object        : Entity design_ip_dcf_77.rising_edge_dectection
-- Last modified : Sat Jun 06 14:57:17 2015.
--------------------------------------------------------------------------------



library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity rising_edge_dectection is
  port (
    clk                : in     std_logic;
    dcf_77_s           : in     std_logic;
    reset_n            : in     std_logic;
    rising_edge_dcf_77 : out    std_logic);
end entity rising_edge_dectection;

--------------------------------------------------------------------------------
-- Object        : Architecture design_ip_dcf_77.rising_edge_dectection.behavioral
-- Last modified : Sat Jun 06 14:57:17 2015.
--------------------------------------------------------------------------------


architecture behavioral of rising_edge_dectection is
    
signal sync1 : std_logic := '0';

begin       

P1:process(clk, reset_n) is
	begin
	if reset_n = '0' then
		--rising_edge_dcf_77 <= '0';
	elsif (clk = '1' and clk'event) then
	     sync1 <= dcf_77_s;
	end if;
end process;

rising_edge_dcf_77 <= '1' when (dcf_77_s = '1' and sync1 = '0') else '0';
 
end architecture behavioral ; -- of rising_edge_dectection

