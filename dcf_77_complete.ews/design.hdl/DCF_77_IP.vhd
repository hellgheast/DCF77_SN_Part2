--------------------------------------------------------------------------------
--
-- This VHDL file was generated by EASE/HDL 8.0 Revision 2 from HDL Works B.V.
--
-- Ease library  : design_ip_dcf_77
-- HDL library   : design_ip_dcf_77
-- Host name     : INF13-BENSALAHM
-- User name     : mohammed.bensalah
-- Time stamp    : Sat Jun 06 15:21:56 2015
--
-- Designed by   : 
-- Company       : 
-- Project info  : 
--
--------------------------------------------------------------------------------

--------------------------------------------------------------------------------
-- Object        : Entity design_ip_dcf_77.DCF_77_IP
-- Last modified : Sat Jun 06 14:57:17 2015.
--------------------------------------------------------------------------------



library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity DCF_77_IP is
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
end entity DCF_77_IP;

--------------------------------------------------------------------------------
-- Object        : Architecture design_ip_dcf_77.DCF_77_IP.structure
-- Last modified : Sat Jun 06 14:57:17 2015.
--------------------------------------------------------------------------------

architecture structure of DCF_77_IP is

  signal start_acq_net  : std_logic;
  signal state          : std_logic;
  signal freq           : std_logic;
  signal dcf_77_s       : std_logic;
  signal reg_status     : std_logic_vector(7 downto 0);
  signal reg_flags      : std_logic_vector(3 downto 0);
  signal reg_dweek      : std_logic_vector(2 downto 0);
  signal reg_month      : std_logic_vector(5 downto 0);
  signal reg_year       : std_logic_vector(7 downto 0);
  signal signal_int_net : std_logic;
  signal prescaler      : std_logic_vector(15 downto 0);
  signal bit_count      : std_logic_vector(5 downto 0);
  signal reg_hours      : std_logic_vector(5 downto 0);
  signal reg_minutes    : std_logic_vector(6 downto 0);
  signal ParityH        : std_logic;
  signal ParityM        : std_logic;
  signal ParityD        : std_logic;
  signal getNothing     : std_logic;
  signal RBG            : std_logic_vector(1 downto 0);
  signal reg_recbits    : std_logic_vector(5 downto 0);
  signal reg_dmonth     : std_logic_vector(5 downto 0);
  signal Enable         : std_logic;

  component div_freq
    port (
      Enable  : in     std_logic;
      clk     : in     std_logic;
      div     : in     std_logic_vector(15 downto 0);
      freq    : out    std_logic;
      reset_n : in     std_logic);
  end component div_freq;

  component decode_dcf77
    port (
      bit_count  : out    std_logic_vector(5 downto 0);
      clk        : in     std_logic;
      dcf_77_s   : in     std_logic;
      freq       : in     std_logic;
      getNothing : out    std_logic;
      reset_n    : in     std_logic;
      start      : out    std_logic;
      state_bit  : out    std_logic;
      stop       : out    std_logic);
  end component decode_dcf77;

  component frame_register
    port (
      RBG         : in     std_logic_vector(1 downto 0);
      bit_count   : in     std_logic_vector(5 downto 0);
      bit_input   : in     std_logic;
      clk         : in     std_logic;
      reg_dmonth  : out    std_logic_vector(5 downto 0);
      reg_dweek   : out    std_logic_vector(2 downto 0);
      reg_flags   : out    std_logic_vector(3 downto 0);
      reg_hours   : out    std_logic_vector(5 downto 0);
      reg_minutes : out    std_logic_vector(6 downto 0);
      reg_month   : out    std_logic_vector(5 downto 0);
      reg_recbits : out    std_logic_vector(5 downto 0);
      reg_status  : out    std_logic_vector(7 downto 0);
      reg_year    : out    std_logic_vector(7 downto 0);
      reset_n     : in     std_logic;
      start       : in     std_logic;
      stop        : in     std_logic);
  end component frame_register;

  component sync_dcf77
    port (
      clk       : in     std_logic;
      dcf_77_in : in     std_logic;
      dcf_77_s  : out    std_logic;
      reset_n   : in     std_logic);
  end component sync_dcf77;

  component reg_mem_dcf77
    port (
      Adress      : in     std_logic_vector(3 downto 0);
      Enable      : out    std_logic;
      ParityD     : in     std_logic;
      ParityH     : in     std_logic;
      ParityM     : in     std_logic;
      chip_select : in     std_logic;
      clk         : in     std_logic;
      data_in     : in     std_logic_vector(7 downto 0);
      data_out    : out    std_logic_vector(7 downto 0);
      prescaler   : out    std_logic_vector(15 downto 0);
      read        : in     std_logic;
      reg_dmonth  : in     std_logic_vector(5 downto 0);
      reg_dweek   : in     std_logic_vector(2 downto 0);
      reg_flags   : in     std_logic_vector(3 downto 0);
      reg_hours   : in     std_logic_vector(5 downto 0);
      reg_minutes : in     std_logic_vector(6 downto 0);
      reg_month   : in     std_logic_vector(5 downto 0);
      reg_recbits : in     std_logic_vector(5 downto 0);
      reg_status  : in     std_logic_vector(7 downto 0);
      reg_year    : in     std_logic_vector(7 downto 0);
      reset_n     : in     std_logic;
      write       : in     std_logic);
  end component reg_mem_dcf77;

  component decode_RBG
    port (
      RBG        : out    std_logic_vector(1 downto 0);
      bit_count  : in     std_logic_vector(5 downto 0);
      clk        : in     std_logic;
      getNothing : in     std_logic;
      reset_n    : in     std_logic;
      start      : in     std_logic;
      stop       : in     std_logic);
  end component decode_RBG;

  component CheckParity
    port (
      ParityD : out    std_logic;
      ParityH : out    std_logic;
      ParityM : out    std_logic;
      dmonth  : in     std_logic_vector(5 downto 0);
      dweek   : in     std_logic_vector(2 downto 0);
      hours   : in     std_logic_vector(5 downto 0);
      minutes : in     std_logic_vector(6 downto 0);
      month   : in     std_logic_vector(5 downto 0);
      year    : in     std_logic_vector(7 downto 0));
  end component CheckParity;

