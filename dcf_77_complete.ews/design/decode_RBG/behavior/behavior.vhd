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
       
signal getNot    : std_logic;
signal busyTemp  : std_logic;
signal readyTemp : std_logic;

begin     

P1 : process(clk,reset_n) IS
begin
	if reset_n = '0' then
 		RBG <= (others => '0');
 		busyTemp <= '0';
 		readyTemp <= '0'; 
 		getNot <= '0';
 		
	elsif  (clk = '1' AND clk'event) THEN  
		 
		-- GETNOTHING --> première priorité 
  	   	if getNothing = '0' then
  	   		getNot <= '0';
  	   		
	   		-- BUSY --> deuxième priorité 
  	   		if stop = '1' then   -- Priorité sur le stop
  	   			busyTemp <= '0';
  	   			
    	   		-- READY --> troisième priorité 
  	   			if stop = '1' and bit_count >= "111011" then
  	   				readyTemp <= '1';
  	   			else
  	   				readyTemp <= '0';
  	   			end if;	   			
  	   				
		    elsif start = '1' then   
  	   			busyTemp <= '1';
  	   			readyTemp <= '0';
  	   		end if;
   	
  	   	else
  	   		getNot <= '1'; 
  	   		busyTemp <= '0';
 			readyTemp <= '0'; 
  	   	end if;
  	   	  		       
	end if;
end process; 

RBG <= "00" when getNot = '1' and  busyTemp = '0' and readyTemp = '0' else
	   "01" when getNot = '0' and  busyTemp = '1' and readyTemp = '0' else 
	   "10" when getNot = '0' and  busyTemp = '0' and readyTemp = '1' else 
	   "11";

end architecture behavior ; -- of decode_RBG

