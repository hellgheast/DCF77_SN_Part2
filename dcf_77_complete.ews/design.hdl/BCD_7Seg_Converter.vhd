--------------------------------------------------------------------------------
--
-- This VHDL file was generated by EASE/HDL 8.0 Revision 2 from HDL Works B.V.
--
-- Ease library  : design
-- HDL library   : design
-- Host name     : INF13-MEIERV
-- User name     : vincent.meier
-- Time stamp    : Tue Jun 02 10:12:22 2015
--
-- Designed by   : 
-- Company       : 
-- Project info  : 
--
--------------------------------------------------------------------------------

--------------------------------------------------------------------------------
-- Object        : Entity design.BCD_7Seg_Converter
-- Last modified : Mon Jun 01 16:02:34 2015.
--------------------------------------------------------------------------------



library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity BCD_7Seg_Converter is
  port (
    clk              : in     std_logic;
    reset_n          : in     std_logic;
    time_bc_7seg_lsb : out    std_logic_vector(6 downto 0);
    time_bc_7seg_msb : out    std_logic_vector(6 downto 0);
    time_bc_in       : in     std_logic_vector(7 downto 0));
end entity BCD_7Seg_Converter;

--------------------------------------------------------------------------------
-- Object        : Architecture design.BCD_7Seg_Converter.rtl
-- Last modified : Mon Jun 01 16:02:34 2015.
--------------------------------------------------------------------------------


architecture rtl of BCD_7Seg_Converter is

begin

P1:process(clk, reset_n)

	begin
     
     if reset_n = '1' then
	 	time_bc_7seg_lsb   <= (others => '0');
	 	time_bc_7seg_msb  <= (others => '0');

	elsif clk'EVENT AND clk = '1' then
     
    -- Heures et Minutes
    
		case  time_bc_in(7 downto 4) is
			when "0000"=> time_bc_7seg_msb <="1111110";  -- '0'
			when "0001"=> time_bc_7seg_msb <="0110000";  -- '1'
			when "0010"=> time_bc_7seg_msb <="1101101";  -- '2'
			when "0011"=> time_bc_7seg_msb <="1111001";  -- '3'
			when "0100"=> time_bc_7seg_msb <="0110011";  -- '4' 
			when "0101"=> time_bc_7seg_msb <="1011011";  -- '5'
			when "0110"=> time_bc_7seg_msb <="1011111";  -- '6'
			when "0111"=> time_bc_7seg_msb <="1110000";  -- '7'
			when "1000"=> time_bc_7seg_msb <="1111111";  -- '8'
			when "1001"=> time_bc_7seg_msb <="1111011";  -- '9'
			when others=> time_bc_7seg_msb <="0000000"; 
		end case;         
		
		
		case  time_bc_in(3 downto 0) is
			when "0000"=> time_bc_7seg_lsb <="1111110";  -- '0'
			when "0001"=> time_bc_7seg_lsb <="0110000";  -- '1'
			when "0010"=> time_bc_7seg_lsb <="1101101";  -- '2'
			when "0011"=> time_bc_7seg_lsb <="1111001";  -- '3'
			when "0100"=> time_bc_7seg_lsb <="0110011";  -- '4' 
			when "0101"=> time_bc_7seg_lsb <="1011011";  -- '5'
			when "0110"=> time_bc_7seg_lsb <="1011111";  -- '6'
			when "0111"=> time_bc_7seg_lsb <="1110000";  -- '7'
			when "1000"=> time_bc_7seg_lsb <="1111111";  -- '8'
			when "1001"=> time_bc_7seg_lsb <="1111011";  -- '9'
			when others=> time_bc_7seg_lsb <="0000000"; 
		end case;         
 
		
	end if;

end process;     
     
     
end architecture rtl ; -- of BCD_7Seg_Converter