begin
  start_acq <= start_acq_net;
  signal_int <= signal_int_net;

  u0: div_freq
    port map(
      Enable  => Enable,
      clk     => clk,
      div     => prescaler,
      freq    => freq,
      reset_n => reset_n);

  u1: decode_dcf77
    port map(
      bit_count  => bit_count,
      clk        => clk,
      dcf_77_s   => dcf_77_s,
      freq       => freq,
      getNothing => getNothing,
      reset_n    => reset_n,
      start      => start_acq_net,
      state_bit  => state,
      stop       => signal_int_net);

  u2: frame_register
    port map(
      RBG         => RBG,
      bit_count   => bit_count,
      bit_input   => state,
      clk         => clk,
      reg_dmonth  => reg_dmonth,
      reg_dweek   => reg_dweek,
      reg_flags   => reg_flags,
      reg_hours   => reg_hours,
      reg_minutes => reg_minutes,
      reg_month   => reg_month,
      reg_recbits => reg_recbits,
      reg_status  => reg_status,
      reg_year    => reg_year,
      reset_n     => reset_n,
      start       => start_acq_net,
      stop        => signal_int_net);

  u3: sync_dcf77
    port map(
      clk       => clk,
      dcf_77_in => dcf_77_in,
      dcf_77_s  => dcf_77_s,
      reset_n   => reset_n);

  u4: reg_mem_dcf77
    port map(
      Adress      => Adress,
      Enable      => Enable,
      ParityD     => ParityD,
      ParityH     => ParityH,
      ParityM     => ParityM,
      chip_select => chip_select,
      clk         => clk,
      data_in     => data_in,
      data_out    => data_out,
      prescaler   => prescaler,
      read        => read,
      reg_dmonth  => reg_dmonth,
      reg_dweek   => reg_dweek,
      reg_flags   => reg_flags,
      reg_hours   => reg_hours,
      reg_minutes => reg_minutes,
      reg_month   => reg_month,
      reg_recbits => reg_recbits,
      reg_status  => reg_status,
      reg_year    => reg_year,
      reset_n     => reset_n,
      write       => write);

  u5: decode_RBG
    port map(
      RBG        => RBG,
      bit_count  => bit_count,
      clk        => clk,
      getNothing => getNothing,
      reset_n    => reset_n,
      start      => start_acq_net,
      stop       => signal_int_net);

  u6: CheckParity
    port map(
      ParityD => ParityD,
      ParityH => ParityH,
      ParityM => ParityM,
      dmonth  => reg_dmonth,
      dweek   => reg_dweek,
      hours   => reg_hours,
      minutes => reg_minutes,
      month   => reg_month,
      year    => reg_year);
end architecture structure ; -- of DCF_77_IP

