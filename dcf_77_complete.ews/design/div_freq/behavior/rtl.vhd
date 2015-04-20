-- EASE/HDL begin --------------------------------------------------------------
-- 
-- Architecture 'behavior' of entity 'div_freq'.
-- 
--------------------------------------------------------------------------------
-- 
-- Copy of the interface declaration:
-- 
--   port (
--     Enable  : in     std_logic;
--     clk     : in     std_logic;
--     div     : in     std_logic_vector(15 downto 0);
--     freq    : out    std_logic;
--     reset_n : in     std_logic);
-- 
-- EASE/HDL end ----------------------------------------------------------------

architecture behavior of div_freq is

signal counter : std_logic_vector(15 downto 0); 

begin

P1:process (clk, reset_n)
	begin
	if(reset_n) = '0' then -- reset asynchrone
		freq <= '0';
		counter <= (OTHERS => '0');
	elsif(clk'EVENT and clk = '1') then
		if (UNSIGNED(counter) = 0 and Enable = '1') then
			counter <= std_logic_vector(UNSIGNED(div) - 1);
			freq <= '1';
		elsif (Enable = '1') then
			counter <= STD_LOGIC_VECTOR(UNSIGNED(counter) - 1);
			freq <= '0';
		end if;
	end if;		
end process;
end architecture behavior ; -- of div_freq

