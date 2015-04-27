-- EASE/HDL begin --------------------------------------------------------------
-- 
-- Process 'output_ports' in architecture 'Behavioral' of entity 'uart_clock'.
-- 
--------------------------------------------------------------------------------
-- 
-- Copy of the interface signals:
-- 
-- clk          : in     std_logic;
-- write_strobe : in     std_logic;
-- port_id      : in     std_logic_vector(7 downto 0);
-- out_port     : in     std_logic_vector(7 downto 0);
-- alarm        : out    std_logic;
-- 
-- EASE/HDL end ----------------------------------------------------------------

output_ports: process (clk) is		-- EASE/HDL sens.list
begin
  if clk'event and clk='1' then
        if write_strobe='1' then

          -- Alarm register at address 00 hex with data bit0 providing control

          if port_id(0)='0' then
            alarm <= out_port(0);
          end if;

        end if;

      end if;
end process output_ports ;
