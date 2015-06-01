-- EASE/HDL begin --------------------------------------------------------------
-- 
-- Architecture 'rtl' of entity 'DisplayBlock'.
-- 
--------------------------------------------------------------------------------
-- 
-- Copy of the interface declaration:
-- 
--   port (
--     FrameComplete   : out    std_logic;
--     FrameIncorrect  : out    std_logic;
--     FrameReception  : out    std_logic;
--     adress          : in     std_logic_vector(2 downto 0);
--     adress_program  : in     std_logic_vector(9 downto 0);
--     chip_select     : in     std_logic;
--     clk             : in     std_logic;
--     data_in         : in     std_logic_vector(7 downto 0);
--     debug_leds      : out    std_logic_vector(7 downto 0);
--     program_counter : out    std_logic_vector(7 downto 0);
--     reset_n         : in     std_logic;
--     switch          : in     std_logic_vector(1 downto 0);
--     time_bc_out     : out    std_logic_vector(7 downto 0);
--     write           : in     std_logic);
-- 
-- EASE/HDL end ----------------------------------------------------------------

architecture rtl of DisplayBlock is
 
constant bit_count_addr 	: std_logic_vector(2 downto 0) := "000";
constant hour_addr   		: std_logic_vector(2 downto 0) := "001";
constant min_addr			: std_logic_vector(2 downto 0) := "010";
constant debug_led_addr 	: std_logic_vector(2 downto 0) := "011";
constant status_addr  		: std_logic_vector(2 downto 0) := "100";

signal Reg_bit_count 		: std_logic_vector(7 downto 0);
signal Reg_hour				: std_logic_vector(7 downto 0); 
signal Reg_minutes			: std_logic_vector(7 downto 0);
signal Reg_debug_leds 		: std_logic_vector(7 downto 0);  
signal Reg_status		 	: std_logic_vector(7 downto 0);

begin

P1:process(clk, reset_n)

	begin
     
	if reset_n = '1' then
	 	Reg_bit_count   <= (others => '0');
	 	Reg_hour	    <= (others => '0');
		Reg_minutes	    <= (others => '0');
	 	Reg_debug_leds  <= (others => '0');
	 	Reg_status	    <= (others => '0');
	    program_counter <= (others => '0');
	
	elsif clk'EVENT AND clk = '1' then
	
		if chip_select = '1' then 
            
            if write = '1' then
            
				program_counter <= adress_program(7 downto 0);
			 
				case adress is
			
			   		when bit_count_addr => 
						Reg_debug_leds <= data_in;
					when hour_addr =>
						Reg_hour <= data_in;  
				   	when min_addr =>
				   		Reg_minutes <= data_in;  
					when debug_led_addr =>
						Reg_debug_leds <= data_in; 
						
					when status_addr =>
						Reg_status <= data_in;  
						
					when others =>       
						null;
				
				end case; 
			end if;
 		end if;   
 	end if;
 	
end process;

debug_leds		<= Reg_debug_leds;
FrameComplete 	<= '1' WHEN Reg_status(1 downto 0) = "10" ELSE '0';
FrameIncorrect 	<= (Reg_status(2) XOR Reg_status(5)) OR (Reg_status(3) XOR Reg_status(6))OR (Reg_status(4) XOR Reg_status(7));
FrameReception 	<= '1' WHEN Reg_status(1 downto 0) = "01" ELSE '0';

time_bc_out		<= Reg_hour when switch(1) = '0' else	
				   Reg_minutes when switch(1) = '1' else
				   Reg_bit_count when switch(0) = '1'
				   (others => '0');						
		
	
	

end architecture rtl ; -- of DisplayBlock

