-- EASE/HDL begin --------------------------------------------------------------
-- 
-- Architecture 'behavior' of entity 'decode_RBG'.
-- 
--------------------------------------------------------------------------------
-- 
-- Copy of the interface declaration:
-- 
--   port (
--     RBG        : out    std_logic_vector(1 downto 0);
--     bit_count  : in     std_logic_vector(5 downto 0);
--     clk        : in     std_logic;
--     getNothing : in     std_logic;
--     reset_n    : in     std_logic;
--     start      : in     std_logic;
--     stop       : in     std_logic);
-- 
-- EASE/HDL end ----------------------------------------------------------------

architecture behavior of decode_RBG is
       
signal getNot    : std_logic := '0';
signal busyTemp  : std_logic := '0';
signal readyTemp : std_logic := '0';

begin     

P1 : process(clk,reset_n) IS
begin
	if reset_n = '0' then
 		RBG <= (others => '0');
 		getNot <= '0';
 		busyTemp <= '0';
 		readyTemp <= '0'; 
 		 		
	elsif(clk'EVENT and clk = '1')then 
		if start = '0' then 
			if getNothing = '1' then
				readyTemp <= '0';
				busyTemp <= '0';
				getNot <= '1';
				
			elsif stop = '1' then 
				busyTemp <= '0';
				if bit_count >= "111011" then
  	   				readyTemp <= '1'; 
  	   			else   
  	   				readyTemp <= '0';
  	   			end if;   
  	   			
  	   		end if;
  	   		 	
		else
			getNot <= '0';
  	   	 	busyTemp <= '1';
  	   		readyTemp <= '0';
  	   	
  	   	end if;
		       
	end if;
	
end process;

RBG <= "00" when getNot = '1' 	 else
	   "01" when busyTemp = '1'  else 
	   "10" when readyTemp = '1' else 
	   "11";



end architecture behavior ; -- of decode_RBG

