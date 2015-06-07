-- EASE/HDL begin --------------------------------------------------------------
-- 
-- Architecture 'rtl' of entity 'amp_int'.
-- 
--------------------------------------------------------------------------------
-- 
-- Copy of the interface declaration:
-- 
--   port (
--     clk       : in     std_logic;
--     reset_n   : in     std_logic;
--     start_acq : out    std_logic;
--     stop      : in     std_logic);
-- 
-- EASE/HDL end ----------------------------------------------------------------

architecture rtl of amp_int is

signal signal_int_latch	:std_logic;

begin

process (clk,reset_n)
begin
  IF reset_n = '0' THEN
    signal_int_latch <= '0';    
  ELSIF clk'EVENT AND clk = '1' THEN
    signal_int_latch <= stop;
  END IF;
end process;

start_acq <= signal_int_latch OR  stop;



end architecture rtl ; -- of amp_int

