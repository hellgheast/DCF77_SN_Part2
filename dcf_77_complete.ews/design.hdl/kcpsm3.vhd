--------------------------------------------------------------------------------
--
-- This VHDL file was generated by EASE/HDL 8.0 Revision 2 from HDL Works B.V.
--
-- Ease library  : design
-- HDL library   : design
-- Host name     : INF13-BENSALAHM
-- User name     : mohammed.bensalah
-- Time stamp    : Fri Jun 05 19:19:26 2015
--
-- Designed by   : 
-- Company       : 
-- Project info  : 
--
--------------------------------------------------------------------------------

--------------------------------------------------------------------------------
-- Object        : Entity design.kcpsm3
-- Last modified : Mon Apr 20 13:52:21 2015.
--------------------------------------------------------------------------------



library ieee, unisim;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use ieee.std_logic_arith.ALL;
use ieee.std_logic_unsigned.ALL;
use unisim.VCOMPONENTS.ALL;

entity kcpsm3 is
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
end entity kcpsm3;

--------------------------------------------------------------------------------
-- Object        : Architecture design.kcpsm3.low_level_definition
-- Last modified : Mon Apr 20 13:52:21 2015.
--------------------------------------------------------------------------------

architecture low_level_definition of kcpsm3 is

  signal t_state                : std_logic;
  signal not_t_state            : std_logic;
  signal internal_reset         : std_logic;
  signal reset_delay            : std_logic;
  signal move_group             : std_logic;
  signal condition_met          : std_logic;
  signal normal_count           : std_logic;
  signal call_type              : std_logic;
  signal push_or_pop_type       : std_logic;
  signal valid_to_move          : std_logic;
  signal flag_type              : std_logic;
  signal flag_write             : std_logic;
  signal flag_enable            : std_logic;
  signal zero_flag              : std_logic;
  signal sel_shadow_zero        : std_logic;
  signal low_zero               : std_logic;
  signal high_zero              : std_logic;
  signal low_zero_carry         : std_logic;
  signal high_zero_carry        : std_logic;
  signal zero_carry             : std_logic;
  signal zero_fast_route        : std_logic;
  signal low_parity             : std_logic;
  signal high_parity            : std_logic;
  signal parity_carry           : std_logic;
  signal parity                 : std_logic;
  signal carry_flag             : std_logic;
  signal sel_parity             : std_logic;
  signal sel_arith_carry        : std_logic;
  signal sel_shift_carry        : std_logic;
  signal sel_shadow_carry       : std_logic;
  signal sel_carry              : std_logic_vector(3 downto 0);
  signal carry_fast_route       : std_logic;
  signal active_interrupt       : std_logic;
  signal int_pulse              : std_logic;
  signal clean_int              : std_logic;
  signal shadow_carry           : std_logic;
  signal shadow_zero            : std_logic;
  signal int_enable             : std_logic;
  signal int_update_enable      : std_logic;
  signal int_enable_value       : std_logic;
  signal interrupt_ack_internal : std_logic;
  signal pc                     : std_logic_vector(9 downto 0);
  signal pc_vector              : std_logic_vector(9 downto 0);
  signal pc_vector_carry        : std_logic_vector(8 downto 0);
  signal inc_pc_vector          : std_logic_vector(9 downto 0);
  signal pc_value               : std_logic_vector(9 downto 0);
  signal pc_value_carry         : std_logic_vector(8 downto 0);
  signal inc_pc_value           : std_logic_vector(9 downto 0);
  signal pc_enable              : std_logic;
  signal sx                     : std_logic_vector(7 downto 0);
  signal sy                     : std_logic_vector(7 downto 0);
  signal register_type          : std_logic;
  signal register_write         : std_logic;
  signal register_enable        : std_logic;
  signal second_operand         : std_logic_vector(7 downto 0);
  signal memory_data            : std_logic_vector(7 downto 0);
  signal store_data             : std_logic_vector(7 downto 0);
  signal memory_type            : std_logic;
  signal memory_write           : std_logic;
  signal memory_enable          : std_logic;
  signal stack_pop_data         : std_logic_vector(9 downto 0);
  signal stack_ram_data         : std_logic_vector(9 downto 0);
  signal stack_address          : std_logic_vector(4 downto 0);
  signal half_stack_address     : std_logic_vector(4 downto 0);
  signal stack_address_carry    : std_logic_vector(3 downto 0);
  signal next_stack_address     : std_logic_vector(4 downto 0);
  signal stack_write_enable     : std_logic;
  signal not_active_interrupt   : std_logic;
  signal logical_result         : std_logic_vector(7 downto 0);
  signal logical_value          : std_logic_vector(7 downto 0);
  signal sel_logical            : std_logic;
  signal shift_result           : std_logic_vector(7 downto 0);
  signal shift_value            : std_logic_vector(7 downto 0);
  signal sel_shift              : std_logic;
  signal high_shift_in          : std_logic;
  signal low_shift_in           : std_logic;
  signal shift_in               : std_logic;
  signal shift_carry            : std_logic;
  signal shift_carry_value      : std_logic;
  signal arith_result           : std_logic_vector(7 downto 0);
  signal arith_value            : std_logic_vector(7 downto 0);
  signal half_arith             : std_logic_vector(7 downto 0);
  signal arith_internal_carry   : std_logic_vector(7 downto 0);
  signal sel_arith_carry_in     : std_logic;
  signal arith_carry_in         : std_logic;
  signal invert_arith_carry     : std_logic;
  signal arith_carry_out        : std_logic;
  signal sel_arith              : std_logic;
  signal arith_carry            : std_logic;
  signal input_fetch_type       : std_logic;
  signal sel_group              : std_logic;
  signal alu_group              : std_logic_vector(7 downto 0);
  signal input_group            : std_logic_vector(7 downto 0);
  signal alu_result             : std_logic_vector(7 downto 0);
  signal io_initial_decode      : std_logic;
  signal write_active           : std_logic;
  signal read_active            : std_logic;
  attribute INIT : string;
  attribute INIT of t_state_lut           : label is "1";
  attribute INIT of int_pulse_lut         : label is "0080";
  attribute INIT of int_update_lut        : label is "EAAA";
  attribute INIT of int_value_lut         : label is "04";
  attribute INIT of move_group_lut        : label is "7400";
  attribute INIT of condition_met_lut     : label is "5A3C";
  attribute INIT of normal_count_lut      : label is "2F";
  attribute INIT of call_type_lut         : label is "1000";
  attribute INIT of push_pop_lut          : label is "5400";
  attribute INIT of valid_move_lut        : label is "D";
  attribute INIT of flag_type_lut         : label is "41FC";
  attribute INIT of flag_enable_lut       : label is "8";
  attribute INIT of low_zero_lut          : label is "0001";
  attribute INIT of high_zero_lut         : label is "0001";
  attribute INIT of sel_shadow_zero_lut   : label is "3F";
  attribute INIT of low_parity_lut        : label is "6996";
  attribute INIT of high_parity_lut       : label is "6996";
  attribute INIT of sel_parity_lut        : label is "F3FF";
  attribute INIT of sel_arith_carry_lut   : label is "F3";
  attribute INIT of sel_shift_carry_lut   : label is "C";
  attribute INIT of sel_shadow_carry_lut  : label is "3";
  attribute INIT of register_type_lut     : label is "0145";
  attribute INIT of register_enable_lut   : label is "8";
  attribute INIT of memory_type_lut       : label is "0400";
  attribute INIT of memory_enable_lut     : label is "8000";
  attribute INIT of sel_logical_lut       : label is "FFE2";
  attribute INIT of low_shift_in_lut      : label is "E4";
  attribute INIT of high_shift_in_lut     : label is "E4";
  attribute INIT of shift_carry_lut       : label is "E4";
  attribute INIT of sel_arith_lut         : label is "1F";
  attribute INIT of input_fetch_type_lut  : label is "0002";
  attribute INIT of io_decode_lut         : label is "0010";
  attribute INIT of write_active_lut      : label is "4000";
  attribute INIT of read_active_lut       : label is "0100";

