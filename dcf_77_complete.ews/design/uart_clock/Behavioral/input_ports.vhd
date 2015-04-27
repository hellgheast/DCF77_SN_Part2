-- EASE/HDL begin --------------------------------------------------------------
-- 
-- Process 'input_ports' in architecture 'Behavioral' of entity 'uart_clock'.
-- 
--------------------------------------------------------------------------------
-- 
-- Copy of the interface signals:
-- 
-- clk              : in     std_logic;
-- port_id          : in     std_logic_vector(7 downto 0);
-- uart_status_port : in     std_logic_vector(7 downto 0);
-- rx_data          : in     std_logic_vector(7 downto 0);
-- read_strobe      : in     std_logic;
-- in_port          : out    std_logic_vector(7 downto 0);
-- read_from_uart   : out    std_logic;
-- 
-- EASE/HDL end ----------------------------------------------------------------

input_ports: process (clk) is		-- EASE/HDL sens.list
begin
  if clk'event and clk='1' then

        case port_id(0) is

          
          -- read UART status at address 00 hex
          when '0' =>    in_port <= uart_status_port;

          -- read UART receive data at address 01 hex
          when '1' =>    in_port <= rx_data;
          
          -- Don't care used for all other addresses to ensure minimum logic implementation
          when others =>    in_port <= "XXXXXXXX";  

        end case;

        -- Form read strobe for UART receiver FIFO buffer.
        -- The fact that the read strobe will occur after the actual data is read by 
        -- the KCPSM3 is acceptable because it is really means 'I have read you'!

        read_from_uart <= read_strobe and port_id(0); 

      end if;
end process input_ports ;
