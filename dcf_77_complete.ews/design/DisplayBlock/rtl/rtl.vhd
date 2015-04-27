-- EASE/HDL begin --------------------------------------------------------------
-- 
-- Architecture 'rtl' of entity 'DisplayBlock'.
-- 
--------------------------------------------------------------------------------
-- 
-- Copy of the interface declaration:
-- 
--   port (
--     FrameComplete    : out    std_logic;
--     FrameIncorrect   : out    std_logic;
--     FrameReception   : out    std_logic;
--     adress           : in     std_logic_vector(2 downto 0);
--     adress_program   : in     std_logic_vector(9 downto 0);
--     bit_count_7_seg  : out    std_logic_vector(7 downto 0);
--     chip_select      : in     std_logic;
--     clk              : in     std_logic;
--     data_in          : in     std_logic_vector(7 downto 0);
--     debug_leds       : out    std_logic_vector(7 downto 0);
--     hour_minutes_out : out    std_logic_vector(7 downto 0);
--     program_counter  : out    std_logic_vector(7 downto 0);
--     reset_n          : in     std_logic;
--     switch           : in     std_logic_vector(1 downto 0);
--     write            : in     std_logic);
-- 
-- EASE/HDL end ----------------------------------------------------------------

architecture rtl of DisplayBlock is

begin

end architecture rtl ; -- of DisplayBlock

