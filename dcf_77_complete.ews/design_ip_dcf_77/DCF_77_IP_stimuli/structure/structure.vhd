-- EASE/HDL begin --------------------------------------------------------------
-- 
-- Architecture 'structure' of entity 'DCF_77_IP_stimuli'.
-- 
--------------------------------------------------------------------------------
-- 
-- Copy of the interface declaration:
-- 
--   port (
--     Adress      : out    std_logic_vector(3 downto 0);
--     chip_select : out    std_logic;
--     clk         : out    std_logic;
--     data_in     : out    std_logic_vector(7 downto 0);
--     data_out    : in     std_logic_vector(7 downto 0);
--     dcf_77_in   : out    std_logic;
--     read        : out    std_logic;
--     reset_n     : out    std_logic;
--     signal_int  : in     std_logic;
--     start_acq   : in     std_logic;
--     write       : out    std_logic);
-- 
-- EASE/HDL end ----------------------------------------------------------------



architecture structure of DCF_77_IP_stimuli is

--signaux propres au testbench
SIGNAL sim_end      : BOOLEAN   := FALSE;
SIGNAL mark_error   : std_logic := '0';
SIGNAL error_number : INTEGER   :=  0;
SIGNAL clk_gen      : std_logic := '0';

BEGIN
--********** PROCESS "clk_gengen" **********
clk_gengen: PROCESS
  BEGIN
  IF sim_end = FALSE THEN
    clk_gen <= '1', '0' AFTER 1 ns;
    clk     <= '1', '0' AFTER 5 ns, '1' AFTER 17 ns; --commenter si  on teste une fonction combinatoire (pas de clock)
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
  --fixer toutes les entrees du module à tester (DUT)
  PROCEDURE init IS
  BEGIN        
  
   	reset_n		<= '0';
   	chip_select	<= '1'; 
 	read 		<= '0';
	write 		<= '0';
	dcf_77_in   <= '0';
	data_in     <= (OTHERS => 'Z');    

  END init;

  --********** PROCEDURE "test_signal" **********
  PROCEDURE test_signal(signal_test, value: IN std_logic; erreur : IN integer) IS 
	BEGIN
	   IF signal_test/= value THEN
         	mark_error <= '1', '0' AFTER 1 ns;
         	error_number <= erreur;
         	ASSERT FALSE REPORT "Etat du signal non correct" SEVERITY WARNING;
	   END IF;
  END test_signal;

 --********** PROCEDURE "test_vecteur" **********
  PROCEDURE test_vecteur(signal_test, value: IN std_logic_vector(7 DOWNTO 0); erreur : IN integer) IS 
	BEGIN
	   IF signal_test/= value THEN
         	mark_error <= '1', '0' AFTER 1 ns;
         	error_number <= erreur;
         	ASSERT FALSE REPORT "Etat du signal non correct" SEVERITY WARNING;
	   END IF;
  END test_vecteur;         
  
  --********** PROCEDURE "DCF_bit" **********
  PROCEDURE DCF_bit(state_bit: IN std_logic) IS 
	BEGIN
	   IF state_bit = '0' THEN
           	DCF_77_in <= '1', '0' AFTER 2000 us;
     
       ELSIF state_bit = '1' THEN
            DCF_77_in <= '1', '0' AFTER 1000 us;
 
                       
	   END IF;
	   wait for 10000 us;
	   
  END DCF_bit;  
  
  --********** PROCEDURE "DCF_bit" **********
  PROCEDURE DCF_end IS 
	BEGIN
        DCF_77_in <= '0';
      	wait for 10000 us;
   	
  END DCF_end;      
  
   --********** PROCEDURE "WRITE_BYTE" **********
   PROCEDURE WRITE_BYTE (data_write: IN STD_LOGIC_VECTOR(7 downto 0); adr: IN STD_LOGIC_VECTOR(3 downto 0)) IS
     BEGIN
     chip_select <= '1';
     write <= '1';
     
     Adress <= adr;
     data_in <= data_write;
     sim_cycle(1);
     
     chip_select <= '0';
     write <= '0';
     
     data_in <= (OTHERS => 'Z');
   END WRITE_BYTE;
   
   --********** PROCEDURE "READ_BYTE" **********
   PROCEDURE READ_BYTE(adr: IN STD_LOGIC_VECTOR (3 downto 0); data_await:IN STD_LOGIC_VECTOR(7 downto 0);erreur : IN integer) IS
   
   BEGIN
   
     chip_select	<= '1';
     read 		<= '1';
   
     Adress <= adr;
   
     sim_cycle(1);
   
     IF data_await /= data_out THEN
       mark_error <= '1', '0' AFTER 1 ns;
       error_number <= erreur;
       ASSERT FALSE REPORT "Etat du signal non correct" SEVERITY WARNING;
	  END IF;   
     
  	 chip_select	<= '0';
     read 		<= '0';
     
     sim_cycle(1);
     
   END READ_BYTE;
 
  


BEGIN --debut de la simulation temps t=0ns

	init;  --appel procdure init
	ASSERT FALSE REPORT "la simulation est en cour" SEVERITY NOTE;

	--debut des tests
	 sim_cycle(2); 
	 reset_n <= '1';
 
