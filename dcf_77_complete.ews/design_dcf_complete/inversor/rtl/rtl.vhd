-- EASE/HDL begin --------------------------------------------------------------
-- 
-- Architecture 'rtl' of entity 'inversor'.
-- 
--------------------------------------------------------------------------------
-- 
-- Copy of the interface declaration:
-- 
--   port (
--     input : in     std_logic;
--     reset : out    std_logic);
-- 
-- EASE/HDL end ----------------------------------------------------------------

architecture rtl of inversor is

begin

reset <= not input;           

end architecture rtl ; -- of inversor

