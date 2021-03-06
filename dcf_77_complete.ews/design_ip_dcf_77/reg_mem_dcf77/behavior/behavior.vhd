-- EASE/HDL begin --------------------------------------------------------------
-- 
-- Architecture 'behavior' of entity 'reg_mem_dcf77'.
-- 
--------------------------------------------------------------------------------
-- 
-- Copy of the interface declaration:
-- 
--   port (
--     Adress      : in     std_logic_vector(3 downto 0);
--     Enable      : out    std_logic;
--     ParityD     : in     std_logic;
--     ParityH     : in     std_logic;
--     ParityM     : in     std_logic;
--     chip_select : in     std_logic;
--     clk         : in     std_logic;
--     data_in     : in     std_logic_vector(7 downto 0);
--     data_out    : out    std_logic_vector(7 downto 0);
--     prescaler   : out    std_logic_vector(15 downto 0);
--     read        : in     std_logic;
--     reg_dmonth  : in     std_logic_vector(5 downto 0);
--     reg_dweek   : in     std_logic_vector(2 downto 0);
--     reg_flags   : in     std_logic_vector(3 downto 0);
--     reg_hours   : in     std_logic_vector(5 downto 0);
--     reg_minutes : in     std_logic_vector(6 downto 0);
--     reg_month   : in     std_logic_vector(5 downto 0);
--     reg_recbits : in     std_logic_vector(5 downto 0);
--     reg_status  : in     std_logic_vector(7 downto 0);
--     reg_year    : in     std_logic_vector(7 downto 0);
--     reset_n     : in     std_logic;
--     write       : in     std_logic);
-- 
-- EASE/HDL end ----------------------------------------------------------------

architecture behavior of reg_mem_dcf77 is

--Déclarations des constantes
CONSTANT c_rec_bits		: std_logic_vector(3 DOWNTO 0) := "0001"; --Adresse 1
CONSTANT c_status		: std_logic_vector(3 DOWNTO 0) := "0010"; --Adresse 2
CONSTANT c_prescaler_l  : std_logic_vector(3 DOWNTO 0) := "0011"; --Adresse 3
CONSTANT c_prescaler_h	: std_logic_vector(3 DOWNTO 0) := "0100"; --Adresse 4
CONSTANT c_flags		: std_logic_vector(3 DOWNTO 0) := "0101"; --Adresse 5
CONSTANT c_hours		: std_logic_vector(3 DOWNTO 0) := "0110"; --Adresse 6
CONSTANT c_minutes		: std_logic_vector(3 DOWNTO 0) := "0111"; --Adresse 7
CONSTANT c_daymonth		: std_logic_vector(3 DOWNTO 0) := "1000"; --Adresse 8
CONSTANT c_dayweek		: std_logic_vector(3 DOWNTO 0) := "1001"; --Adresse 9
CONSTANT c_month		: std_logic_vector(3 DOWNTO 0) := "1010"; --Adresse A
CONSTANT c_year			: std_logic_vector(3 DOWNTO 0) := "1011";

--Déclarations des registres
signal reg_prescaler 	: std_logic_vector(15 downto 0)	:=x"0000";
                         
signal en1 : std_logic := '0';  -- Enable pour prescaler (attendre que 16 bits soient chargés)
signal en2 : std_logic := '0';

signal wr_acc : std_logic;
signal rd_acc: std_logic;

begin

-- écriture
P1:PROCESS (clk,reset_n)
BEGIN
  IF(reset_n = '0') THEN
    reg_prescaler 	<= (OTHERS => '0');
    en1 <= '0';
    en2 <= '0'; 
    ELSIF (clk'event and clk = '1')THEN
    IF (wr_acc = '1') THEN
      CASE Adress IS
      	WHEN c_prescaler_l => 
      	  	 reg_prescaler(7 downto 0) <= data_in;
      	  	 en1 <= '1';         
      	WHEN c_prescaler_h =>
      		 reg_prescaler(15 downto 8) <= data_in;
      		 en2 <= '1';
      	WHEN OTHERS => null;
      END CASE;
    END IF;
  END IF;
END PROCESS;

--Assignation des sorties
prescaler <= reg_prescaler;
   
--lecture  
P2:PROCESS (rd_acc,Adress,reg_dmonth,reg_dweek,reg_flags,reg_hours,reg_minutes,reg_month,reg_status,reg_year)
BEGIN
  IF rd_acc = '1' THEN
    data_out <= (OTHERS => '0');
    CASE Adress IS
      WHEN c_rec_bits =>
           data_out <= "00"& reg_recbits;     
      WHEN c_status =>
      	   data_out <= reg_status;
      	   data_out(7) <= ParityD xnor reg_status(4);
      	   data_out(6) <= ParityH xnor reg_status(3);
      	   data_out(5) <= ParityM xnor reg_status(2);     	   
      WHEN c_prescaler_l =>
      	   data_out <= reg_prescaler(7 downto 0);
      WHEN c_prescaler_h =>
      	   data_out <= reg_prescaler(15 downto 8);
      WHEN c_flags =>
           data_out <= "0000"&reg_flags;
      WHEN c_hours =>
      	   data_out <= "00" & reg_hours;
      WHEN c_minutes =>
      	   data_out <= "0" & reg_minutes;
      WHEN c_daymonth =>
      	   data_out <= "00" & reg_dmonth;
      WHEN c_dayweek =>
      	   data_out <= "00000" & reg_dweek;
      WHEN c_month =>
      	   data_out <= "00" & reg_month;
      WHEN c_year => 
      	   data_out <= reg_year;
      WHEN OTHERS =>
      		null;  
      	   
    END CASE;
  END IF;                                                                                
END PROCESS;

--Signaux combinatoire
wr_acc <= '1' WHEN write = '1' and chip_select = '1' ELSE '0';
rd_acc <= '1' WHEN read = '1' and chip_select = '1' ELSE '0';

Enable <= '1' WHEN en1 = '1' and en2 = '1' ELSE '0';

end architecture behavior ; -- of reg_mem_dcf77

