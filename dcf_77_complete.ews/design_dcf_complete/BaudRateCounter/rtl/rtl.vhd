-- EASE/HDL begin --------------------------------------------------------------
-- 
-- Architecture 'rtl' of entity 'BaudRateCounter'.
-- 
--------------------------------------------------------------------------------
-- 
-- Copy of the interface declaration:
-- 
--   port (
--     clk          : in     std_logic;
--     en_16_x_baud : out    std_logic;
--     reset_n      : in     std_logic;
--     start_tr     : in     std_logic;
--     uart_cs      : in     std_logic);
-- 
-- EASE/HDL end ----------------------------------------------------------------

architecture rtl of BaudRateCounter is

signal counter : std_logic_vector(7 DOWNTO 0); --Signal interne pour compteur

begin 

P1:process (clk, reset_n)           

	begin                  
	
	if(reset_n = '0') then -- reset asynchrone
		counter  <= (OTHERS => '0'); 
		
	elsif(clk'EVENT and clk = '1') then   
	  if counter = x"16" then -- si = 22
	   	   counter <= (OTHERS => '0');  
	   	   en_16_x_baud <= '1';  
	  else
		   counter <= STD_LOGIC_VECTOR(UNSIGNED(counter) + 1); 
		   en_16_x_baud <= '0';	
	  end if; 
			
	end if;	  
		
end process;    

end architecture rtl ; -- of BaudRateCounter

