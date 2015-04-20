-- EASE/HDL begin --------------------------------------------------------------
-- 
-- Architecture 'behavior' of entity 'counter_ms_getN'.
-- 
--------------------------------------------------------------------------------
-- 
-- Copy of the interface declaration:
-- 
--   port (
--     clk        : in     std_logic;
--     freq       : in     std_logic;
--     getNothing : out    std_logic;
--     reset_n    : in     std_logic;
--     stop_temp  : in     std_logic);
-- 
-- EASE/HDL end ----------------------------------------------------------------
         

architecture behavior of counter_ms_getN is

signal counter : std_logic_vector(9 DOWNTO 0); --Signal interne pour compteur

begin

P1:process (clk, reset_n)           

	begin                  
	
	if(reset_n) = '0' then -- reset asynchrone
		getNothing <= '0';
		counter  <= (OTHERS => '0'); 
		
	elsif(clk'EVENT and clk = '1') then        
	     if stop_temp  = '0' then
	     	getNothing <= '0';  
	     	counter  <= (OTHERS => '0');
	     	      	
	     elsif stop_temp = '1' then	 
	         	
	     counter <= STD_LOGIC_VECTOR(UNSIGNED(counter) + 1);   
	       IF counter > x"3E8" then
	         counter  <= (OTHERS => '0');
	         getNothing <= '1';
	       END IF;      
	     	
         END IF;   
         	
	end if;	  
		
end process;    

end architecture behavior ; -- of counter_ms_getN

