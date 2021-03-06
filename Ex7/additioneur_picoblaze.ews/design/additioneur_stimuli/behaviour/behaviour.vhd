-- EASE/HDL begin --------------------------------------------------------------
-- 
-- Architecture 'behaviour' of entity 'additioneur_stimuli'.
-- 
--------------------------------------------------------------------------------
-- 
-- Copy of the interface declaration:
-- 
--   port (
--     carry_out : in     std_logic;
--     clk       : out    std_logic;
--     nombre1   : out    std_logic_vector(7 downto 0);
--     nombre2   : out    std_logic_vector(7 downto 0);
--     reset_n   : out    std_logic;
--     resultat  : in     std_logic_vector(7 downto 0));
-- 
-- EASE/HDL end ----------------------------------------------------------------

architecture behaviour of additioneur_stimuli is

    SIGNAL sim_end      	: BOOLEAN   := FALSE;
	SIGNAL mark_error   	: std_logic := '0';
	SIGNAL error_number 	: INTEGER   := 0;
	SIGNAL clk_gen      	: std_logic := '0';
	
begin  

--********** PROCESS "clk_gengen" **********
clk_gengen: PROCESS
  BEGIN
  IF sim_end = FALSE THEN
    clk_gen <= '1', '0' AFTER 1 ns;
    clk     <= '1', '0' AFTER 5 ns, '1' AFTER 17 ns;
    wait for 25 ns;
  ELSE
    wait;
  END IF;
END PROCESS;

--********** PROCESS "run" **********
run: PROCESS

  PROCEDURE sim_cycle(num : IN integer) IS
  BEGIN
    FOR index IN 1 TO num LOOP
      wait until clk_gen'EVENT AND clk_gen = '1';
    END LOOP;
  END sim_cycle;

  --********** PROCEDURE "init" **********
  PROCEDURE init IS
  BEGIN	
  	reset_n     <= '0';
   	nombre1		<= "00000000"; 
	nombre2		<= "00000000";       
  END init;

  --********** PROCEDURE "test_somme" **********
  PROCEDURE test_somme(value : IN std_logic_vector(7 DOWNTO 0); erreur : IN integer) IS 
	BEGIN
	   IF resultat /= value THEN
         	mark_error <= '1', '0' AFTER 1 ns;
         	error_number <= erreur;
         	ASSERT FALSE REPORT "Etat de l'affichage 7 segment non correct" SEVERITY WARNING;
	   END IF;
  END test_somme;

  --********** PROCEDURE "test_carry" **********
  PROCEDURE test_carry(value : IN std_logic; erreur : IN integer) IS 
	BEGIN
	   IF carry_out /= value THEN
         	mark_error <= '1', '0' AFTER 1 ns;
         	error_number <= erreur;
         	ASSERT FALSE REPORT "Etat de l'affichage 7 segment non correct" SEVERITY WARNING;
	   END IF;
  END test_carry;

  
  
BEGIN
	init;
	ASSERT FALSE REPORT "Simulation started" SEVERITY NOTE;
	sim_cycle(10);
   	reset_n  <= '1';
	sim_cycle(30);
	test_somme("00000000",1);
	sim_cycle(1);
	test_carry('0',2);

	nombre1		<= "11110000";   --240
	nombre2		<= "00001111";	 --15
	sim_cycle(30);
	test_somme("11111111",3);	 --255
	sim_cycle(1);
	test_carry('0',4);

	nombre1		<= "10000000"; 	--128
	nombre2		<= "10000000";	--128
	sim_cycle(30);
	test_somme("00000000",5);
	sim_cycle(1);
	test_carry('1',6);

	nombre1		<= "10000000"; 	--128
	nombre2		<= "11111111";	--255
	sim_cycle(30);
	test_somme("01111111",7);
	sim_cycle(1);
	test_carry('1',8);

	nombre1		<= "01111111"; 	--127
	nombre2		<= "01111111";	--127
	sim_cycle(30);
	test_somme("11111110",9);	--254
	sim_cycle(1);
	test_carry('0',10);

	sim_cycle(5); 
	sim_end <= TRUE;
	wait;

END PROCESS;

end architecture behaviour ; -- of additioneur_stimuli

