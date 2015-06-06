--------------------------------------------------------------------------------
--
-- This VHDL file was generated by EASE/HDL 8.0 Revision 2 from HDL Works B.V.
--
-- Ease library  : design_ip_dcf_77
-- HDL library   : design_ip_dcf_77
-- Host name     : INF13-BENSALAHM
-- User name     : mohammed.bensalah
-- Time stamp    : Sat Jun 06 15:21:56 2015
--
-- Designed by   : 
-- Company       : 
-- Project info  : 
--
--------------------------------------------------------------------------------

--------------------------------------------------------------------------------
-- Object        : Entity design_ip_dcf_77.sync_dcf77
-- Last modified : Sat Jun 06 14:57:17 2015.
--------------------------------------------------------------------------------



library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity sync_dcf77 is
  port (
    clk       : in     std_logic;
    dcf_77_in : in     std_logic;
    dcf_77_s  : out    std_logic;
    reset_n   : in     std_logic);
end entity sync_dcf77;

--------------------------------------------------------------------------------
-- Object        : Architecture design_ip_dcf_77.sync_dcf77.behavior
-- Last modified : Sat Jun 06 14:57:17 2015.
--------------------------------------------------------------------------------


architecture behavior of sync_dcf77 is

begin

P1 : PROCESS(clk,reset_n) IS
BEGIN
IF reset_n = '0' THEN
  dcf_77_s <= '0';
ELSIF  (clk = '1' AND clk'event) THEN
  dcf_77_s <= dcf_77_in;        -- Synchronisation du signal
END IF;
END PROCESS P1;


end architecture behavior ; -- of sync_dcf77

