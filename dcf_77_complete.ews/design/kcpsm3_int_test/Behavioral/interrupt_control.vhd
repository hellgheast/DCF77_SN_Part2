-- EASE/HDL begin --------------------------------------------------------------
-- 
-- Process 'interrupt_control' in architecture 'Behavioral' of entity 'kcpsm3_int_test'.
-- 
--------------------------------------------------------------------------------
-- 
-- Copy of the interface signals:
-- 
-- clk             : in     std_logic;
-- interrupt_ack   : in     std_logic;
-- interrupt_event : in     std_logic;
-- interrupt       : inout  std_logic;
-- 
-- EASE/HDL end ----------------------------------------------------------------

interrupt_control: process (clk) is		-- EASE/HDL sens.list
begin
  if clk'event and clk='1' then
        if interrupt_ack='1' then
          interrupt <= '0';
         elsif interrupt_event='1' then
          interrupt <= '1';
         else
          interrupt <= interrupt;
        end if;
      end if;
end process interrupt_control ;
