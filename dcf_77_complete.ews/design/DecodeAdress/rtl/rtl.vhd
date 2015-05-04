-- EASE/HDL begin --------------------------------------------------------------
-- 
-- Architecture 'rtl' of entity 'DecodeAdress'.
-- 
--------------------------------------------------------------------------------
-- 
-- Copy of the interface declaration:
-- 
--   port (
--     adress              : in     std_logic_vector(7 downto 0);
--     adress_dcf          : out    std_logic_vector(3 downto 0);
--     adress_displayblock : out    std_logic_vector(2 downto 0);
--     adress_mux_dcf_test : out    std_logic_vector(1 downto 0);
--     dcf_cs              : out    std_logic;
--     displayblock_cs     : out    std_logic;
--     uart_tx_cs          : out    std_logic);
-- 
-- EASE/HDL end ----------------------------------------------------------------

architecture rtl of DecodeAdress is

                                                           
constant DCF_select 			: std_logic_vector(3 downto 0) := x"0000";
constant DisplayBlock_select  : std_logic_vector(3 downto 0) := x"0001";
constant Mux_select 			: std_logic_vector(3 downto 0) := x"0010";
constant UART_select 			: std_logic_vector(3 downto 0) := x"0011";

signal Adress_MSB 			: std_logic_vector(3 downto 0);

begin
     
	Adress_MSB <= adress(7 downto 4);
	
	case Adress_MSB is
		
		when DCF_select => 
			-- Chips Selects
			dcf_cs <= '1';
			displayblock_cs <= '0';
		    uart_tx_cs <= '0';  
		    
		    -- Addresses
		    adress_dcf <= adress(3 downto 0);
		    adress_mux_dcf_test <= (others => '0');
		    
		when DisplayBlock_select => 
			-- Chips Selects
			dcf_cs <= '0';
			displayblock_cs <= '1';
		    uart_tx_cs <= '0';  
		    
		    -- Addresses
		    adress_displayblock <= adress(2 downto 0); 
		    adress_mux_dcf_test <= (others => '0');
		    
		when Mux_select => 
			-- Chips Selects
			dcf_cs <= '0';
			displayblock_cs <= '0';
		    uart_tx_cs <= '0';  
		    
		    -- Addresses
	        adress_mux_dcf_test <= adress(1 downto 0);
	        
		when UART_select => 
			-- Chips Selects
			dcf_cs <= '0';
			displayblock_cs <= '0';
		    uart_tx_cs <= '1';  
		    
		    -- Addresses  
		    adress_mux_dcf_test <= (others => '0');
		     
		when others => 
			dcf_cs <= '0';
			displayblock_cs <= '0';
		    uart_tx_cs <= '0'; 
		    
		    adress_dcf 			<= (others => '0'); 
		    adress_displayblock <= (others => '0');
		    adress_mux_dcf_test <= (others => '0');
		    
		end case;
		   
		    
end architecture rtl ; -- of DecodeAdress

