-- EASE/HDL begin --------------------------------------------------------------
-- 
-- Architecture 'behavior' of entity 'CheckParity'.
-- 
--------------------------------------------------------------------------------
-- 
-- Copy of the interface declaration:
-- 
--   port (
--     ParityD : out    std_logic;
--     ParityH : out    std_logic;
--     ParityM : out    std_logic;
--     dmonth  : in     std_logic_vector(5 downto 0);
--     dweek   : in     std_logic_vector(2 downto 0);
--     hours   : in     std_logic_vector(5 downto 0);
--     minutes : in     std_logic_vector(6 downto 0);
--     month   : in     std_logic_vector(5 downto 0);
--     year    : in     std_logic_vector(7 downto 0));
-- 
-- EASE/HDL end ----------------------------------------------------------------

architecture behavior of CheckParity is

begin          
                                                                                                 
-- Un bit de parit� paire se trouve en faisant un XOR de chacun des bits de la valeur � tester.

ParityM <= minutes(6)  xor minutes(5) xor minutes(4) xor minutes(3) xor minutes(2) xor minutes(1) xor minutes(0);

ParityH <= hours(5) xor hours(4) xor hours(3) xor hours(2) xor hours(1) xor hours(0);

ParityD <= dmonth(5) xor dmonth(4) xor dmonth(3) xor dmonth(2) xor dmonth(1) xor dmonth(0) xor 
		   dweek(2)  xor dweek(1)  xor dweek(0)  xor            
		   month(5)  xor month(4)  xor month(3)  xor month(2)  xor month(1)  xor month(0)  xor 
		   year(7)   xor year(6)   xor year(5)   xor year(4)   xor year(3)   xor year(2)   xor year(1)   xor year(0);
		   

end architecture behavior ; -- of CheckParity

