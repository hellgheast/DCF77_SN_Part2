--------------------------------------------------------------------------------
--
-- This VHDL file was generated by EASE/HDL 8.0 Revision 2 from HDL Works B.V.
--
-- Ease library  : design_dcf_complete
-- HDL library   : design_dcf_complete
-- Host name     : INF13-BENSALAHM
-- User name     : mohammed.bensalah
-- Time stamp    : Sun Jun 07 21:36:46 2015
--
-- Designed by   : 
-- Company       : 
-- Project info  : 
--
--------------------------------------------------------------------------------

--------------------------------------------------------------------------------
-- Object        : Entity design_dcf_complete.DCF77_Receiver
-- Last modified : Sun Jun 07 17:05:01 2015.
--------------------------------------------------------------------------------



library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity DCF77_Receiver is
  port (
    FrameComplete    : out    std_logic;
    FrameIncorrect   : out    std_logic;
    FrameReception   : out    std_logic;
    TEST             : in     std_logic;
    clk              : in     std_logic;
    dcf_77_in        : in     std_logic;
    debug_leds       : out    std_logic_vector(7 downto 0);
    program_counter  : out    std_logic_vector(7 downto 0);
    reset_n          : in     std_logic;
    serial_out       : out    std_logic;
    switch           : in     std_logic_vector(1 downto 0);
    time_bc_7seg_lsb : out    std_logic_vector(6 downto 0);
    time_bc_7seg_msb : out    std_logic_vector(6 downto 0));
end entity DCF77_Receiver;

--------------------------------------------------------------------------------
-- Object        : Architecture design_dcf_complete.DCF77_Receiver.structure
-- Last modified : Sun Jun 07 17:05:01 2015.
--------------------------------------------------------------------------------


library design_ip_dcf_77;
use design_ip_dcf_77.DCF_77_IP;

architecture structure of DCF77_Receiver is

  signal write_strobe        : std_logic;
  signal port_id             : std_logic_vector(7 downto 0);
  signal dcf_cs              : std_logic;
  signal displayblock_cs     : std_logic;
  signal read_strobe         : std_logic;
  signal adress_dcf          : std_logic_vector(3 downto 0);
  signal signal_int          : std_logic;
  signal in_port             : std_logic_vector(7 downto 0);
  signal data_out            : std_logic_vector(7 downto 0);
  signal u6_reset_n          : std_logic;
  signal out_port            : std_logic_vector(7 downto 0);
  signal uart_tx_cs          : std_logic;
  signal u2_hour_minutes_out : std_logic_vector(7 downto 0);
  signal adress_mux_dcf_test : std_logic_vector(1 downto 0);
  signal adress_displayblock : std_logic_vector(2 downto 0);
  signal instruction         : std_logic_vector(17 downto 0);
  signal address             : std_logic_vector(9 downto 0);

  component DisplayBlock
    port (
      FrameComplete   : out    std_logic;
      FrameIncorrect  : out    std_logic;
      FrameReception  : out    std_logic;
      adress          : in     std_logic_vector(2 downto 0);
      adress_program  : in     std_logic_vector(9 downto 0);
      chip_select     : in     std_logic;
      clk             : in     std_logic;
      data_in         : in     std_logic_vector(7 downto 0);
      debug_leds      : out    std_logic_vector(7 downto 0);
      program_counter : out    std_logic_vector(7 downto 0);
      reset_n         : in     std_logic;
      switch          : in     std_logic_vector(1 downto 0);
      time_bc_out     : out    std_logic_vector(7 downto 0);
      write           : in     std_logic);
  end component DisplayBlock;

  component DecodeAdress
    port (
      adress              : in     std_logic_vector(7 downto 0);
      adress_dcf          : out    std_logic_vector(3 downto 0);
      adress_displayblock : out    std_logic_vector(2 downto 0);
      adress_mux_dcf_test : out    std_logic_vector(1 downto 0);
      dcf_cs              : out    std_logic;
      displayblock_cs     : out    std_logic;
      uart_tx_cs          : out    std_logic);
  end component DecodeAdress;

  component mux_dcf_test
    port (
      TEST                : in     std_logic;
      adress_mux_dcf_test : in     std_logic_vector(1 downto 0);
      data_dcf            : in     std_logic_vector(7 downto 0);
      data_out            : out    std_logic_vector(7 downto 0));
  end component mux_dcf_test;

  component inversor
    port (
      input : in     std_logic;
      reset : out    std_logic);
  end component inversor;

  component UartControl
    port (
      clk        : in     std_logic;
      data_in    : in     std_logic_vector(7 downto 0);
      reset_n    : in     std_logic;
      serial_out : out    std_logic;
      uart_cs    : in     std_logic;
      write      : in     std_logic);
  end component UartControl;

  component BCD_7Seg_Converter
    port (
      clk              : in     std_logic;
      reset_n          : in     std_logic;
      time_bc_7seg_lsb : out    std_logic_vector(6 downto 0);
      time_bc_7seg_msb : out    std_logic_vector(6 downto 0);
      time_bc_in       : in     std_logic_vector(7 downto 0));
  end component BCD_7Seg_Converter;

  component optimus_prime
    port (
      address     : in     std_logic_vector(9 downto 0);
      instruction : out    std_logic_vector(17 downto 0);
      clk         : in     std_logic);
  end component optimus_prime;

  component DCF_77_IP
    port (
      Adress      : in     std_logic_vector(3 downto 0);
      chip_select : in     std_logic;
      clk         : in     std_logic;
      data_in     : in     std_logic_vector(7 downto 0);
      data_out    : out    std_logic_vector(7 downto 0);
      dcf_77_in   : in     std_logic;
      read        : in     std_logic;
      reset_n     : in     std_logic;
      signal_int  : out    std_logic;
      start_acq   : out    std_logic;
      write       : in     std_logic);
  end component DCF_77_IP;

  component kcpsm3
    port (
      address       : out    std_logic_vector(9 downto 0);
      instruction   : in     std_logic_vector(17 downto 0);
      port_id       : out    std_logic_vector(7 downto 0);
      write_strobe  : out    std_logic;
      out_port      : out    std_logic_vector(7 downto 0);
      read_strobe   : out    std_logic;
      in_port       : in     std_logic_vector(7 downto 0);
      interrupt     : in     std_logic;
      interrupt_ack : out    std_logic;
      reset         : in     std_logic;
      clk           : in     std_logic);
  end component kcpsm3;

