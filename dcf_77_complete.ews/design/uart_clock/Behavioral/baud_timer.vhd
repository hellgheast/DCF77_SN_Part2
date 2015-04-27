-- EASE/HDL begin --------------------------------------------------------------
-- 
-- Process 'baud_timer' in architecture 'Behavioral' of entity 'uart_clock'.
-- 
--------------------------------------------------------------------------------
-- 
-- Copy of the interface signals:
-- 
-- clk          : in     std_logic;
-- baud_count   : inout  integer range 0 to 127;
-- en_16_x_baud : out    std_logic;
-- 
-- EASE/HDL end ----------------------------------------------------------------

baud_timer: process (clk) is		-- EASE/HDL sens.list
begin
  if clk'event and clk='1' then
        if baud_count=89 then
             baud_count <= 0;
           en_16_x_baud <= '1';
         else
             baud_count <= baud_count + 1;
           en_16_x_baud <= '0';
        end if;
      end if;
end process baud_timer ;
