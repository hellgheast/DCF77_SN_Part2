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
                 
signal Reg_bit_count 		: std_logic_vector(7 downto 0);
signal Reg_hour				: std_logic_vector(7 downto 0); 
signal Reg_minutes			: std_logic_vector(7 downto 0);
signal Reg_debug_leds 		: std_logic_vector(7 downto 0);  
signal Reg_status		 	: std_logic_vector(7 downto 0); 
 
signal bit_count_addr 	: std_logic_vector(3 downto 0) := x"000";
signal hour_min_addr   	: std_logic_vector(3 downto 0) := x"001";
signal debug_led_addr 	: std_logic_vector(3 downto 0) := x"010";
signal prog_count_addr 	: std_logic_vector(3 downto 0) := x"011";
signal status_addr  	: std_logic_vector(3 downto 0) := x"100";

begin

P1:process(clk, reset_n)

	begin
     
	if reset_n = '1' then
	
	
	
	elsif clk'EVENT AND clk = '1' then
		if chip_select = '1' then 
            
			program_counter <= adress_program(7 downto 0);
			 
			case adress is
			
				when bit_count_addr => 
					Reg_debug_leds <= data_in;
					
				when hour_min_addr =>
					if switch = "00" then
				   		Reg_hour <= data_in;  
				   	elsif switch = "10" then
				   	   	Reg_minutes <= data_in;  
					
				when debug_led_addr =>
					Reg_debug_leds <= data_in;					
					
				when others =>       
					null;
				
			end case;
 	end if; 
 	
 end process;
 
 					
		
	
	

end architecture rtl ; -- of DisplayBlock

