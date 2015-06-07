--------------------------------------------------------------------------------
--
-- This VHDL file was generated by EASE/HDL 8.0 Revision 2 from HDL Works B.V.
--
-- Ease library  : design_dcf_complete
-- HDL library   : design_dcf_complete
-- Host name     : INF13-BENSALAHM
-- User name     : mohammed.bensalah
-- Time stamp    : Sun Jun 07 13:18:33 2015
--
-- Designed by   : 
-- Company       : 
-- Project info  : 
--
--------------------------------------------------------------------------------

--------------------------------------------------------------------------------
-- Object        : Entity design_dcf_complete.uart_tx
-- Last modified : Sat Jun 06 15:29:36 2015.
--------------------------------------------------------------------------------



library ieee, unisim;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use ieee.std_logic_arith.ALL;
use ieee.std_logic_unsigned.ALL;
use unisim.VCOMPONENTS.ALL;

entity uart_tx is
  port (
    data_in          : in     std_logic_vector(7 downto 0);
    write_buffer     : in     std_logic;
    reset_buffer     : in     std_logic;
    en_16_x_baud     : in     std_logic;
    serial_out       : out    std_logic;
    buffer_full      : out    std_logic;
    buffer_half_full : out    std_logic;
    clk              : in     std_logic);
end entity uart_tx;

--------------------------------------------------------------------------------
-- Object        : Architecture design_dcf_complete.uart_tx.macro_level_definition
-- Last modified : Sat Jun 06 15:29:36 2015.
--------------------------------------------------------------------------------

architecture macro_level_definition of uart_tx is

  signal fifo_data_out     : std_logic_vector(7 downto 0);
  signal fifo_data_present : std_logic;
  signal fifo_read         : std_logic;

  component kcuart_tx
    port (
      data_in        : in     std_logic_vector(7 downto 0);
      send_character : in     std_logic;
      en_16_x_baud   : in     std_logic;
      serial_out     : out    std_logic;
      Tx_complete    : out    std_logic;
      clk            : in     std_logic);
  end component kcuart_tx;

  component bbfifo_16x8
    port (
      data_in      : in     std_logic_vector(7 downto 0);
      data_out     : out    std_logic_vector(7 downto 0);
      reset        : in     std_logic;
      write        : in     std_logic;
      read         : in     std_logic;
      full         : out    std_logic;
      half_full    : out    std_logic;
      data_present : out    std_logic;
      clk          : in     std_logic);
  end component bbfifo_16x8;

begin

  kcuart: kcuart_tx
    port map(
      data_in        => fifo_data_out,
      send_character => fifo_data_present,
      en_16_x_baud   => en_16_x_baud,
      serial_out     => serial_out,
      Tx_complete    => fifo_read,
      clk            => clk);

  buf: bbfifo_16x8
    port map(
      data_in      => data_in,
      data_out     => fifo_data_out,
      reset        => reset_buffer,
      write        => write_buffer,
      read         => fifo_read,
      full         => buffer_full,
      half_full    => buffer_half_full,
      data_present => fifo_data_present,
      clk          => clk);
end architecture macro_level_definition ; -- of uart_tx

