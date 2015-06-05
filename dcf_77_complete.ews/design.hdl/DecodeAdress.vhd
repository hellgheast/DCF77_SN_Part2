--------------------------------------------------------------------------------
--
-- This VHDL file was generated by EASE/HDL 8.0 Revision 2 from HDL Works B.V.
--
-- Ease library  : design
-- HDL library   : design
-- Host name     : INF13-BENSALAHM
-- User name     : mohammed.bensalah
-- Time stamp    : Fri Jun 05 19:19:26 2015
--
-- Designed by   : 
-- Company       : 
-- Project info  : 
--
--------------------------------------------------------------------------------

--------------------------------------------------------------------------------
-- Object        : Entity design.DecodeAdress
-- Last modified : Mon Jun 01 16:06:00 2015.
--------------------------------------------------------------------------------



library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity DecodeAdress is
  port (
    adress              : in     std_logic_vector(7 downto 0);
    adress_dcf          : out    std_logic_vector(3 downto 0);
    adress_displayblock : out    std_logic_vector(2 downto 0);
    adress_mux_dcf_test : out    std_logic_vector(1 downto 0);
    dcf_cs              : out    std_logic;
    displayblock_cs     : out    std_logic;
    uart_tx_cs          : out    std_logic);
end entity DecodeAdress;

--------------------------------------------------------------------------------
-- Object        : Architecture design.DecodeAdress.rtl
-- Last modified : Mon Jun 01 16:06:00 2015.
--------------------------------------------------------------------------------


architecture rtl of DecodeAdress is

                                                           
constant DCF_select 			: std_logic_vector(3 downto 0) := "0000";
constant DisplayBlock_select  	: std_logic_vector(3 downto 0) := "0001";
constant Mux_select 			: std_logic_vector(3 downto 0) := "0010";
constant UART_select 			: std_logic_vector(3 downto 0) := "0011";

signal Adress_MSB 				: std_logic_vector(3 downto 0);
signal ChipSelects 				: std_logic_vector(2 downto 0);  -- Bit 0 = uart, bit 1 = display, bit 2 = dcf

begin
     
	Adress_MSB <= adress(7 downto 4);
	
	with Adress_MSB select
		          
		ChipSelects			<=  "100" when DCF_select,
		 			   			"010" when DisplayBlock_select,
		 			    	   	"001" when UART_select,
		 			    	   	"000" when others;     
 
	with Adress_MSB select

		adress_dcf 			<= 	adress(3 downto 0) when DCF_select,
		 			   			"0000" when others;       
	
	with Adress_MSB select
		 		 			    
		adress_mux_dcf_test <=  adress(1 downto 0) when Mux_select,
							    "00" when others; 
							    
	with Adress_MSB select
		
		adress_displayblock <=  adress(2 downto 0) when DisplayBlock_select,
		 						"000" when others;
		 						
		 										   		 				   		
 dcf_cs	 			<= ChipSelects(2);	    
 displayblock_cs	<= ChipSelects(1);		          
 uart_tx_cs     	<= ChipSelects(0);
 		    
end architecture rtl ; -- of DecodeAdress

	
