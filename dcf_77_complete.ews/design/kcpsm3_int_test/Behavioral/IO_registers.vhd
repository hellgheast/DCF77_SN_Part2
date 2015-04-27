-- EASE/HDL begin --------------------------------------------------------------
-- 
-- Process 'IO_registers' in architecture 'Behavioral' of entity 'kcpsm3_int_test'.
-- 
--------------------------------------------------------------------------------
-- 
-- Copy of the interface signals:
-- 
-- clk          : in     std_logic;
-- port_id      : in     std_logic_vector(7 downto 0);
-- write_strobe : in     std_logic;
-- out_port     : in     std_logic_vector(7 downto 0);
-- waveforms    : out    std_logic_vector(7 downto 0);
-- counter      : out    std_logic_vector(7 downto 0);
-- 
-- EASE/HDL end ----------------------------------------------------------------

IO_registers: process (clk) is		-- EASE/HDL sens.list
begin
  if clk'event and clk='1' then

        -- waveform register at address 02
        if port_id(1)='1' and write_strobe='1' then
          waveforms <= out_port;
        end if;

        -- Interrupt Counter register at address 04
        if port_id(2)='1' and write_strobe='1' then
          counter <= out_port;
        end if;

      end if;
end process IO_registers ;
