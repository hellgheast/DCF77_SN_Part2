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

test_vector <= test_vector(7 downto 1) & TEST;
data_out <= 


end architecture rtl ; -- of mux_dcf_test

