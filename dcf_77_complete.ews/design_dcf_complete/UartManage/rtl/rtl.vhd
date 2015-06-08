-- EASE/HDL begin --------------------------------------------------------------
-- 
-- Architecture 'rtl' of entity 'UartManage'.
-- 
--------------------------------------------------------------------------------
-- 
-- Copy of the interface declaration:
-- 
--   port (
--     clk          : in     std_logic;
--     data_in      : in     std_logic_vector(7 downto 0);
--     data_out     : out    std_logic_vector(7 downto 0);
--     reset_buffer : out    std_logic;
--     reset_n      : in     std_logic;
--     uart_cs      : in     std_logic;
--     write        : in     std_logic;
--     write_buffer : out    std_logic);
-- 
-- EASE/HDL end ----------------------------------------------------------------

architecture rtl of UartManage is
       
signal data    : std_logic_vector(7 downto 0); 

begin     

P1 : process(clk,reset_n) IS
begin
	if reset_n = '0' then
 		data <= (others => '0');
 		reset_buffer <= '1';  -- Vide le buffer si l'uart n'est pas sélectionné.           	
	 		
	elsif(clk'EVENT and clk = '1')then 
		if uart_cs = '1' then    
			reset_buffer <= '0';
			if write = '1' then
				reset_buffer <= '0';       
				write_buffer <= '1'; -- Demande un écriture des entrées FIFO dans le buffer
			   	data <= data_in;       	
			 end if;
		else 
			write_buffer <= '0'; -- Demande un écriture des entrées FIFO dans le buffer
			  	   	end if;
  
	end if;
end process;

data_out <= data;

end architecture rtl ; -- of UartManage

