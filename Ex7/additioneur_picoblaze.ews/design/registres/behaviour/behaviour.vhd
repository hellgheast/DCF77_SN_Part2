-- EASE/HDL begin --------------------------------------------------------------
-- 
-- Architecture 'behaviour' of entity 'registres'.
-- 
--------------------------------------------------------------------------------
-- 
-- Copy of the interface declaration:
-- 
--   port (
--     carry_out    : out    std_logic;
--     clk          : in     std_logic;
--     out_port     : in     std_logic_vector(7 downto 0);
--     port_id      : in     std_logic_vector(7 downto 0);
--     reset_n      : in     std_logic;
--     resultat     : out    std_logic_vector(7 downto 0);
--     write_strobe : in     std_logic);
-- 
-- EASE/HDL end ----------------------------------------------------------------

architecture behaviour of registres is

begin

p1:PROCESS (clk,reset_n)
BEGIN
	IF reset_n = '0' THEN
		 resultat <= (OTHERS => '0');
		 carry_out <= '0';
	ELSIF clk'EVENT AND clk = '1' THEN
		IF WRITE_STROBE = '1' THEN
			CASE PORT_ID IS
				WHEN X"03" =>	 
					 resultat <= OUT_PORT;
				WHEN X"04" =>	 
					 carry_out <=	OUT_PORT(0);
				WHEN OTHERS => NULL;
			END CASE;
		END IF;
	END IF;
END PROCESS;

end architecture behaviour ; -- of registres