begin

  u2: DisplayBlock
    port map(
      FrameComplete   => FrameComplete,
      FrameIncorrect  => FrameIncorrect,
      FrameReception  => FrameReception,
      adress          => adress_displayblock,
      adress_program  => address,
      chip_select     => displayblock_cs,
      clk             => clk,
      data_in         => out_port,
      debug_leds      => debug_leds,
      program_counter => program_counter,
      reset_n         => reset_n,
      switch          => switch,
      time_bc_out     => u2_hour_minutes_out,
      write           => write_strobe);

  u4: DecodeAdress
    port map(
      adress              => port_id,
      adress_dcf          => adress_dcf,
      adress_displayblock => adress_displayblock,
      adress_mux_dcf_test => adress_mux_dcf_test,
      dcf_cs              => dcf_cs,
      displayblock_cs     => displayblock_cs,
      uart_tx_cs          => uart_tx_cs);

  u5: mux_dcf_test
    port map(
      TEST                => TEST,
      adress_mux_dcf_test => adress_mux_dcf_test,
      data_dcf            => data_out,
      data_out            => in_port);

  u6: inversor
    port map(
      input => reset_n,
      reset => u6_reset_n);

  u7: UartControl
    port map(
      clk        => clk,
      data_in    => out_port,
      reset_n    => reset_n,
      serial_out => serial_out,
      uart_cs    => uart_tx_cs,
      write      => write_strobe);

  u3: BCD_7Seg_Converter
    port map(
      clk              => clk,
      reset_n          => reset_n,
      time_bc_7seg_lsb => time_bc_7seg_lsb,
      time_bc_7seg_msb => time_bc_7seg_msb,
      time_bc_in       => u2_hour_minutes_out);

  u1: optimus_prime
    port map(
      address     => address,
      instruction => instruction,
      clk         => clk);

  u8: DCF_77_IP
    port map(
      Adress      => adress_dcf,
      chip_select => dcf_cs,
      clk         => clk,
      data_in     => out_port,
      data_out    => data_out,
      dcf_77_in   => dcf_77_in,
      read        => read_strobe,
      reset_n     => reset_n,
      signal_int  => signal_int,
      start_acq   => open,
      write       => write_strobe);

  u0: kcpsm3
    port map(
      address       => address,
      instruction   => instruction,
      port_id       => port_id,
      write_strobe  => write_strobe,
      out_port      => out_port,
      read_strobe   => read_strobe,
      in_port       => in_port,
      interrupt     => signal_int,
      interrupt_ack => open,
      reset         => u6_reset_n,
      clk           => clk);
end architecture structure ; -- of DCF77_Receiver

