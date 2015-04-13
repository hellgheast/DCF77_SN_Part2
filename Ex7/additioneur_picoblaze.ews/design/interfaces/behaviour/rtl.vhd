-- EASE/HDL begin --------------------------------------------------------------
-- 
-- Architecture 'behaviour' of entity 'interfaces'.
-- 
--------------------------------------------------------------------------------
-- 
-- Copy of the interface declaration:
-- 
--   port (
--     clk           : in     std_logic;
--     in_port       : out    std_logic_vector(7 downto 0);
--     interrupt     : out    std_logic;
--     interrupt_ack : in     std_logic;
--     nombre1       : in     std_logic_vector(7 downto 0);
--     nombre2       : in     std_logic_vector(7 downto 0);
--     port_id       : in     std_logic_vector(7 downto 0);
--     read_strobe   : in     std_logic;
--     reset         : out    std_logic;
--     reset_n       : in     std_logic);
-- 
-- EASE/HDL end ----------------------------------------------------------------

architecture behaviour of interfaces is

begin

p1:PROCESS (clk,reset_n)
BEGIN
	IF reset_n = '0' THEN
		 IN_PORT <= (OTHERS => '0');
	ELSIF clk'EVENT AND clk = '1' THEN
		IF PORT_ID = X"01" THEN   
			 IN_PORT <= nombre1;
		ELSIF PORT_ID = X"02" THEN   
			 IN_PORT <= nombre2; 
		ELSE 
             IN_PORT <= (OTHERS => '0');
        END IF;
	END IF;
END PROCESS;

--IN_PORT <= 	nombre1 WHEN PORT_ID = X"01" ELSE 
--				nombre2 WHEN PORT_ID = X"02" ELSE 
--				"00000000";

RESET <= NOT reset_n;

interrupt <= '0';

end architecture behaviour ; -- of interfaces

