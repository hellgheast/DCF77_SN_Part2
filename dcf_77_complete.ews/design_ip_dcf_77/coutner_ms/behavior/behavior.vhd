-- EASE/HDL begin --------------------------------------------------------------
-- 
-- Architecture 'behavior' of entity 'coutner_ms'.
-- 
--------------------------------------------------------------------------------
-- 
-- Copy of the interface declaration:
-- 
--   port (
--     clk                : in     std_logic;
--     dcf_77_s           : in     std_logic;
--     freq               : in     std_logic;
--     high_ms_count      : out    std_logic_vector(7 downto 0);
--     reset_n            : in     std_logic;
--     rising_edge_dcf_77 : in     std_logic);
-- 
-- EASE/HDL end ----------------------------------------------------------------
  
architecture behavior of coutner_ms is

signal counter : std_logic_vector(7 DOWNTO 0); --Signal interne pour compteur

begin 

P1:process (clk, reset_n)           

	begin                  
	
	if(reset_n = '0') then -- reset asynchrone
		counter  <= (OTHERS => '0'); 
		
	elsif(clk'EVENT and clk = '1') then 
	
		if rising_edge_dcf_77 = '1' then
		  	counter  <= (OTHERS => '0');      
		  
	    elsif freq = '1' and dcf_77_s = '1' then
			counter <= STD_LOGIC_VECTOR(UNSIGNED(counter) + 1); 
		
		end if; 
		
	end if;	  
		
end process;    
        
high_ms_count <= counter;

end architecture behavior ; -- of coutner_ms

