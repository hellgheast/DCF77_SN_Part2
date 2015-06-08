-- EASE/HDL begin --------------------------------------------------------------
-- 
-- Architecture 'behaviour' of entity 'DCF77_Receiver_stimuli'.
-- 
--------------------------------------------------------------------------------
-- 
-- Copy of the interface declaration:
-- 
--   port (
--     FrameComplete    : in     std_logic;
--     FrameIncorrect   : in     std_logic;
--     FrameReception   : in     std_logic;
--     TEST             : out    std_logic;
--     clk              : out    std_logic;
--     dcf_77_in        : out    std_logic;
--     debug_leds       : in     std_logic_vector(7 downto 0);
--     program_counter  : in     std_logic_vector(7 downto 0);
--     reset_n          : out    std_logic;
--     serial_out       : in     std_logic;
--     switch           : out    std_logic_vector(1 downto 0);
--     time_bc_7seg_lsb : in     std_logic_vector(6 downto 0);
--     time_bc_7seg_msb : in     std_logic_vector(6 downto 0));
-- 
-- EASE/HDL end ----------------------------------------------------------------


architecture behaviour of DCF77_Receiver_stimuli is

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
  --fixer toutes les entrees du module � tester (DUT)
  PROCEDURE init IS
  BEGIN        
  
   	reset_n		<= '0';
   	switch		<= "00"; 
 	test 		<= '1';
 	dcf_77_in   <= '0';  

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
                       
   --********** PROCEDURE "test_segment" **********
  PROCEDURE test_segment(signal_test, value: IN std_logic_vector(6 DOWNTO 0); erreur : IN integer) IS 
	BEGIN
	   IF signal_test/= value THEN
         	mark_error <= '1', '0' AFTER 1 ns;
         	error_number <= erreur;
         	ASSERT FALSE REPORT "Etat du signal non correct" SEVERITY WARNING;
	   END IF;
  END test_segment;
  
  --********** PROCEDURE "DCF_bit" **********
  PROCEDURE DCF_bit(state_bit: IN std_logic) IS 
	BEGIN
	   IF state_bit = '0' THEN
           	--DCF_77_in <= '1', '0' AFTER 2000 us; 
           	DCF_77_in <= '1', '0' AFTER 20 us;
     
       ELSIF state_bit = '1' THEN
            --DCF_77_in <= '1', '0' AFTER 1000 us; 
            DCF_77_in <= '1', '0' AFTER 10 us;
 
                       
	   END IF;
	   --wait for 10000 us;
	   wait for 100 us;
	   
  END DCF_bit;  
  
  --********** PROCEDURE "DCF_bit" **********
  PROCEDURE DCF_end IS 
	BEGIN
        DCF_77_in <= '0';
      	--wait for 10000 us;
      	wait for 100 us;
   	
  END DCF_end;      
   


BEGIN --debut de la simulation temps t=0ns

	init;  --appel procdure init
	ASSERT FALSE REPORT "la simulation est en cour" SEVERITY NOTE;

	--debut des tests
	 sim_cycle(20); 
	 reset_n <= '1';
 
-- PRESCALER ----------------------------------------- 

	 -- T = 25ns
	 -- F = 40 MHz
	 -- Prescaler = F/1'000 = 40'000 

   	--	Prescaler => 1ms => faire 100 fois plus petit pour 10us  = 400
	 

                                                     

