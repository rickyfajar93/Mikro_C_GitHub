
_Wait:

;Bluetooth.c,50 :: 		void Wait(){
;Bluetooth.c,51 :: 		for(X=0;X<60;X++) //600
	CLRF        _x+0 
	CLRF        _x+1 
L_Wait0:
	MOVLW       128
	XORWF       _x+1, 0 
	MOVWF       R0 
	MOVLW       128
	SUBWF       R0, 0 
	BTFSS       STATUS+0, 2 
	GOTO        L__Wait13
	MOVLW       60
	SUBWF       _x+0, 0 
L__Wait13:
	BTFSC       STATUS+0, 0 
	GOTO        L_Wait1
;Bluetooth.c,53 :: 		Delay_ms(1000);
	MOVLW       26
	MOVWF       R11, 0
	MOVLW       94
	MOVWF       R12, 0
	MOVLW       110
	MOVWF       R13, 0
L_Wait3:
	DECFSZ      R13, 1, 1
	BRA         L_Wait3
	DECFSZ      R12, 1, 1
	BRA         L_Wait3
	DECFSZ      R11, 1, 1
	BRA         L_Wait3
	NOP
;Bluetooth.c,51 :: 		for(X=0;X<60;X++) //600
	INFSNZ      _x+0, 1 
	INCF        _x+1, 1 
;Bluetooth.c,54 :: 		}
	GOTO        L_Wait0
L_Wait1:
;Bluetooth.c,117 :: 		}
L_end_Wait:
	RETURN      0
; end of _Wait

_main:

;Bluetooth.c,119 :: 		void main(){
;Bluetooth.c,124 :: 		UART1_Init(9600);              // Initialize UART module at 9600 bps
	BSF         BAUDCON+0, 3, 0
	MOVLW       2
	MOVWF       SPBRGH+0 
	MOVLW       8
	MOVWF       SPBRG+0 
	BSF         TXSTA+0, 2, 0
	CALL        _UART1_Init+0, 0
;Bluetooth.c,127 :: 		ADCON1 = 0b00001001; // Set AN0 channel pin as analog
	MOVLW       9
	MOVWF       ADCON1+0 
;Bluetooth.c,128 :: 		CMCON |= 7; // Disable comparators
	MOVLW       7
	IORWF       CMCON+0, 1 
;Bluetooth.c,130 :: 		ADC_init();
	CALL        _ADC_Init+0, 0
;Bluetooth.c,189 :: 		while(1) {
L_main4:
;Bluetooth.c,191 :: 		hold0 = adc_read(0)*0.4886; //0.406
	CLRF        FARG_ADC_Read_channel+0 
	CALL        _ADC_Read+0, 0
	CALL        _Word2Double+0, 0
	MOVLW       199
	MOVWF       R4 
	MOVLW       41
	MOVWF       R5 
	MOVLW       122
	MOVWF       R6 
	MOVLW       125
	MOVWF       R7 
	CALL        _Mul_32x32_FP+0, 0
	CALL        _Double2Word+0, 0
	MOVF        R0, 0 
	MOVWF       _hold0+0 
	MOVF        R1, 0 
	MOVWF       _hold0+1 
;Bluetooth.c,192 :: 		delay_ms(12);
	MOVLW       78
	MOVWF       R12, 0
	MOVLW       235
	MOVWF       R13, 0
L_main6:
	DECFSZ      R13, 1, 1
	BRA         L_main6
	DECFSZ      R12, 1, 1
	BRA         L_main6
;Bluetooth.c,193 :: 		hold1 = adc_read(1)*0.4886;
	MOVLW       1
	MOVWF       FARG_ADC_Read_channel+0 
	CALL        _ADC_Read+0, 0
	CALL        _Word2Double+0, 0
	MOVLW       199
	MOVWF       R4 
	MOVLW       41
	MOVWF       R5 
	MOVLW       122
	MOVWF       R6 
	MOVLW       125
	MOVWF       R7 
	CALL        _Mul_32x32_FP+0, 0
	CALL        _Double2Word+0, 0
	MOVF        R0, 0 
	MOVWF       _hold1+0 
	MOVF        R1, 0 
	MOVWF       _hold1+1 
;Bluetooth.c,194 :: 		delay_ms(12);
	MOVLW       78
	MOVWF       R12, 0
	MOVLW       235
	MOVWF       R13, 0
L_main7:
	DECFSZ      R13, 1, 1
	BRA         L_main7
	DECFSZ      R12, 1, 1
	BRA         L_main7
;Bluetooth.c,195 :: 		hold2 = adc_read(2)*0.4886;
	MOVLW       2
	MOVWF       FARG_ADC_Read_channel+0 
	CALL        _ADC_Read+0, 0
	CALL        _Word2Double+0, 0
	MOVLW       199
	MOVWF       R4 
	MOVLW       41
	MOVWF       R5 
	MOVLW       122
	MOVWF       R6 
	MOVLW       125
	MOVWF       R7 
	CALL        _Mul_32x32_FP+0, 0
	CALL        _Double2Word+0, 0
	MOVF        R0, 0 
	MOVWF       _hold2+0 
	MOVF        R1, 0 
	MOVWF       _hold2+1 
;Bluetooth.c,196 :: 		delay_ms(12);
	MOVLW       78
	MOVWF       R12, 0
	MOVLW       235
	MOVWF       R13, 0
L_main8:
	DECFSZ      R13, 1, 1
	BRA         L_main8
	DECFSZ      R12, 1, 1
	BRA         L_main8
;Bluetooth.c,197 :: 		hold3 = adc_read(3)*0.4886;
	MOVLW       3
	MOVWF       FARG_ADC_Read_channel+0 
	CALL        _ADC_Read+0, 0
	CALL        _Word2Double+0, 0
	MOVLW       199
	MOVWF       R4 
	MOVLW       41
	MOVWF       R5 
	MOVLW       122
	MOVWF       R6 
	MOVLW       125
	MOVWF       R7 
	CALL        _Mul_32x32_FP+0, 0
	CALL        _Double2Word+0, 0
	MOVF        R0, 0 
	MOVWF       _hold3+0 
	MOVF        R1, 0 
	MOVWF       _hold3+1 
;Bluetooth.c,198 :: 		delay_ms(12);
	MOVLW       78
	MOVWF       R12, 0
	MOVLW       235
	MOVWF       R13, 0
L_main9:
	DECFSZ      R13, 1, 1
	BRA         L_main9
	DECFSZ      R12, 1, 1
	BRA         L_main9
;Bluetooth.c,199 :: 		hold4 = adc_read(4)*0.4886;
	MOVLW       4
	MOVWF       FARG_ADC_Read_channel+0 
	CALL        _ADC_Read+0, 0
	CALL        _Word2Double+0, 0
	MOVLW       199
	MOVWF       R4 
	MOVLW       41
	MOVWF       R5 
	MOVLW       122
	MOVWF       R6 
	MOVLW       125
	MOVWF       R7 
	CALL        _Mul_32x32_FP+0, 0
	CALL        _Double2Word+0, 0
	MOVF        R0, 0 
	MOVWF       _hold4+0 
	MOVF        R1, 0 
	MOVWF       _hold4+1 
;Bluetooth.c,200 :: 		delay_ms(12);
	MOVLW       78
	MOVWF       R12, 0
	MOVLW       235
	MOVWF       R13, 0
L_main10:
	DECFSZ      R13, 1, 1
	BRA         L_main10
	DECFSZ      R12, 1, 1
	BRA         L_main10
;Bluetooth.c,201 :: 		hold5 = adc_read(5)*0.4886;
	MOVLW       5
	MOVWF       FARG_ADC_Read_channel+0 
	CALL        _ADC_Read+0, 0
	CALL        _Word2Double+0, 0
	MOVLW       199
	MOVWF       R4 
	MOVLW       41
	MOVWF       R5 
	MOVLW       122
	MOVWF       R6 
	MOVLW       125
	MOVWF       R7 
	CALL        _Mul_32x32_FP+0, 0
	CALL        _Double2Word+0, 0
	MOVF        R0, 0 
	MOVWF       _hold5+0 
	MOVF        R1, 0 
	MOVWF       _hold5+1 
;Bluetooth.c,202 :: 		delay_ms(12);
	MOVLW       78
	MOVWF       R12, 0
	MOVLW       235
	MOVWF       R13, 0
L_main11:
	DECFSZ      R13, 1, 1
	BRA         L_main11
	DECFSZ      R12, 1, 1
	BRA         L_main11
;Bluetooth.c,204 :: 		intToStr(hold0, data1);
	MOVF        _hold0+0, 0 
	MOVWF       FARG_IntToStr_input+0 
	MOVF        _hold0+1, 0 
	MOVWF       FARG_IntToStr_input+1 
	MOVLW       _data1+0
	MOVWF       FARG_IntToStr_output+0 
	MOVLW       hi_addr(_data1+0)
	MOVWF       FARG_IntToStr_output+1 
	CALL        _IntToStr+0, 0
;Bluetooth.c,205 :: 		LTRIM(data1);
	MOVLW       _data1+0
	MOVWF       FARG_Ltrim_string+0 
	MOVLW       hi_addr(_data1+0)
	MOVWF       FARG_Ltrim_string+1 
	CALL        _Ltrim+0, 0
;Bluetooth.c,206 :: 		intToStr(hold1, data2);
	MOVF        _hold1+0, 0 
	MOVWF       FARG_IntToStr_input+0 
	MOVF        _hold1+1, 0 
	MOVWF       FARG_IntToStr_input+1 
	MOVLW       _data2+0
	MOVWF       FARG_IntToStr_output+0 
	MOVLW       hi_addr(_data2+0)
	MOVWF       FARG_IntToStr_output+1 
	CALL        _IntToStr+0, 0
;Bluetooth.c,207 :: 		LTRIM(data2);
	MOVLW       _data2+0
	MOVWF       FARG_Ltrim_string+0 
	MOVLW       hi_addr(_data2+0)
	MOVWF       FARG_Ltrim_string+1 
	CALL        _Ltrim+0, 0
;Bluetooth.c,208 :: 		intToStr(hold2, data3);
	MOVF        _hold2+0, 0 
	MOVWF       FARG_IntToStr_input+0 
	MOVF        _hold2+1, 0 
	MOVWF       FARG_IntToStr_input+1 
	MOVLW       _data3+0
	MOVWF       FARG_IntToStr_output+0 
	MOVLW       hi_addr(_data3+0)
	MOVWF       FARG_IntToStr_output+1 
	CALL        _IntToStr+0, 0
;Bluetooth.c,209 :: 		LTRIM(data3);
	MOVLW       _data3+0
	MOVWF       FARG_Ltrim_string+0 
	MOVLW       hi_addr(_data3+0)
	MOVWF       FARG_Ltrim_string+1 
	CALL        _Ltrim+0, 0
;Bluetooth.c,210 :: 		intToStr(hold3, data4);
	MOVF        _hold3+0, 0 
	MOVWF       FARG_IntToStr_input+0 
	MOVF        _hold3+1, 0 
	MOVWF       FARG_IntToStr_input+1 
	MOVLW       _data4+0
	MOVWF       FARG_IntToStr_output+0 
	MOVLW       hi_addr(_data4+0)
	MOVWF       FARG_IntToStr_output+1 
	CALL        _IntToStr+0, 0
;Bluetooth.c,211 :: 		LTRIM(data4);
	MOVLW       _data4+0
	MOVWF       FARG_Ltrim_string+0 
	MOVLW       hi_addr(_data4+0)
	MOVWF       FARG_Ltrim_string+1 
	CALL        _Ltrim+0, 0
;Bluetooth.c,212 :: 		intToStr(hold4, data5);
	MOVF        _hold4+0, 0 
	MOVWF       FARG_IntToStr_input+0 
	MOVF        _hold4+1, 0 
	MOVWF       FARG_IntToStr_input+1 
	MOVLW       _data5+0
	MOVWF       FARG_IntToStr_output+0 
	MOVLW       hi_addr(_data5+0)
	MOVWF       FARG_IntToStr_output+1 
	CALL        _IntToStr+0, 0
;Bluetooth.c,213 :: 		LTRIM(data5);
	MOVLW       _data5+0
	MOVWF       FARG_Ltrim_string+0 
	MOVLW       hi_addr(_data5+0)
	MOVWF       FARG_Ltrim_string+1 
	CALL        _Ltrim+0, 0
;Bluetooth.c,214 :: 		intToStr(hold5, data6);
	MOVF        _hold5+0, 0 
	MOVWF       FARG_IntToStr_input+0 
	MOVF        _hold5+1, 0 
	MOVWF       FARG_IntToStr_input+1 
	MOVLW       _data6+0
	MOVWF       FARG_IntToStr_output+0 
	MOVLW       hi_addr(_data6+0)
	MOVWF       FARG_IntToStr_output+1 
	CALL        _IntToStr+0, 0
;Bluetooth.c,215 :: 		LTRIM(data6);
	MOVLW       _data6+0
	MOVWF       FARG_Ltrim_string+0 
	MOVLW       hi_addr(_data6+0)
	MOVWF       FARG_Ltrim_string+1 
	CALL        _Ltrim+0, 0
;Bluetooth.c,232 :: 		UART1_Write_text("Data1");
	MOVLW       68
	MOVWF       ?lstr1_Bluetooth+0 
	MOVLW       97
	MOVWF       ?lstr1_Bluetooth+1 
	MOVLW       116
	MOVWF       ?lstr1_Bluetooth+2 
	MOVLW       97
	MOVWF       ?lstr1_Bluetooth+3 
	MOVLW       49
	MOVWF       ?lstr1_Bluetooth+4 
	CLRF        ?lstr1_Bluetooth+5 
	MOVLW       ?lstr1_Bluetooth+0
	MOVWF       FARG_UART1_Write_Text_uart_text+0 
	MOVLW       hi_addr(?lstr1_Bluetooth+0)
	MOVWF       FARG_UART1_Write_Text_uart_text+1 
	CALL        _UART1_Write_Text+0, 0
;Bluetooth.c,233 :: 		UART1_Write_text("  ");
	MOVLW       32
	MOVWF       ?lstr2_Bluetooth+0 
	MOVLW       32
	MOVWF       ?lstr2_Bluetooth+1 
	CLRF        ?lstr2_Bluetooth+2 
	MOVLW       ?lstr2_Bluetooth+0
	MOVWF       FARG_UART1_Write_Text_uart_text+0 
	MOVLW       hi_addr(?lstr2_Bluetooth+0)
	MOVWF       FARG_UART1_Write_Text_uart_text+1 
	CALL        _UART1_Write_Text+0, 0
;Bluetooth.c,234 :: 		UART1_Write_text(data1);
	MOVLW       _data1+0
	MOVWF       FARG_UART1_Write_Text_uart_text+0 
	MOVLW       hi_addr(_data1+0)
	MOVWF       FARG_UART1_Write_Text_uart_text+1 
	CALL        _UART1_Write_Text+0, 0
;Bluetooth.c,235 :: 		UART1_Write(0x0D);
	MOVLW       13
	MOVWF       FARG_UART1_Write_data_+0 
	CALL        _UART1_Write+0, 0
;Bluetooth.c,236 :: 		UART1_Write(0x0A);
	MOVLW       10
	MOVWF       FARG_UART1_Write_data_+0 
	CALL        _UART1_Write+0, 0
;Bluetooth.c,240 :: 		UART1_Write_text("Data2");
	MOVLW       68
	MOVWF       ?lstr3_Bluetooth+0 
	MOVLW       97
	MOVWF       ?lstr3_Bluetooth+1 
	MOVLW       116
	MOVWF       ?lstr3_Bluetooth+2 
	MOVLW       97
	MOVWF       ?lstr3_Bluetooth+3 
	MOVLW       50
	MOVWF       ?lstr3_Bluetooth+4 
	CLRF        ?lstr3_Bluetooth+5 
	MOVLW       ?lstr3_Bluetooth+0
	MOVWF       FARG_UART1_Write_Text_uart_text+0 
	MOVLW       hi_addr(?lstr3_Bluetooth+0)
	MOVWF       FARG_UART1_Write_Text_uart_text+1 
	CALL        _UART1_Write_Text+0, 0
;Bluetooth.c,241 :: 		UART1_Write_text("  ");
	MOVLW       32
	MOVWF       ?lstr4_Bluetooth+0 
	MOVLW       32
	MOVWF       ?lstr4_Bluetooth+1 
	CLRF        ?lstr4_Bluetooth+2 
	MOVLW       ?lstr4_Bluetooth+0
	MOVWF       FARG_UART1_Write_Text_uart_text+0 
	MOVLW       hi_addr(?lstr4_Bluetooth+0)
	MOVWF       FARG_UART1_Write_Text_uart_text+1 
	CALL        _UART1_Write_Text+0, 0
;Bluetooth.c,242 :: 		UART1_Write_text(data2);
	MOVLW       _data2+0
	MOVWF       FARG_UART1_Write_Text_uart_text+0 
	MOVLW       hi_addr(_data2+0)
	MOVWF       FARG_UART1_Write_Text_uart_text+1 
	CALL        _UART1_Write_Text+0, 0
;Bluetooth.c,243 :: 		UART1_Write(0x0D);
	MOVLW       13
	MOVWF       FARG_UART1_Write_data_+0 
	CALL        _UART1_Write+0, 0
;Bluetooth.c,244 :: 		UART1_Write(0x0A);
	MOVLW       10
	MOVWF       FARG_UART1_Write_data_+0 
	CALL        _UART1_Write+0, 0
;Bluetooth.c,248 :: 		UART1_Write_text("Data3");
	MOVLW       68
	MOVWF       ?lstr5_Bluetooth+0 
	MOVLW       97
	MOVWF       ?lstr5_Bluetooth+1 
	MOVLW       116
	MOVWF       ?lstr5_Bluetooth+2 
	MOVLW       97
	MOVWF       ?lstr5_Bluetooth+3 
	MOVLW       51
	MOVWF       ?lstr5_Bluetooth+4 
	CLRF        ?lstr5_Bluetooth+5 
	MOVLW       ?lstr5_Bluetooth+0
	MOVWF       FARG_UART1_Write_Text_uart_text+0 
	MOVLW       hi_addr(?lstr5_Bluetooth+0)
	MOVWF       FARG_UART1_Write_Text_uart_text+1 
	CALL        _UART1_Write_Text+0, 0
;Bluetooth.c,249 :: 		UART1_Write_text("  ");
	MOVLW       32
	MOVWF       ?lstr6_Bluetooth+0 
	MOVLW       32
	MOVWF       ?lstr6_Bluetooth+1 
	CLRF        ?lstr6_Bluetooth+2 
	MOVLW       ?lstr6_Bluetooth+0
	MOVWF       FARG_UART1_Write_Text_uart_text+0 
	MOVLW       hi_addr(?lstr6_Bluetooth+0)
	MOVWF       FARG_UART1_Write_Text_uart_text+1 
	CALL        _UART1_Write_Text+0, 0
;Bluetooth.c,250 :: 		UART1_Write_text(data3);
	MOVLW       _data3+0
	MOVWF       FARG_UART1_Write_Text_uart_text+0 
	MOVLW       hi_addr(_data3+0)
	MOVWF       FARG_UART1_Write_Text_uart_text+1 
	CALL        _UART1_Write_Text+0, 0
;Bluetooth.c,251 :: 		UART1_Write(0x0D);
	MOVLW       13
	MOVWF       FARG_UART1_Write_data_+0 
	CALL        _UART1_Write+0, 0
;Bluetooth.c,252 :: 		UART1_Write(0x0A);
	MOVLW       10
	MOVWF       FARG_UART1_Write_data_+0 
	CALL        _UART1_Write+0, 0
;Bluetooth.c,254 :: 		UART1_Write_text("Data4");
	MOVLW       68
	MOVWF       ?lstr7_Bluetooth+0 
	MOVLW       97
	MOVWF       ?lstr7_Bluetooth+1 
	MOVLW       116
	MOVWF       ?lstr7_Bluetooth+2 
	MOVLW       97
	MOVWF       ?lstr7_Bluetooth+3 
	MOVLW       52
	MOVWF       ?lstr7_Bluetooth+4 
	CLRF        ?lstr7_Bluetooth+5 
	MOVLW       ?lstr7_Bluetooth+0
	MOVWF       FARG_UART1_Write_Text_uart_text+0 
	MOVLW       hi_addr(?lstr7_Bluetooth+0)
	MOVWF       FARG_UART1_Write_Text_uart_text+1 
	CALL        _UART1_Write_Text+0, 0
;Bluetooth.c,255 :: 		UART1_Write_text("  ");
	MOVLW       32
	MOVWF       ?lstr8_Bluetooth+0 
	MOVLW       32
	MOVWF       ?lstr8_Bluetooth+1 
	CLRF        ?lstr8_Bluetooth+2 
	MOVLW       ?lstr8_Bluetooth+0
	MOVWF       FARG_UART1_Write_Text_uart_text+0 
	MOVLW       hi_addr(?lstr8_Bluetooth+0)
	MOVWF       FARG_UART1_Write_Text_uart_text+1 
	CALL        _UART1_Write_Text+0, 0
;Bluetooth.c,256 :: 		UART1_Write_text(data4);
	MOVLW       _data4+0
	MOVWF       FARG_UART1_Write_Text_uart_text+0 
	MOVLW       hi_addr(_data4+0)
	MOVWF       FARG_UART1_Write_Text_uart_text+1 
	CALL        _UART1_Write_Text+0, 0
;Bluetooth.c,257 :: 		UART1_Write(0x0D);
	MOVLW       13
	MOVWF       FARG_UART1_Write_data_+0 
	CALL        _UART1_Write+0, 0
;Bluetooth.c,258 :: 		UART1_Write(0x0A);
	MOVLW       10
	MOVWF       FARG_UART1_Write_data_+0 
	CALL        _UART1_Write+0, 0
;Bluetooth.c,262 :: 		UART1_Write_text("Data5");
	MOVLW       68
	MOVWF       ?lstr9_Bluetooth+0 
	MOVLW       97
	MOVWF       ?lstr9_Bluetooth+1 
	MOVLW       116
	MOVWF       ?lstr9_Bluetooth+2 
	MOVLW       97
	MOVWF       ?lstr9_Bluetooth+3 
	MOVLW       53
	MOVWF       ?lstr9_Bluetooth+4 
	CLRF        ?lstr9_Bluetooth+5 
	MOVLW       ?lstr9_Bluetooth+0
	MOVWF       FARG_UART1_Write_Text_uart_text+0 
	MOVLW       hi_addr(?lstr9_Bluetooth+0)
	MOVWF       FARG_UART1_Write_Text_uart_text+1 
	CALL        _UART1_Write_Text+0, 0
;Bluetooth.c,263 :: 		UART1_Write_text("  ");
	MOVLW       32
	MOVWF       ?lstr10_Bluetooth+0 
	MOVLW       32
	MOVWF       ?lstr10_Bluetooth+1 
	CLRF        ?lstr10_Bluetooth+2 
	MOVLW       ?lstr10_Bluetooth+0
	MOVWF       FARG_UART1_Write_Text_uart_text+0 
	MOVLW       hi_addr(?lstr10_Bluetooth+0)
	MOVWF       FARG_UART1_Write_Text_uart_text+1 
	CALL        _UART1_Write_Text+0, 0
;Bluetooth.c,264 :: 		UART1_Write_text(data5);
	MOVLW       _data5+0
	MOVWF       FARG_UART1_Write_Text_uart_text+0 
	MOVLW       hi_addr(_data5+0)
	MOVWF       FARG_UART1_Write_Text_uart_text+1 
	CALL        _UART1_Write_Text+0, 0
;Bluetooth.c,265 :: 		UART1_Write(0x0D);
	MOVLW       13
	MOVWF       FARG_UART1_Write_data_+0 
	CALL        _UART1_Write+0, 0
;Bluetooth.c,266 :: 		UART1_Write(0x0A);
	MOVLW       10
	MOVWF       FARG_UART1_Write_data_+0 
	CALL        _UART1_Write+0, 0
;Bluetooth.c,271 :: 		UART1_Write_text("Data6");
	MOVLW       68
	MOVWF       ?lstr11_Bluetooth+0 
	MOVLW       97
	MOVWF       ?lstr11_Bluetooth+1 
	MOVLW       116
	MOVWF       ?lstr11_Bluetooth+2 
	MOVLW       97
	MOVWF       ?lstr11_Bluetooth+3 
	MOVLW       54
	MOVWF       ?lstr11_Bluetooth+4 
	CLRF        ?lstr11_Bluetooth+5 
	MOVLW       ?lstr11_Bluetooth+0
	MOVWF       FARG_UART1_Write_Text_uart_text+0 
	MOVLW       hi_addr(?lstr11_Bluetooth+0)
	MOVWF       FARG_UART1_Write_Text_uart_text+1 
	CALL        _UART1_Write_Text+0, 0
;Bluetooth.c,272 :: 		UART1_Write_text("  ");
	MOVLW       32
	MOVWF       ?lstr12_Bluetooth+0 
	MOVLW       32
	MOVWF       ?lstr12_Bluetooth+1 
	CLRF        ?lstr12_Bluetooth+2 
	MOVLW       ?lstr12_Bluetooth+0
	MOVWF       FARG_UART1_Write_Text_uart_text+0 
	MOVLW       hi_addr(?lstr12_Bluetooth+0)
	MOVWF       FARG_UART1_Write_Text_uart_text+1 
	CALL        _UART1_Write_Text+0, 0
;Bluetooth.c,273 :: 		UART1_Write_text(data6);
	MOVLW       _data6+0
	MOVWF       FARG_UART1_Write_Text_uart_text+0 
	MOVLW       hi_addr(_data6+0)
	MOVWF       FARG_UART1_Write_Text_uart_text+1 
	CALL        _UART1_Write_Text+0, 0
;Bluetooth.c,274 :: 		UART1_Write(0x0D);
	MOVLW       13
	MOVWF       FARG_UART1_Write_data_+0 
	CALL        _UART1_Write+0, 0
;Bluetooth.c,275 :: 		UART1_Write(0x0A);
	MOVLW       10
	MOVWF       FARG_UART1_Write_data_+0 
	CALL        _UART1_Write+0, 0
;Bluetooth.c,276 :: 		UART1_Write(0x0D);
	MOVLW       13
	MOVWF       FARG_UART1_Write_data_+0 
	CALL        _UART1_Write+0, 0
;Bluetooth.c,277 :: 		UART1_Write(0x0A);
	MOVLW       10
	MOVWF       FARG_UART1_Write_data_+0 
	CALL        _UART1_Write+0, 0
;Bluetooth.c,280 :: 		Wait();
	CALL        _Wait+0, 0
;Bluetooth.c,281 :: 		X=0;
	CLRF        _x+0 
	CLRF        _x+1 
;Bluetooth.c,322 :: 		}
	GOTO        L_main4
;Bluetooth.c,323 :: 		}
L_end_main:
	GOTO        $+0
; end of _main
