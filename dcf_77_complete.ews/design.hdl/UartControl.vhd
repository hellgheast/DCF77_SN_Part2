--------------------------------------------------------------------------------
--
-- This VHDL file was generated by EASE/HDL 8.0 Revision 2 from HDL Works B.V.
--
-- Ease library  : design
-- HDL library   : design
-- Host name     : INF13-MEIERV
-- User name     : vincent.meier
-- Time stamp    : Tue Jun 02 10:12:22 2015
--
-- Designed by   : 
-- Company       : 
-- Project info  : 
--
--------------------------------------------------------------------------------

--------------------------------------------------------------------------------
-- Object        : Entity design.UartControl
-- Last modified : Mon Jun 01 15:32:47 2015.
--------------------------------------------------------------------------------



library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity UartControl is
  port (
    clk        : in     std_logic;
    data_in    : in     std_logic_vector(7 downto 0);
    reset_n    : in     std_logic;
    serial_out : out    std_logic;
    uart_cs    : in     std_logic;
    write      : in     std_logic);
end entity UartControl;

--------------------------------------------------------------------------------
-- Object        : Architecture design.UartControl.structure
-- Last modified : Mon Jun 01 15:32:47 2015.
--------------------------------------------------------------------------------

architecture structure of UartControl is

  signal data_out         : std_logic_vector(7 downto 0);
  signal reset_buffer     : std_logic;
  signal en_16_x_baud     : std_logic;
  signal buffer_full      : std_logic;
  signal buffer_half_full : std_logic;
  signal write_buffer     : std_logic;
  signal start_tr         : std_logic;

  component uart_tx
    port (
      data_in          : in     std_logic_vector(7 downto 0);
      write_buffer     : in     std_logic;
      reset_buffer     : in     std_logic;
      en_16_x_baud     : in     std_logic;
      serial_out       : out    std_logic;
      buffer_full      : out    std_logic;
      buffer_half_full : out    std_logic;
      clk              : in     std_logic);
  end component uart_tx;

  component UartManage
    port (
      buffer_full      : in     std_logic;
      buffer_half_full : in     std_logic;
      clk              : in     std_logic;
      data_in          : in     std_logic_vector(7 downto 0);
      data_out         : out    std_logic_vector(7 downto 0);
      reset_buffer     : out    std_logic;
      reset_n          : in     std_logic;
      start_tr         : out    std_logic;
      uart_cs          : in     std_logic;
      write            : in     std_logic;
      write_buffer     : out    std_logic);
  end component UartManage;

  component BaudRateCounter
    port (
      clk          : in     std_logic;
      en_16_x_baud : out    std_logic;
      reset_n      : in     std_logic;
      start_tr     : in     std_logic;
      uart_cs      : in     std_logic);
  end component BaudRateCounter;

begin

  u0: uart_tx
    port map(
      data_in          => data_out,
      write_buffer     => write_buffer,
      reset_buffer     => reset_buffer,
      en_16_x_baud     => en_16_x_baud,
      serial_out       => serial_out,
      buffer_full      => buffer_full,
      buffer_half_full => buffer_half_full,
      clk              => clk);

  u1: UartManage
    port map(
      buffer_full      => buffer_full,
      buffer_half_full => buffer_half_full,
      clk              => clk,
      data_in          => data_in,
      data_out         => data_out,
      reset_buffer     => reset_buffer,
      reset_n          => reset_n,
      start_tr         => start_tr,
      uart_cs          => uart_cs,
      write            => write,
      write_buffer     => write_buffer);

  u2: BaudRateCounter
    port map(
      clk          => clk,
      en_16_x_baud => en_16_x_baud,
      reset_n      => reset_n,
      start_tr     => start_tr,
      uart_cs      => uart_cs);
end architecture structure ; -- of UartControl

