-- EASE/HDL begin --------------------------------------------------------------
-- 
-- Architecture 'behaviour' of entity 'DCF77_Receiver_stimuli'.
-- 
--------------------------------------------------------------------------------
-- 
-- Copy of the interface declaration:
-- 
--   port (
--     FrameComplete    : in     std_logic;
--     FrameIncorrect   : in     std_logic;
--     FrameReception   : in     std_logic;
--     TEST             : out    std_logic;
--     bit_count_7_seg  : in     std_logic_vector(7 downto 0);
--     clk              : out    std_logic;
--     dcf_77_in        : out    std_logic;
--     debug_leds       : in     std_logic_vector(7 downto 0);
--     hour_minutes_out : in     std_logic_vector(7 downto 0);
--     program_counter  : in     std_logic_vector(7 downto 0);
--     reset_n          : out    std_logic;
--     serial_out       : in     std_logic;
--     switch           : out    std_logic_vector(1 downto 0));
-- 
-- EASE/HDL end ----------------------------------------------------------------

architecture behaviour of DCF77_Receiver_stimuli is

begin

end architecture behaviour ; -- of DCF77_Receiver_stimuli

