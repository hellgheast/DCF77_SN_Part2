-- EASE/HDL begin --------------------------------------------------------------
-- 
-- Architecture 'rtl' of entity 'inversor'.
-- 
--------------------------------------------------------------------------------
-- 
-- Copy of the interface declaration:
-- 
--   port (
--     input   : in     std_logic;
--     reset_n : out    std_logic);
-- 
-- EASE/HDL end ----------------------------------------------------------------

architecture rtl of inversor is

begin

reset_n <= not input;           

end architecture rtl ; -- of inversor