-- PRESCALER ----------------------------------------- 

	 -- T = 25ns
	 -- F = 40 MHz
	 -- Prescaler = F/1'000 = 40'000 

   	--	Prescaler => 1ms => faire 100 fois plus petit pour 10us  = 400
	 
	 
	WRITE_BYTE("10010000",x"3");
	WRITE_BYTE("00000001",x"4");                                             

-- DCF FRAME ----------------------------------------- 
 
 DCF_bit('1');    
 DCF_end;     

	 -- bits 0-14 (témoins d'alertes civiles)
	 DCF_bit('1');  -- bit 0
	 DCF_bit('0');
	 DCF_bit('1');
	 DCF_bit('1');
	 DCF_bit('1');
	 DCF_bit('0');
	 DCF_bit('1');
	 DCF_bit('1');
	 DCF_bit('1');
	 DCF_bit('0');
	 DCF_bit('1');
	 DCF_bit('1');
	 DCF_bit('1');
	 DCF_bit('0');
	 DCF_bit('1');
	  
	 -- bits 15-19 (divers)
	 DCF_bit('0'); -- bit d'appel 
	 DCF_bit('0'); -- annonce un basculement été/hiver (A1)	 
	 DCF_bit('0'); -- bit de décalage horaire (Z1)
	 DCF_bit('0'); -- bit de décalage horaire (Z2)  
	 DCF_bit('0'); -- annonce l'ajout de sec. intercalaire (A2)
	 
	 -- bit de début du codage du temps
	 DCF_bit('1'); -- bit 20 toujours à 1
	       
	 -- bits 21-28 (minutes)
	 DCF_bit('0'); 
	 DCF_bit('0');
	 DCF_bit('0');
	 DCF_bit('0'); -- 30min BCD -> 0011 0000 -> lsb first 
	 DCF_bit('0');
	 DCF_bit('1');
	 DCF_bit('1');
	 DCF_bit('0'); -- Parité paire
	              
	 -- bits 29-35 (heures)
	 DCF_bit('1');
	 DCF_bit('1');
	 DCF_bit('0'); 
	 DCF_bit('0'); -- 23h BCD -> 0010 0011 -> lsb first
	 DCF_bit('0');
	 DCF_bit('1');
	 DCF_bit('1'); -- Parité paire
	 
	 -- bits 36-41 (jour du mois)
	 DCF_bit('1');
	 DCF_bit('0');
	 DCF_bit('0'); -- 19 BCD -> 0001 1001 -> lsb first
	 DCF_bit('1');
	 DCF_bit('1'); 
	 DCF_bit('0');
	 
	 -- bits 42-44 (jour de la semaine) : 1 = Lundi, 7 = Dimanche
	 DCF_bit('1');
	 DCF_bit('1'); -- Dimanche = 7 = 111
	 DCF_bit('1'); 
	 
	 -- bits 45-49 (No du mois)
	 DCF_bit('0');
	 DCF_bit('0');
	 DCF_bit('1'); -- Avril = 4 = 0100
	 DCF_bit('0');
	 DCF_bit('0');
	 
	 -- bits 50-57 (année dans le siècle)
	 DCF_bit('1');
	 DCF_bit('0'); 
	 DCF_bit('1');
	 DCF_bit('0'); -- 15 BCD -> 0001 0101 -> lsb first
	 DCF_bit('1');
	 DCF_bit('0');
	 DCF_bit('0');
	 DCF_bit('0'); 
	 DCF_bit('1'); -- Parité paire
    
	 DCF_end; 	   -- bit de fin de trame, aucune modulation
	                                                         
	 
 -- END FRAME TEST -----------------------------------------  
    
 --	sim_cycle(1);    
 --	test_signal(signal_int,'1', 1 ); -- Error 1 : End of frame is not detected  
 
 -- READ DATAS ---------------------------------------------
	 
	 read <= '1'; 
	 
	 Adress <= x"6"; -- Address of Minutes  
	 sim_cycle(1); 
	 
	 test_vecteur(data_out, "00110000", 2); -- Value of Minutes 
	 sim_cycle(1);	  	  	  	  
	 
	 Adress <= x"7"; -- Address of Hours 
	 sim_cycle(1);
	 
	 test_vecteur(data_out, "00100011", 3); -- Value of Hours 
	 sim_cycle(1); 
	 
	 Adress <= x"8"; -- Address of D of Month  
	 sim_cycle(1); 
	 
	 test_vecteur(data_out, "00011001", 4); -- Value of D of Month  
	 sim_cycle(1);	  	  	  	  
	 
	 Adress <= x"9"; -- Address of D of Week 
	 sim_cycle(1);
	 
	 test_vecteur(data_out, "00000111", 5); -- Value of D of Week
	 sim_cycle(1);
     
     Adress <= x"A"; -- Address of Num of Month 
	 sim_cycle(1);
	 
	 test_vecteur(data_out, "00000100", 6); -- Value of Num of Month 
	 sim_cycle(1);
     
     Adress <= x"B"; -- Address of Year 
	 sim_cycle(1);
	 
	 test_vecteur(data_out, "00010101", 6); -- Value of Year 
	 sim_cycle(1);
	 
     read <= '0';                     	
 		 	

	sim_end <= TRUE;
	wait;

END PROCESS;

end architecture structure ; -- of DCF_77_IP_stimuli


