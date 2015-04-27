-- EASE/HDL begin --------------------------------------------------------------
-- 
-- Process 'test_clock' in architecture 'behavior' of entity 'testbench'.
-- 
--------------------------------------------------------------------------------
-- 
-- Copy of the interface signals:
-- 
-- clk             : out    std_logic;
-- interrupt_event : out    std_logic;
-- 
-- EASE/HDL end ----------------------------------------------------------------

test_clock: process
		-- EASE/HDL sens.list
  variable max_cycles : integer :=400;
        variable cycle_count : integer := 0;
begin
  while cycle_count < max_cycles loop
  	     clk <= '0';
  		  wait for 10 ns;
  		  clk <= '1';
  		  cycle_count := cycle_count + 1;
  		  wait for 10 ns;

          --Now define stimulus relative to a given clock cycle

          case cycle_count is

            when 30 =>  interrupt_event <= '1'; 

            when 67 =>  interrupt_event <= '1'; 

            when 183 =>  interrupt_event <= '1';  
   
            when others => interrupt_event <= '0';   -- no interrupt

          end case;

        end loop;

        wait;
end process test_clock ;
