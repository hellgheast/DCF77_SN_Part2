-- EASE/HDL begin --------------------------------------------------------------
-- 
-- Architecture 'behavior' of entity 'DecodeStateMachine'.
-- 
--------------------------------------------------------------------------------
-- 
-- Copy of the interface declaration:
-- 
--   port (
--     clk           : in     std_logic;
--     dcf_77_s      : in     std_logic;
--     high_ms_count : in     std_logic_vector(7 downto 0);
--     reset_n       : in     std_logic;
--     sec_overflow  : in     std_logic;
--     start         : out    std_logic;
--     state_bit     : out    std_logic;
--     stop          : out    std_logic;
--     stop_temp     : out    std_logic);
-- 
-- EASE/HDL end ----------------------------------------------------------------
  
architecture behavior of DecodeStateMachine is
     
-- Declare type, subtype

  subtype t_state is std_logic_vector(1 DOWNTO 0);
        
-- Declare constants

  constant c_DCF_DETECT		: t_state := "00";
  constant c_BIT_DECODE		: t_state := "01";
  constant c_STATE_DECODE	: t_state := "10";
  
-- Declare signals  
  signal StateMachine 		: t_state;
  signal stop_temp_intern	: std_logic; 
  
begin
       
P1:process (clk, reset_n)
	begin
	if(reset_n) = '0' then -- reset asynchrone   
		StateMachine<= c_DCF_DETECT;
		start 		<= '0';
		stop  		<= '0';
		state_bit 	<= '0';
		stop_temp_intern <= '0';
	
   	elsif(clk'EVENT and clk = '1') then 
   	
   		case StateMachine is 
   			
   			when c_DCF_DETECT =>  -- D�tection d'un '0' de la trame DCF77  
   			     
   			    stop <= '0';
   			    start <= '0';
   			    
   			    if stop_temp_intern = '1' and dcf_77_s = '0' then -- Stop
   			    	StateMachine <= c_DCF_DETECT; 
   			    	
   			    else  
   			    	if stop_temp_intern = '1' then -- Un stop a �t� activ� pr�c�demment
   			    		start <= '1';
   			    		stop_temp_intern  <= '0';
   			    	end if;
   			    	
   			    	if dcf_77_s = '1' then
   						StateMachine <= c_DCF_DETECT; 	
   					elsif dcf_77_s = '0' then
   						StateMachine <= c_BIT_DECODE;    	
   					end if; 
   					           
   				end if;
   				
   			when c_BIT_DECODE =>  -- D�codage du num�ro de bit (59e ou autre)
   			    start <= '0';  
   			     
   			    if dcf_77_s = '0' then	
   					if sec_overflow = '1' then   -- 59e bit -> stop
   						stop_temp_intern <= '1';  
   						stop  <= '1';  
   						StateMachine <= c_DCF_DETECT;  	
  					else
   						StateMachine <= c_STATE_DECODE; 
   					end if;	
   				else
   					StateMachine <= c_DCF_DETECT;
   				end if;
   											
   			when c_STATE_DECODE => -- D�codage de l'�tat du bit actuel de la trame
   			        start <= '0';
   					if (high_ms_count = x"63" or high_ms_count = x"64") then     -- vaut 99 lors du premier bit � l'enclenchement !
   						state_bit <= '1';
   						StateMachine <= c_DCF_DETECT;		
   					elsif(high_ms_count = x"C7" or high_ms_count = x"C8") then   -- vaut 199 lors du premier bit � l'enclenchement !
   						state_bit <= '0';
   						StateMachine <= c_DCF_DETECT;   		
   					else   
   						StateMachine <= c_STATE_DECODE;
   					end if;
   			
   			when others =>
   			    StateMachine <= c_DCF_DETECT;     
   			    
		end case;    
	
	end if;
	
end process;
		
stop_temp <= stop_temp_intern;
	
end architecture behavior ; -- of DecodeStateMachine
                     