-- DCF FRAME ----------------------------------------- 
 
 	 DCF_bit('1');    
 	 DCF_end;  

 	 DCF_bit('1');    
 	 DCF_end;  
 	 
 	 -- Test de r�ception de trame
 	 test_signal(FrameReception, '0', 0);   

	 -- bits 0-14 (t�moins d'alertes civiles)
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
	      
	 -- Test de bitcount et de r�ception de trame            
 	 switch <= "01"; -- Choix = Bitcount
 	  
	 test_segment(time_bc_7seg_lsb, "0110011", 1); -- bit 14
	 test_segment(time_bc_7seg_msb, "0110000", 2); -- bit 14 
	 test_signal(FrameReception, '1', 3);
	 
	 -- bits 15-19 (divers)
	 DCF_bit('0'); -- bit d'appel 
	 DCF_bit('1'); -- annonce un basculement �t�/hiver (A1)	 
	 DCF_bit('0'); -- bit de d�calage horaire (Z1)
	 DCF_bit('1'); -- bit de d�calage horaire (Z2)  
	 DCF_bit('0'); -- annonce l'ajout de sec. intercalaire (A2)
	 
	 -- bit de d�but du codage du temps
	 DCF_bit('1'); -- bit 20 toujours � 1
	       
	 -- bits 21-28 (minutes)
	 DCF_bit('0'); 
	 DCF_bit('0');
	 DCF_bit('0');
	 DCF_bit('0'); -- 30min BCD -> 0011 0000 -> lsb first 
	 DCF_bit('1');
	 DCF_bit('1');
	 DCF_bit('0');
	 DCF_bit('0'); -- Parit� paire
	 
	 -- Test de bitcount et de r�ception de trame       
	 test_segment(time_bc_7seg_lsb, "1111111", 4); -- bit 28
	 test_segment(time_bc_7seg_msb, "1101101", 5); -- bit 28      
	 test_signal(FrameReception, '1', 6);
	                 
	 -- bits 29-35 (heures)
	 DCF_bit('1');
	 DCF_bit('1');
	 DCF_bit('0'); 
	 DCF_bit('0'); -- 23h BCD -> 0010 0011 -> lsb first
	 DCF_bit('0');
	 DCF_bit('1');
	 DCF_bit('1'); -- Parit� paire
	 
	 -- bits 36-41 (jour du mois)
	 DCF_bit('1');
	 DCF_bit('0');
	 DCF_bit('0'); -- 19 BCD -> 0001 1001 -> lsb first
	 DCF_bit('1');
	 DCF_bit('1'); 
	 DCF_bit('0');
	 
	 -- Test de bitcount et de r�ception de trame       
	 test_segment(time_bc_7seg_lsb, "0110000", 7); -- bit 41
	 test_segment(time_bc_7seg_msb, "0110011", 8); -- bit 41   
	 test_signal(FrameReception, '1', 9);
	 
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
	 
	 -- Test de bitcount et de r�ception de trame       
	 test_segment(time_bc_7seg_lsb, "1111011", 10); -- bit 49
	 test_segment(time_bc_7seg_msb, "0110011", 11); -- bit 49 
	 test_signal(FrameReception, '1', 12);
	 
	 -- bits 50-57 (ann�e dans le si�cle)
	 DCF_bit('1');
	 DCF_bit('0'); 
	 DCF_bit('1');
	 DCF_bit('0'); -- 15 BCD -> 0001 0101 -> lsb first
	 DCF_bit('1');
	 DCF_bit('0');
	 DCF_bit('0');
	 DCF_bit('0'); 
	 DCF_bit('0'); -- Parit� paire
    
	 DCF_end; 	   -- bit de fin de trame, aucune modulation
	     
	 -- Test de trame complete et de r�ception de trame  
	 test_signal(FrameComplete, '1', 13);   
	 test_signal(FrameReception, '0', 14);




	                                                        	 
 -- END FRAME TEST -----------------------------------------      
 
 	switch <= "00"; -- Choix = minutes                             
 	
 	sim_cycle(1);
 	test_segment(time_bc_7seg_lsb, "1111110", 15); -- 30 minutes 
	test_segment(time_bc_7seg_msb, "1111001", 16); -- 30 minutes
 	
 	
 	sim_cycle(1);
 	switch <= "10"; -- Choix = heures 
 	test_segment(time_bc_7seg_lsb, "1111001", 17); -- 23 heures;
	test_segment(time_bc_7seg_msb, "1101101", 18); -- 23 heures;
     
    
 --	sim_cycle(1);    
 --	test_signal(signal_int,'1', 1 ); -- Error 1 : End of frame is not detected  
 
 -- READ DATAS ---------------------------------------------
	              	
 		 	
  	--Prise en compte de l'interruption et attente
  	
  	sim_cycle(2000000);
  
	sim_end <= TRUE;
	wait;

END PROCESS;
end architecture behaviour ; -- of DCF77_Receiver_stimuli


