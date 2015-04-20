-- EASE/HDL begin --------------------------------------------------------------
-- 
-- Architecture 'behavioral' of entity 'rising_edge_dectection'.
-- 
--------------------------------------------------------------------------------
-- 
-- Copy of the interface declaration:
-- 
--   port (
--     clk                : in     std_logic;
--     dcf_77_s           : in     std_logic;
--     reset_n            : in     std_logic;
--     rising_edge_dcf_77 : out    std_logic);
-- 
-- EASE/HDL end ----------------------------------------------------------------

architecture behavioral of rising_edge_dectection is
    
signal sync1 : std_logic := '0';

begin       

P1:process(clk, reset_n) is
	begin
	if reset_n = '0' then
		--rising_edge_dcf_77 <= '0';
	elsif (clk = '1' and clk'event) then
	     sync1 <= dcf_77_s;
	end if;
end process;

rising_edge_dcf_77 <= '1' when (dcf_77_s = '1' and sync1 = '0') else '0';
 
end architecture behavioral ; -- of rising_edge_dectection

