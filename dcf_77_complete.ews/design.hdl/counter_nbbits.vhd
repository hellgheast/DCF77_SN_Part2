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
-- Object        : Entity design_ip_dcf_77.counter_nbbits
-- Last modified : Sat Jun 06 14:57:17 2015.
--------------------------------------------------------------------------------



library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity counter_nbbits is
  port (
    bit_count          : out    std_logic_vector(5 downto 0);
    clk                : in     std_logic;
    reset_n            : in     std_logic;
    rising_edge_dcf_77 : in     std_logic;
    start              : in     std_logic;
    stop               : in     std_logic);
end entity counter_nbbits;

--------------------------------------------------------------------------------
-- Object        : Architecture design_ip_dcf_77.counter_nbbits.behavior
-- Last modified : Sat Jun 06 14:57:17 2015.
--------------------------------------------------------------------------------

   

architecture behavior of counter_nbbits is

signal counter : std_logic_vector(5 DOWNTO 0); --Signal interne pour compteur, BitCount va jusqu'� 60

BEGIN

P1:process (clk, reset_n)
	begin
	if(reset_n) = '0' then -- reset asynchrone   
		counter  <= (OTHERS => '0');
	elsif(clk'EVENT and clk = '1') then 
		 
		if start = '1' then
				counter <= "000001"; -- Compteur mis � 1, car le bit 0 est le premier bit, donc 1
		elsif (rising_edge_dcf_77 = '1') or (stop = '1') then  
				counter <= STD_LOGIC_VECTOR(UNSIGNED(counter) + 1);
		end if;		
	end if;		
end process;         

bit_count <= counter;

end architecture behavior ; -- of counter_nbbits

