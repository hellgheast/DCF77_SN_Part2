-- EASE/HDL begin --------------------------------------------------------------
-- 
-- Architecture 'behavior' of entity 'sync_dcf77'.
-- 
--------------------------------------------------------------------------------
-- 
-- Copy of the interface declaration:
-- 
--   port (
--     clk       : in     std_logic;
--     dcf_77_in : in     std_logic;
--     dcf_77_s  : out    std_logic;
--     reset_n   : in     std_logic);
-- 
-- EASE/HDL end ----------------------------------------------------------------

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

