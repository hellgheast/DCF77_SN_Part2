-- EASE/HDL begin --------------------------------------------------------------
-- 
-- Architecture 'rtl' of entity 'BCD_7Seg_Converter'.
-- 
--------------------------------------------------------------------------------
-- 
-- Copy of the interface declaration:
-- 
--   port (
--     clk              : in     std_logic;
--     reset_n          : in     std_logic;
--     switch           : in     std_logic_vector(1 downto 0);
--     time_bc_7seg_lsb : out    std_logic_vector(6 downto 0);
--     time_bc_7seg_msb : out    std_logic_vector(6 downto 0);
--     time_bc_in       : in     std_logic_vector(7 downto 0));
-- 
-- EASE/HDL end ----------------------------------------------------------------

architecture rtl of BCD_7Seg_Converter is

begin

P1:process(clk, reset_n)

	begin
     
     if reset_n = '0' then
	 	time_bc_7seg_lsb  <= (others => '0');
	 	time_bc_7seg_msb  <= (others => '0');   
	 	--tens_number  <= (others => '0');
	 	--units_number   <= (others => '0');

	elsif clk'EVENT AND clk = '1' then
    
    	if switch(0) = '1' then
  		-- Bitcount (entier) 	
                                         
            --tens_number <= std_logic_vector(time_bc_in"1010");  -- Isole les dizaines dans la variable tens_number
            --units_number <= unsigned(time_bc_in) - (unsigned(tens_number)*unsigned(std_logic_vector("1010"))); -- Isole les unités dans la variable units_number
            
           -- time_bc_7seg_msb <= tens_number;  -- dizaines
			--time_bc_7seg_lsb <= units_number;  	-- unités
 				        
 				    
 			case  time_bc_in(7 downto 0) is
				when "00000000"=> time_bc_7seg_msb <="0000000";  -- '0'  
				                  time_bc_7seg_lsb <="1111110";
				                  
				when "00000001"=> time_bc_7seg_msb <="0000000";  -- '1' 
			                  	  time_bc_7seg_lsb <="0110000";
				                  				
				when "00000010"=> time_bc_7seg_msb <="0000000";  -- '2'  
				                  time_bc_7seg_lsb <="1101101";
				                  
				when "00000011"=> time_bc_7seg_msb <="0000000";  -- '3'  
				                  time_bc_7seg_lsb <="1111001";
				                  
				when "00000100"=> time_bc_7seg_msb <="0000000";  -- '4'  
				                  time_bc_7seg_lsb <="0110011";
				                  
				when "00000101"=> time_bc_7seg_msb <="0000000";  -- '5' 
				                  time_bc_7seg_lsb <="1011011";
				                  
				when "00000110"=> time_bc_7seg_msb <="0000000";  -- '6'  
				                  time_bc_7seg_lsb <="1011111";
				                  
		   		when "00000111"=> time_bc_7seg_msb <="0000000";  -- '7' 
		   		                  time_bc_7seg_lsb <="1110000";
				                  
				when "00001000"=> time_bc_7seg_msb <="0000000";  -- '8'
				                  time_bc_7seg_lsb <="1111111";
				                  
				when "00001001"=> time_bc_7seg_msb <="0000000";  -- '9' 
				                  time_bc_7seg_lsb <="1111011";
				                                               
				when "00001010"=> time_bc_7seg_msb <="0110000";  -- '10'  
				                  time_bc_7seg_lsb <="1111110";
				                  
				when "00001011"=> time_bc_7seg_msb <="0110000";  -- '11' 
			                  	  time_bc_7seg_lsb <="0110000";
				                  				
				when "00001100"=> time_bc_7seg_msb <="0110000";  -- '12'  
				                  time_bc_7seg_lsb <="1101101";
				                  
				when "00001101"=> time_bc_7seg_msb <="0110000";  -- '13'  
				                  time_bc_7seg_lsb <="1111001";
				                  
				when "00001110"=> time_bc_7seg_msb <="0110000";  -- '14'  
				                  time_bc_7seg_lsb <="0110011";
				                  
				when "00001111"=> time_bc_7seg_msb <="0110000";  -- '15' 
				                  time_bc_7seg_lsb <="1011011";
				                  
				when "00010000"=> time_bc_7seg_msb <="0110000";  -- '16'  
				                  time_bc_7seg_lsb <="1011111";
				                  
		   		when "00010001"=> time_bc_7seg_msb <="0110000";  -- '17' 
		   		                  time_bc_7seg_lsb <="1110000";
				                  
				when "00010010"=> time_bc_7seg_msb <="0110000";  -- '18'
				                  time_bc_7seg_lsb <="1111111";
				                  
				when "00010011"=> time_bc_7seg_msb <="0110000";  -- '19' 
				                  time_bc_7seg_lsb <="1111011";    
				                  
				when "00010100"=> time_bc_7seg_msb <="1101101";  -- '20'  
				                  time_bc_7seg_lsb <="1111110";
				                  
				when "00010101"=> time_bc_7seg_msb <="1101101";  -- '21' 
			                  	  time_bc_7seg_lsb <="0110000";
				                  				
				when "00010110"=> time_bc_7seg_msb <="1101101";  -- '22'  
				                  time_bc_7seg_lsb <="1101101";
				                  
				when "00010111"=> time_bc_7seg_msb <="1101101";  -- '23'  
				                  time_bc_7seg_lsb <="1111001";
				                  
				when "00011000"=> time_bc_7seg_msb <="1101101";  -- '24'  
				                  time_bc_7seg_lsb <="0110011";
				                  
				when "00011001"=> time_bc_7seg_msb <="1101101";  -- '25' 
				                  time_bc_7seg_lsb <="1011011";
				                  
				when "00011010"=> time_bc_7seg_msb <="1101101";  -- '26'  
				                  time_bc_7seg_lsb <="1011111";
				                  
		   		when "00011011"=> time_bc_7seg_msb <="1101101";  -- '27' 
		   		                  time_bc_7seg_lsb <="1110000";
				                  
				when "00011100"=> time_bc_7seg_msb <="1101101";  -- '28'
				                  time_bc_7seg_lsb <="1111111";
				                  
				when "00011101"=> time_bc_7seg_msb <="1101101";  -- '29' 
				                  time_bc_7seg_lsb <="1111011";  
				                  
				when "00011110"=> time_bc_7seg_msb <="1111001";  -- '30'  
				                  time_bc_7seg_lsb <="1111110";
				                  
				when "00011111"=> time_bc_7seg_msb <="1111001";  -- '31' 
			                  	  time_bc_7seg_lsb <="0110000";
				                  				
				when "00100000"=> time_bc_7seg_msb <="1111001";  -- '32'  
				                  time_bc_7seg_lsb <="1101101";
				                  
				when "00100001"=> time_bc_7seg_msb <="1111001";  -- '33'  
				                  time_bc_7seg_lsb <="1111001";
				                  
				when "00100010"=> time_bc_7seg_msb <="1111001";  -- '34'  
				                  time_bc_7seg_lsb <="0110011";
				                  
				when "00100011"=> time_bc_7seg_msb <="1111001";  -- '35' 
				                  time_bc_7seg_lsb <="1011011";
				                  
				when "00100100"=> time_bc_7seg_msb <="1111001";  -- '36'  
				                  time_bc_7seg_lsb <="1011111";
				                  
		   		when "00100101"=> time_bc_7seg_msb <="1111001";  -- '37' 
		   		                  time_bc_7seg_lsb <="1110000";
				                  
				when "00100110"=> time_bc_7seg_msb <="1111001";  -- '38'
				                  time_bc_7seg_lsb <="1111111";
				                  
				when "00100111"=> time_bc_7seg_msb <="1111001";  -- '39' 
				                  time_bc_7seg_lsb <="1111011"; 
				                  
				when "00101000"=> time_bc_7seg_msb <="0110011";  -- '40'  
				                  time_bc_7seg_lsb <="1111110";
				                  
				when "00101001"=> time_bc_7seg_msb <="0110011";  -- '41' 
			                  	  time_bc_7seg_lsb <="0110000";
				                  				
				when "00101010"=> time_bc_7seg_msb <="0110011";  -- '42'  
				                  time_bc_7seg_lsb <="1101101";
				                  
				when "00101011"=> time_bc_7seg_msb <="0110011";  -- '43'  
				                  time_bc_7seg_lsb <="1111001";
				                  
				when "00101100"=> time_bc_7seg_msb <="0110011";  -- '44'  
				                  time_bc_7seg_lsb <="0110011";
				                  
				when "00101101"=> time_bc_7seg_msb <="0110011";  -- '45' 
				                  time_bc_7seg_lsb <="1011011";
				                  
				when "00101110"=> time_bc_7seg_msb <="0110011";  -- '46'  
				                  time_bc_7seg_lsb <="1011111";
				                  
		   		when "00101111"=> time_bc_7seg_msb <="0110011";  -- '47' 
		   		                  time_bc_7seg_lsb <="1110000";
				                  
				when "00110000"=> time_bc_7seg_msb <="0110011";  -- '48'
				                  time_bc_7seg_lsb <="1111111";
				                  
				when "00110001"=> time_bc_7seg_msb <="0110011";  -- '49' 
				                  time_bc_7seg_lsb <="1111011";
				                  
				when "00110010"=> time_bc_7seg_msb <="1011011";  -- '50'  
				                  time_bc_7seg_lsb <="1111110";
				                  
				when "00110011"=> time_bc_7seg_msb <="1011011";  -- '51' 
			                  	  time_bc_7seg_lsb <="0110000";
				                  				
				when "00110100"=> time_bc_7seg_msb <="1011011";  -- '52'  
				                  time_bc_7seg_lsb <="1101101";
				                  
				when "00110101"=> time_bc_7seg_msb <="1011011";  -- '53'  
				                  time_bc_7seg_lsb <="1111001";
				                  
				when "00110110"=> time_bc_7seg_msb <="1011011";  -- '54'  
				                  time_bc_7seg_lsb <="0110011";
				                  
				when "00110111"=> time_bc_7seg_msb <="1011011";  -- '55' 
				                  time_bc_7seg_lsb <="1011011";
				                  
				when "00111000"=> time_bc_7seg_msb <="1011011";  -- '56'  
				                  time_bc_7seg_lsb <="1011111";
				                  
		   		when "00111001"=> time_bc_7seg_msb <="1011011";  -- '57' 
		   		                  time_bc_7seg_lsb <="1110000";
				                  
				when "00111010"=> time_bc_7seg_msb <="1011011";  -- '58'
				                  time_bc_7seg_lsb <="1111111";
				                  
				when "00111011"=> time_bc_7seg_msb <="1011011";  -- '59' 
				                  time_bc_7seg_lsb <="1111011";                                               
				                                                 
				when "00111100"=> time_bc_7seg_msb <="1011111";  -- '60' 
				                  time_bc_7seg_lsb <="1111110"; 
				                  
				when others=> time_bc_7seg_msb <="0000000";
				              time_bc_7seg_lsb <="0000000";
			end case;				    
 				    
 				    
 				    
	    else     
    	-- Heures et Minutes (BCD)
    
			case  time_bc_in(7 downto 4) is
				when "0000"=> time_bc_7seg_msb <="1111110";  -- '0'
				when "0001"=> time_bc_7seg_msb <="0110000";  -- '1'
				when "0010"=> time_bc_7seg_msb <="1101101";  -- '2'
				when "0011"=> time_bc_7seg_msb <="1111001";  -- '3'
				when "0100"=> time_bc_7seg_msb <="0110011";  -- '4' 
				when "0101"=> time_bc_7seg_msb <="1011011";  -- '5'
				when "0110"=> time_bc_7seg_msb <="1011111";  -- '6'
		   		when "0111"=> time_bc_7seg_msb <="1110000";  -- '7'
				when "1000"=> time_bc_7seg_msb <="1111111";  -- '8'
				when "1001"=> time_bc_7seg_msb <="1111011";  -- '9'
				when others=> time_bc_7seg_msb <="0000000"; 
			end case;         
		
		
			case  time_bc_in(3 downto 0) is
				when "0000"=> time_bc_7seg_lsb <="1111110";  -- '0'
		   		when "0001"=> time_bc_7seg_lsb <="0110000";  -- '1'
				when "0010"=> time_bc_7seg_lsb <="1101101";  -- '2'
				when "0011"=> time_bc_7seg_lsb <="1111001";  -- '3'
				when "0100"=> time_bc_7seg_lsb <="0110011";  -- '4' 
				when "0101"=> time_bc_7seg_lsb <="1011011";  -- '5'
				when "0110"=> time_bc_7seg_lsb <="1011111";  -- '6'
				when "0111"=> time_bc_7seg_lsb <="1110000";  -- '7'
				when "1000"=> time_bc_7seg_lsb <="1111111";  -- '8'
				when "1001"=> time_bc_7seg_lsb <="1111011";  -- '9'
				when others=> time_bc_7seg_lsb <="0000000"; 
			end case;         
 
		end if;
	end if;

end process;     
     
     
end architecture rtl ; -- of BCD_7Seg_Converter