begin
  interrupt_ack <= interrupt_ack_internal;
  address <= pc;
  out_port <= sx;
  port_id <= second_operand;
  pc_loop: for i in 0 to 9 generate
      attribute INIT : string;
      attribute INIT of vector_select_mux : label is "E4";
      attribute INIT of value_select_mux  : label is "E4";

  begin
      pc_lsb_carry: if (i = 0) generate
      begin

          pc_vector_muxcy: MUXCY
            port map(
              O  => pc_vector_carry(i),
              CI => instruction(13),
              DI => '0',
              S  => pc_vector(i));

          pc_vector_xor: XORCY
            port map(
              O  => inc_pc_vector(i),
              CI => instruction(13),
              LI => pc_vector(i));

          pc_value_muxcy: MUXCY
            port map(
              O  => pc_value_carry(i),
              CI => normal_count,
              DI => '0',
              S  => pc_value(i));

          pc_value_xor: XORCY
            port map(
              O  => inc_pc_value(i),
              CI => normal_count,
              LI => pc_value(i));
      end generate pc_lsb_carry;
      pc_mid_carry: if ((i > 0) and (i < 9)) generate
      begin

          pc_vector_muxcy: MUXCY
            port map(
              O  => pc_vector_carry(i),
              CI => pc_vector_carry(i-1),
              DI => '0',
              S  => pc_vector(i));

          pc_vector_xor: XORCY
            port map(
              O  => inc_pc_vector(i),
              CI => pc_vector_carry(i-1),
              LI => pc_vector(i));

          pc_value_muxcy: MUXCY
            port map(
              O  => pc_value_carry(i),
              CI => pc_value_carry(i-1),
              DI => '0',
              S  => pc_value(i));

          pc_value_xor: XORCY
            port map(
              O  => inc_pc_value(i),
              CI => pc_value_carry(i-1),
              LI => pc_value(i));
      end generate pc_mid_carry;
      pc_msb_carry: if (i = 9) generate
      begin

          pc_vector_xor: XORCY
            port map(
              O  => inc_pc_vector(i),
              CI => pc_vector_carry(i-1),
              LI => pc_vector(i));

          pc_value_xor: XORCY
            port map(
              O  => inc_pc_value(i),
              CI => pc_value_carry(i-1),
              LI => pc_value(i));
      end generate pc_msb_carry;

      vector_select_mux: LUT3
        generic map(
          INIT => X"00")
        port map(
          O  => pc_vector(i),
          I0 => instruction(15),
          I1 => instruction(i),
          I2 => stack_pop_data(i));

      value_select_mux: LUT3
        generic map(
          INIT => X"00")
        port map(
          O  => pc_value(i),
          I0 => normal_count,
          I1 => inc_pc_vector(i),
          I2 => pc(i));

      register_bit: FDRSE
        generic map(
          INIT => '0')
        port map(
          Q  => pc(i),
          C  => clk,
          CE => pc_enable,
          D  => inc_pc_value(i),
          R  => internal_reset,
          S  => active_interrupt);
  end generate pc_loop;
  reg_loop: for i in 0 to 7 generate
      attribute INIT : string;
      attribute INIT of register_bit       : label is "0000";
      attribute INIT of operand_select_mux : label is "E4";

  begin

      register_bit: RAM16X1D
        generic map(
          INIT => X"0000")
        port map(
          DPO   => sy(i),
          SPO   => sx(i),
          A0    => instruction(8),
          A1    => instruction(9),
          A2    => instruction(10),
          A3    => instruction(11),
          D     => alu_result(i),
          DPRA0 => instruction(4),
          DPRA1 => instruction(5),
          DPRA2 => instruction(6),
          DPRA3 => instruction(7),
          WCLK  => clk,
          WE    => register_enable);

      operand_select_mux: LUT3
        generic map(
          INIT => X"00")
        port map(
          O  => second_operand(i),
          I0 => instruction(12),
          I1 => instruction(i),
          I2 => sy(i));
  end generate reg_loop;
  store_loop: for i in 0 to 7 generate
      attribute INIT : string;
      attribute INIT of memory_bit : label is "0000000000000000";

  begin

      memory_bit: RAM64X1S
        generic map(
          INIT => X"0000000000000000")
        port map(
          O    => memory_data(i),
          A0   => second_operand(0),
          A1   => second_operand(1),
          A2   => second_operand(2),
          A3   => second_operand(3),
          A4   => second_operand(4),
          A5   => second_operand(5),
          D    => sx(i),
          WCLK => clk,
          WE   => memory_enable);

      store_flop: FD
        generic map(
          INIT => '0')
        port map(
          Q => store_data(i),
          C => clk,
          D => memory_data(i));
  end generate store_loop;
  logical_loop: for i in 0 to 7 generate
      attribute INIT : string;
      attribute INIT of logical_lut : label is "6E8A";

  begin

      logical_lut: LUT4
        generic map(
          INIT => X"0000")
        port map(
          O  => logical_value(i),
          I0 => second_operand(i),
          I1 => sx(i),
          I2 => instruction(13),
          I3 => instruction(14));

      logical_flop: FDR
        generic map(
          INIT => '0')
        port map(
          Q => logical_result(i),
          C => clk,
          D => logical_value(i),
          R => sel_logical);
  end generate logical_loop;
  shift_loop: for i in 0 to 7 generate
  begin
      lsb_shift: if (i = 0) generate
          attribute INIT : string;
          attribute INIT of shift_mux_lut : label is "E4";

      begin

          shift_mux_lut: LUT3
            generic map(
              INIT => X"00")
            port map(
              O  => shift_value(i),
              I0 => instruction(3),
              I1 => shift_in,
              I2 => sx(i+1));
      end generate lsb_shift;
      mid_shift: if ((i > 0) and (i < 7)) generate
          attribute INIT : string;
          attribute INIT of shift_mux_lut : label is "E4";

      begin

          shift_mux_lut: LUT3
            generic map(
              INIT => X"00")
            port map(
              O  => shift_value(i),
              I0 => instruction(3),
              I1 => sx(i-1),
              I2 => sx(i+1));
      end generate mid_shift;
      msb_shift: if (i = 7) generate
          attribute INIT : string;
          attribute INIT of shift_mux_lut : label is "E4";

      begin

          shift_mux_lut: LUT3
            generic map(
              INIT => X"00")
            port map(
              O  => shift_value(i),
              I0 => instruction(3),
              I1 => sx(i-1),
              I2 => shift_in);
      end generate msb_shift;

      shift_flop: FDR
        generic map(
          INIT => '0')
        port map(
          Q => shift_result(i),
          C => clk,
          D => shift_value(i),
          R => sel_shift);
  end generate shift_loop;
  arith_loop: for i in 0 to 7 generate
      attribute INIT : string;
      attribute INIT of arith_lut : label is "96";

  begin
      lsb_arith: if (i = 0) generate
          attribute INIT : string;
          attribute INIT of arith_carry_in_lut : label is "6C";

      begin

          arith_carry_in_lut: LUT3
            generic map(
              INIT => X"00")
            port map(
              O  => sel_arith_carry_in,
              I0 => instruction(13),
              I1 => instruction(14),
              I2 => carry_flag);

          arith_carry_in_muxcy: MUXCY
            port map(
              O  => arith_carry_in,
              CI => '1',
              DI => '0',
              S  => sel_arith_carry_in);

          arith_muxcy: MUXCY
            port map(
              O  => arith_internal_carry(i),
              CI => arith_carry_in,
              DI => sx(i),
              S  => half_arith(i));

          arith_xor: XORCY
            port map(
              O  => arith_value(i),
              CI => arith_carry_in,
              LI => half_arith(i));
      end generate lsb_arith;
      mid_arith: if ((i > 0) and (i < 7)) generate
      begin

          arith_muxcy: MUXCY
            port map(
              O  => arith_internal_carry(i),
              CI => arith_internal_carry(i-1),
              DI => sx(i),
              S  => half_arith(i));

          arith_xor: XORCY
            port map(
              O  => arith_value(i),
              CI => arith_internal_carry(i-1),
              LI => half_arith(i));
      end generate mid_arith;
      msb_arith: if (i = 7) generate
          attribute INIT : string;
          attribute INIT of arith_carry_out_lut : label is "2";

      begin

          arith_muxcy: MUXCY
            port map(
              O  => arith_internal_carry(i),
              CI => arith_internal_carry(i-1),
              DI => sx(i),
              S  => half_arith(i));

          arith_xor: XORCY
            port map(
              O  => arith_value(i),
              CI => arith_internal_carry(i-1),
              LI => half_arith(i));

          arith_carry_out_lut: LUT1
            generic map(
              INIT => X"0")
            port map(
              O  => invert_arith_carry,
              I0 => instruction(14));

          arith_carry_out_xor: XORCY
            port map(
              O  => arith_carry_out,
              CI => arith_internal_carry(i),
              LI => invert_arith_carry);

          arith_carry_flop: FDR
            generic map(
              INIT => '0')
            port map(
              Q => arith_carry,
              C => clk,
              D => arith_carry_out,
              R => sel_arith);
      end generate msb_arith;

      arith_lut: LUT3
        generic map(
          INIT => X"00")
        port map(
          O  => half_arith(i),
          I0 => sx(i),
          I1 => second_operand(i),
          I2 => instruction(14));

      arith_flop: FDR
        generic map(
          INIT => '0')
        port map(
          Q => arith_result(i),
          C => clk,
          D => arith_value(i),
          R => sel_arith);
  end generate arith_loop;
  alu_mux_loop: for i in 0 to 7 generate
      attribute INIT : string;
      attribute INIT of or_lut  : label is "FE";
      attribute INIT of mux_lut : label is "E4";

  begin

      or_lut: LUT3
        generic map(
          INIT => X"00")
        port map(
          O  => alu_group(i),
          I0 => logical_result(i),
          I1 => arith_result(i),
          I2 => shift_result(i));

      mux_lut: LUT3
        generic map(
          INIT => X"00")
        port map(
          O  => input_group(i),
          I0 => instruction(13),
          I1 => in_port(i),
          I2 => store_data(i));

      shift_in_muxf5: MUXF5
        port map(
          O  => alu_result(i),
          I0 => alu_group(i),
          I1 => input_group(i),
          S  => sel_group);
  end generate alu_mux_loop;
  stack_ram_loop: for i in 0 to 9 generate
      attribute INIT : string;
      attribute INIT of stack_bit : label is "00000000";

  begin

      stack_bit: RAM32X1S
        generic map(
          INIT => X"00000000")
        port map(
          O    => stack_ram_data(i),
          A0   => stack_address(0),
          A1   => stack_address(1),
          A2   => stack_address(2),
          A3   => stack_address(3),
          A4   => stack_address(4),
          D    => pc(i),
          WCLK => clk,
          WE   => stack_write_enable);

      stack_flop: FD
        generic map(
          INIT => '0')
        port map(
          Q => stack_pop_data(i),
          C => clk,
          D => stack_ram_data(i));
  end generate stack_ram_loop;
  stack_count_loop: for i in 0 to 4 generate
  begin
      lsb_stack_count: if (i = 0) generate
          attribute INIT : string;
          attribute INIT of count_lut : label is "6555";

      begin

          count_lut: LUT4
            generic map(
              INIT => X"0000")
            port map(
              O  => half_stack_address(i),
              I0 => stack_address(i),
              I1 => t_state,
              I2 => valid_to_move,
              I3 => push_or_pop_type);

          count_muxcy: MUXCY
            port map(
              O  => stack_address_carry(i),
              CI => '0',
              DI => stack_address(i),
              S  => half_stack_address(i));

          count_xor: XORCY
            port map(
              O  => next_stack_address(i),
              CI => '0',
              LI => half_stack_address(i));
      end generate lsb_stack_count;
      mid_stack_count: if ((i > 0) and (i < 4)) generate
          attribute INIT : string;
          attribute INIT of count_lut : label is "A999";

      begin

          count_lut: LUT4
            generic map(
              INIT => X"0000")
            port map(
              O  => half_stack_address(i),
              I0 => stack_address(i),
              I1 => t_state,
              I2 => valid_to_move,
              I3 => call_type);

          count_muxcy: MUXCY
            port map(
              O  => stack_address_carry(i),
              CI => stack_address_carry(i-1),
              DI => stack_address(i),
              S  => half_stack_address(i));

          count_xor: XORCY
            port map(
              O  => next_stack_address(i),
              CI => stack_address_carry(i-1),
              LI => half_stack_address(i));
      end generate mid_stack_count;
      msb_stack_count: if (i = 4) generate
          attribute INIT : string;
          attribute INIT of count_lut : label is "A999";

      begin

          count_lut: LUT4
            generic map(
              INIT => X"0000")
            port map(
              O  => half_stack_address(i),
              I0 => stack_address(i),
              I1 => t_state,
              I2 => valid_to_move,
              I3 => call_type);

          count_xor: XORCY
            port map(
              O  => next_stack_address(i),
              CI => stack_address_carry(i-1),
              LI => half_stack_address(i));
      end generate msb_stack_count;

      register_bit: FDRE
        generic map(
          INIT => '0')
        port map(
          Q  => stack_address(i),
          C  => clk,
          CE => not_active_interrupt,
          D  => next_stack_address(i),
          R  => internal_reset);
  end generate stack_count_loop;

  t_state_lut: LUT1
    generic map(
      INIT => X"0")
    port map(
      O  => not_t_state,
      I0 => t_state);

  toggle_flop: FDR
    generic map(
      INIT => '0')
    port map(
      Q => t_state,
      C => clk,
      D => not_t_state,
      R => internal_reset);

  reset_flop1: FDS
    generic map(
      INIT => '1')
    port map(
      Q => reset_delay,
      C => clk,
      D => '0',
      S => reset);

  reset_flop2: FDS
    generic map(
      INIT => '1')
    port map(
      Q => internal_reset,
      C => clk,
      D => reset_delay,
      S => reset);

  int_capture_flop: FDR
    generic map(
      INIT => '0')
    port map(
      Q => clean_int,
      C => clk,
      D => interrupt,
      R => internal_reset);

  int_pulse_lut: LUT4
    generic map(
      INIT => X"0000")
    port map(
      O  => int_pulse,
      I0 => t_state,
      I1 => clean_int,
      I2 => int_enable,
      I3 => active_interrupt);

  int_flop: FDR
    generic map(
      INIT => '0')
    port map(
      Q => active_interrupt,
      C => clk,
      D => int_pulse,
      R => internal_reset);

  ack_flop: FD
    generic map(
      INIT => '0')
    port map(
      Q => interrupt_ack_internal,
      C => clk,
      D => active_interrupt);

  shadow_carry_flop: FDE
    generic map(
      INIT => '0')
    port map(
      Q  => shadow_carry,
      C  => clk,
      CE => active_interrupt,
      D  => carry_flag);

  shadow_zero_flop: FDE
    generic map(
      INIT => '0')
    port map(
      Q  => shadow_zero,
      C  => clk,
      CE => active_interrupt,
      D  => zero_flag);

  int_update_lut: LUT4
    generic map(
      INIT => X"0000")
    port map(
      O  => int_update_enable,
      I0 => active_interrupt,
      I1 => instruction(15),
      I2 => instruction(16),
      I3 => instruction(17));

  int_value_lut: LUT3
    generic map(
      INIT => X"00")
    port map(
      O  => int_enable_value,
      I0 => active_interrupt,
      I1 => instruction(0),
      I2 => interrupt_ack_internal);

  int_enable_flop: FDRE
    generic map(
      INIT => '0')
    port map(
      Q  => int_enable,
      C  => clk,
      CE => int_update_enable,
      D  => int_enable_value,
      R  => internal_reset);

  move_group_lut: LUT4
    generic map(
      INIT => X"0000")
    port map(
      O  => move_group,
      I0 => instruction(14),
      I1 => instruction(15),
      I2 => instruction(16),
      I3 => instruction(17));

  condition_met_lut: LUT4
    generic map(
      INIT => X"0000")
    port map(
      O  => condition_met,
      I0 => carry_flag,
      I1 => zero_flag,
      I2 => instruction(10),
      I3 => instruction(11));

  normal_count_lut: LUT3
    generic map(
      INIT => X"00")
    port map(
      O  => normal_count,
      I0 => instruction(12),
      I1 => condition_met,
      I2 => move_group);

  call_type_lut: LUT4
    generic map(
      INIT => X"0000")
    port map(
      O  => call_type,
      I0 => instruction(14),
      I1 => instruction(15),
      I2 => instruction(16),
      I3 => instruction(17));

  push_pop_lut: LUT4
    generic map(
      INIT => X"0000")
    port map(
      O  => push_or_pop_type,
      I0 => instruction(14),
      I1 => instruction(15),
      I2 => instruction(16),
      I3 => instruction(17));

  valid_move_lut: LUT2
    generic map(
      INIT => X"0")
    port map(
      O  => valid_to_move,
      I0 => instruction(12),
      I1 => condition_met);

  flag_type_lut: LUT4
    generic map(
      INIT => X"0000")
    port map(
      O  => flag_type,
      I0 => instruction(14),
      I1 => instruction(15),
      I2 => instruction(16),
      I3 => instruction(17));

  flag_write_flop: FD
    generic map(
      INIT => '0')
    port map(
      Q => flag_write,
      C => clk,
      D => flag_type);

  flag_enable_lut: LUT2
    generic map(
      INIT => X"0")
    port map(
      O  => flag_enable,
      I0 => t_state,
      I1 => flag_write);

  low_zero_lut: LUT4
    generic map(
      INIT => X"0000")
    port map(
      O  => low_zero,
      I0 => alu_result(0),
      I1 => alu_result(1),
      I2 => alu_result(2),
      I3 => alu_result(3));

  high_zero_lut: LUT4
    generic map(
      INIT => X"0000")
    port map(
      O  => high_zero,
      I0 => alu_result(4),
      I1 => alu_result(5),
      I2 => alu_result(6),
      I3 => alu_result(7));

  low_zero_muxcy: MUXCY
    port map(
      O  => low_zero_carry,
      CI => '1',
      DI => '0',
      S  => low_zero);

  high_zero_cymux: MUXCY
    port map(
      O  => high_zero_carry,
      CI => low_zero_carry,
      DI => '0',
      S  => high_zero);

  sel_shadow_zero_lut: LUT3
    generic map(
      INIT => X"00")
    port map(
      O  => sel_shadow_zero,
      I0 => shadow_zero,
      I1 => instruction(16),
      I2 => instruction(17));

  zero_cymux: MUXCY
    port map(
      O  => zero_carry,
      CI => high_zero_carry,
      DI => shadow_zero,
      S  => sel_shadow_zero);

  zero_xor: XORCY
    port map(
      O  => zero_fast_route,
      CI => zero_carry,
      LI => '0');

  zero_flag_flop: FDRE
    generic map(
      INIT => '0')
    port map(
      Q  => zero_flag,
      C  => clk,
      CE => flag_enable,
      D  => zero_fast_route,
      R  => internal_reset);

  low_parity_lut: LUT4
    generic map(
      INIT => X"0000")
    port map(
      O  => low_parity,
      I0 => logical_result(0),
      I1 => logical_result(1),
      I2 => logical_result(2),
      I3 => logical_result(3));

  high_parity_lut: LUT4
    generic map(
      INIT => X"0000")
    port map(
      O  => high_parity,
      I0 => logical_result(4),
      I1 => logical_result(5),
      I2 => logical_result(6),
      I3 => logical_result(7));

  parity_muxcy: MUXCY
    port map(
      O  => parity_carry,
      CI => '1',
      DI => '0',
      S  => low_parity);

  parity_xor: XORCY
    port map(
      O  => parity,
      CI => parity_carry,
      LI => high_parity);

  sel_parity_lut: LUT4
    generic map(
      INIT => X"0000")
    port map(
      O  => sel_parity,
      I0 => parity,
      I1 => instruction(13),
      I2 => instruction(15),
      I3 => instruction(16));

  sel_arith_carry_lut: LUT3
    generic map(
      INIT => X"00")
    port map(
      O  => sel_arith_carry,
      I0 => arith_carry,
      I1 => instruction(16),
      I2 => instruction(17));

  sel_shift_carry_lut: LUT2
    generic map(
      INIT => X"0")
    port map(
      O  => sel_shift_carry,
      I0 => shift_carry,
      I1 => instruction(15));

  sel_shadow_carry_lut: LUT2
    generic map(
      INIT => X"0")
    port map(
      O  => sel_shadow_carry,
      I0 => shadow_carry,
      I1 => instruction(17));

  sel_shadow_muxcy: MUXCY
    port map(
      O  => sel_carry(0),
      CI => '0',
      DI => shadow_carry,
      S  => sel_shadow_carry);

  sel_shift_muxcy: MUXCY
    port map(
      O  => sel_carry(1),
      CI => sel_carry(0),
      DI => shift_carry,
      S  => sel_shift_carry);

  sel_arith_muxcy: MUXCY
    port map(
      O  => sel_carry(2),
      CI => sel_carry(1),
      DI => arith_carry,
      S  => sel_arith_carry);

  sel_parity_muxcy: MUXCY
    port map(
      O  => sel_carry(3),
      CI => sel_carry(2),
      DI => parity,
      S  => sel_parity);

  carry_xor: XORCY
    port map(
      O  => carry_fast_route,
      CI => sel_carry(3),
      LI => '0');

  carry_flag_flop: FDRE
    generic map(
      INIT => '0')
    port map(
      Q  => carry_flag,
      C  => clk,
      CE => flag_enable,
      D  => carry_fast_route,
      R  => internal_reset);

  invert_enable: INV
    port map(
      O => pc_enable,
      I => t_state);

  register_type_lut: LUT4
    generic map(
      INIT => X"0000")
    port map(
      O  => register_type,
      I0 => active_interrupt,
      I1 => instruction(15),
      I2 => instruction(16),
      I3 => instruction(17));

  register_write_flop: FD
    generic map(
      INIT => '0')
    port map(
      Q => register_write,
      C => clk,
      D => register_type);

  register_enable_lut: LUT2
    generic map(
      INIT => X"0")
    port map(
      O  => register_enable,
      I0 => t_state,
      I1 => register_write);

  memory_type_lut: LUT4
    generic map(
      INIT => X"0000")
    port map(
      O  => memory_type,
      I0 => active_interrupt,
      I1 => instruction(15),
      I2 => instruction(16),
      I3 => instruction(17));

  memory_write_flop: FD
    generic map(
      INIT => '0')
    port map(
      Q => memory_write,
      C => clk,
      D => memory_type);

  memory_enable_lut: LUT4
    generic map(
      INIT => X"0000")
    port map(
      O  => memory_enable,
      I0 => t_state,
      I1 => instruction(13),
      I2 => instruction(14),
      I3 => memory_write);

  sel_logical_lut: LUT4
    generic map(
      INIT => X"0000")
    port map(
      O  => sel_logical,
      I0 => instruction(14),
      I1 => instruction(15),
      I2 => instruction(16),
      I3 => instruction(17));

  sel_shift_inv: INV
    port map(
      O => sel_shift,
      I => instruction(17));

  high_shift_in_lut: LUT3
    generic map(
      INIT => X"00")
    port map(
      O  => high_shift_in,
      I0 => instruction(1),
      I1 => sx(0),
      I2 => instruction(0));

  low_shift_in_lut: LUT3
    generic map(
      INIT => X"00")
    port map(
      O  => low_shift_in,
      I0 => instruction(1),
      I1 => carry_flag,
      I2 => sx(7));

  shift_in_muxf5: MUXF5
    port map(
      O  => shift_in,
      I0 => low_shift_in,
      I1 => high_shift_in,
      S  => instruction(2));

  shift_carry_lut: LUT3
    generic map(
      INIT => X"00")
    port map(
      O  => shift_carry_value,
      I0 => instruction(3),
      I1 => sx(7),
      I2 => sx(0));

  pipeline_bit: FD
    generic map(
      INIT => '0')
    port map(
      Q => shift_carry,
      C => clk,
      D => shift_carry_value);

  sel_arith_lut: LUT3
    generic map(
      INIT => X"00")
    port map(
      O  => sel_arith,
      I0 => instruction(14),
      I1 => instruction(15),
      I2 => instruction(16));

  input_fetch_type_lut: LUT4
    generic map(
      INIT => X"0000")
    port map(
      O  => input_fetch_type,
      I0 => instruction(14),
      I1 => instruction(15),
      I2 => instruction(16),
      I3 => instruction(17));

  sel_group_flop: FD
    generic map(
      INIT => '0')
    port map(
      Q => sel_group,
      C => clk,
      D => input_fetch_type);

  io_decode_lut: LUT4
    generic map(
      INIT => X"0000")
    port map(
      O  => io_initial_decode,
      I0 => active_interrupt,
      I1 => instruction(13),
      I2 => instruction(14),
      I3 => instruction(16));

  write_active_lut: LUT4
    generic map(
      INIT => X"0000")
    port map(
      O  => write_active,
      I0 => t_state,
      I1 => instruction(15),
      I2 => instruction(17),
      I3 => io_initial_decode);

  write_strobe_flop: FDR
    generic map(
      INIT => '0')
    port map(
      Q => write_strobe,
      C => clk,
      D => write_active,
      R => internal_reset);

  read_active_lut: LUT4
    generic map(
      INIT => X"0000")
    port map(
      O  => read_active,
      I0 => t_state,
      I1 => instruction(15),
      I2 => instruction(17),
      I3 => io_initial_decode);

  read_strobe_flop: FDR
    generic map(
      INIT => '0')
    port map(
      Q => read_strobe,
      C => clk,
      D => read_active,
      R => internal_reset);

  stack_ram_inv: INV
    port map(
      O => stack_write_enable,
      I => t_state);

  stack_count_inv: INV
    port map(
      O => not_active_interrupt,
      I => active_interrupt);
end architecture low_level_definition ; -- of kcpsm3

