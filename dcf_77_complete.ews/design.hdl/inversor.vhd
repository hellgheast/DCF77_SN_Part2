--------------------------------------------------------------------------------
--
-- This VHDL file was generated by EASE/HDL 8.0 Revision 2 from HDL Works B.V.
--
-- Ease library  : design_dcf_complete
-- HDL library   : design_dcf_complete
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
-- Object        : Entity design_dcf_complete.inversor
-- Last modified : Mon May 04 19:58:00 2015.
--------------------------------------------------------------------------------



library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity inversor is
  port (
    input   : in     std_logic;
    reset_n : out    std_logic);
end entity inversor;

--------------------------------------------------------------------------------
-- Object        : Architecture design_dcf_complete.inversor.rtl
-- Last modified : Mon May 04 19:58:00 2015.
--------------------------------------------------------------------------------


architecture rtl of inversor is

begin

reset_n <= not input;           

end architecture rtl ; -- of inversor

