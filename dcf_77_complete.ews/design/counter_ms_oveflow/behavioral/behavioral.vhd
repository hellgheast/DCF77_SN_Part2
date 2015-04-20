-- EASE/HDL begin --------------------------------------------------------------
-- 
-- Architecture 'behavioral' of entity 'counter_ms_oveflow'.
-- 
--------------------------------------------------------------------------------
-- 
-- Copy of the interface declaration:
-- 
--   port (
--     clk                : in     std_logic;
--     freq               : in     std_logic;
--     reset_n            : in     std_logic;
--     rising_edge_dcf_77 : in     std_logic;
--     sec_overflow       : out    std_logic);
-- 
-- EASE/HDL end ----------------------------------------------------------------


architecture behavioral of counter_ms_oveflow is

signal counter : std_logic_vector(11 DOWNTO 0); --Signal interne pour compteur, BitCount va jusqu'à 60
signal en_count : std_logic;

begin

P1:process (clk, reset_n)
	begin
	if(reset_n) = '0' then -- reset asynchrone
		counter  <= (OTHERS => '0');
		sec_overflow <= '0';
	elsif(clk'EVENT and clk = '1') then
		if rising_edge_dcf_77 = '1' then 
			en_count <= '1';
			counter <= (OTHERS => '0');
		end if;
		
		if counter > x"3E8" then        
			sec_overflow <= '1';
			counter <= (OTHERS => '0');
			en_count <= '0';
		elsif freq = '1' and en_count = '1' then      	
			sec_overflow <= '0';
			counter <= STD_LOGIC_VECTOR(UNSIGNED(counter) + 1);
		end if;      
			
	end if;		
end process;          

end architecture behavioral ; -- of counter_ms_oveflow

