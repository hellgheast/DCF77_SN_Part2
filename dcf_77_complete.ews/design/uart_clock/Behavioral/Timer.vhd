-- EASE/HDL begin --------------------------------------------------------------
-- 
-- Process 'Timer' in architecture 'Behavioral' of entity 'uart_clock'.
-- 
--------------------------------------------------------------------------------
-- 
-- Copy of the interface signals:
-- 
-- clk           : in     std_logic;
-- timer_count   : inout  integer range 0 to 63;
-- interrupt_ack : in     std_logic;
-- timer_pulse   : inout  std_logic;
-- interrupt     : inout  std_logic;
-- 
-- EASE/HDL end ----------------------------------------------------------------

Timer: process (clk) is		-- EASE/HDL sens.list
begin
  if clk'event and clk='1' then
        
        if timer_count=54 then
           timer_count <= 0;
           timer_pulse <= '1';
         else
           timer_count <= timer_count + 1;
           timer_pulse <= '0';
        end if;

        if interrupt_ack = '1' then
           interrupt <= '0';
         elsif timer_pulse = '1' then 
           interrupt <= '1';
          else
           interrupt <= interrupt;
        end if;
       
      end if;
end process Timer ;
