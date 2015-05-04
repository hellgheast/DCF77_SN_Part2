-- EASE/HDL begin --------------------------------------------------------------
-- 
-- Architecture 'rtl' of entity 'mux_dcf_test'.
-- 
--------------------------------------------------------------------------------
-- 
-- Copy of the interface declaration:
-- 
--   port (
--     TEST                : in     std_logic;
--     adress_mux_dcf_test : in     std_logic_vector(1 downto 0);
--     buffer_full         : in     std_logic;
--     data_dcf            : in     std_logic_vector(7 downto 0);
--     data_out            : out    std_logic_vector(7 downto 0);
--     start_acq           : in     std_logic);
-- 
-- EASE/HDL end ----------------------------------------------------------------

architecture rtl of mux_dcf_test is

signal test_vector std_logic_vector(7 downto 0):=x"00";
             
begin

WITH adress_mux_dcf_test SELECT
	 data_out <= test_vector(7 downto 1) & TEST 		WHEN "00",
	 			 test_vector(7 downto 1) & start_acq 	WHEN "01",
	 			 test_vector(7 downto 1) & buffer_full 	WHEN "10",
	 			 data_dcf								WHEN "11",
	 			 x"FF"			                        WHEN OTHERS;
	 			 	


end architecture rtl ; -- of mux_dcf_test

