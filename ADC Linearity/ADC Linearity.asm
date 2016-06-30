
_main:

;ADC Linearity.c,16 :: 		void main() {
;ADC Linearity.c,21 :: 		Lcd_Init();
	CALL        _Lcd_Init+0, 0
;ADC Linearity.c,23 :: 		TRISD = 0x00; //PORTB as output
	CLRF        TRISD+0 
;ADC Linearity.c,24 :: 		TRISA = 0xFF; //PORTA as input
	MOVLW       255
	MOVWF       TRISA+0 
;ADC Linearity.c,25 :: 		ADCON1 = 0x0E; // Set AN0 channel pin as analog
	MOVLW       14
	MOVWF       ADCON1+0 
;ADC Linearity.c,26 :: 		CMCON |= 7; // Disable comparators
	MOVLW       7
	IORWF       CMCON+0, 1 
;ADC Linearity.c,31 :: 		ADC_Init();
	CALL        _ADC_Init+0, 0
;ADC Linearity.c,32 :: 		Lcd_Cmd(_LCD_CLEAR);
	MOVLW       1
	MOVWF       FARG_Lcd_Cmd_out_char+0 
	CALL        _Lcd_Cmd+0, 0
;ADC Linearity.c,33 :: 		Lcd_Cmd(_LCD_CURSOR_OFF);
	MOVLW       12
	MOVWF       FARG_Lcd_Cmd_out_char+0 
	CALL        _Lcd_Cmd+0, 0
;ADC Linearity.c,36 :: 		while (1){
L_main0:
;ADC Linearity.c,40 :: 		hold = ADC_READ(0);
	CLRF        FARG_ADC_Read_channel+0 
	CALL        _ADC_Read+0, 0
	MOVF        R0, 0 
	MOVWF       main_hold_L0+0 
	MOVF        R1, 0 
	MOVWF       main_hold_L0+1 
;ADC Linearity.c,42 :: 		LCD_Chr(1,1,5*hold/1024+48);
	MOVLW       1
	MOVWF       FARG_Lcd_Chr_row+0 
	MOVLW       1
	MOVWF       FARG_Lcd_Chr_column+0 
	MOVLW       5
	MOVWF       R4 
	MOVLW       0
	MOVWF       R5 
	CALL        _Mul_16x16_U+0, 0
	MOVLW       10
	MOVWF       R4 
	MOVF        R0, 0 
	MOVWF       R2 
	MOVF        R1, 0 
	MOVWF       R3 
	MOVF        R4, 0 
L__main4:
	BZ          L__main5
	RRCF        R3, 1 
	RRCF        R2, 1 
	BCF         R3, 7 
	ADDLW       255
	GOTO        L__main4
L__main5:
	MOVLW       48
	ADDWF       R2, 0 
	MOVWF       FARG_Lcd_Chr_out_char+0 
	CALL        _Lcd_Chr+0, 0
;ADC Linearity.c,43 :: 		LCD_Chr(1,2,46);
	MOVLW       1
	MOVWF       FARG_Lcd_Chr_row+0 
	MOVLW       2
	MOVWF       FARG_Lcd_Chr_column+0 
	MOVLW       46
	MOVWF       FARG_Lcd_Chr_out_char+0 
	CALL        _Lcd_Chr+0, 0
;ADC Linearity.c,44 :: 		LCD_Chr(1,3,(50*hold/1024)%10+48);
	MOVLW       1
	MOVWF       FARG_Lcd_Chr_row+0 
	MOVLW       3
	MOVWF       FARG_Lcd_Chr_column+0 
	MOVLW       50
	MOVWF       R0 
	MOVLW       0
	MOVWF       R1 
	MOVF        main_hold_L0+0, 0 
	MOVWF       R4 
	MOVF        main_hold_L0+1, 0 
	MOVWF       R5 
	CALL        _Mul_16x16_U+0, 0
	MOVLW       10
	MOVWF       R4 
	MOVF        R0, 0 
	MOVWF       R2 
	MOVF        R1, 0 
	MOVWF       R3 
	MOVF        R4, 0 
L__main6:
	BZ          L__main7
	RRCF        R3, 1 
	RRCF        R2, 1 
	BCF         R3, 7 
	ADDLW       255
	GOTO        L__main6
L__main7:
	MOVF        R2, 0 
	MOVWF       R0 
	MOVF        R3, 0 
	MOVWF       R1 
	MOVLW       10
	MOVWF       R4 
	MOVLW       0
	MOVWF       R5 
	CALL        _Div_16x16_U+0, 0
	MOVF        R8, 0 
	MOVWF       R0 
	MOVF        R9, 0 
	MOVWF       R1 
	MOVLW       48
	ADDWF       R0, 0 
	MOVWF       FARG_Lcd_Chr_out_char+0 
	CALL        _Lcd_Chr+0, 0
;ADC Linearity.c,45 :: 		LCD_Chr(1,4,(20*hold/41)%10+48); //20/41 =~ 500/1024
	MOVLW       1
	MOVWF       FARG_Lcd_Chr_row+0 
	MOVLW       4
	MOVWF       FARG_Lcd_Chr_column+0 
	MOVLW       20
	MOVWF       R0 
	MOVLW       0
	MOVWF       R1 
	MOVF        main_hold_L0+0, 0 
	MOVWF       R4 
	MOVF        main_hold_L0+1, 0 
	MOVWF       R5 
	CALL        _Mul_16x16_U+0, 0
	MOVLW       41
	MOVWF       R4 
	MOVLW       0
	MOVWF       R5 
	CALL        _Div_16x16_U+0, 0
	MOVLW       10
	MOVWF       R4 
	MOVLW       0
	MOVWF       R5 
	CALL        _Div_16x16_U+0, 0
	MOVF        R8, 0 
	MOVWF       R0 
	MOVF        R9, 0 
	MOVWF       R1 
	MOVLW       48
	ADDWF       R0, 0 
	MOVWF       FARG_Lcd_Chr_out_char+0 
	CALL        _Lcd_Chr+0, 0
;ADC Linearity.c,46 :: 		LCD_Chr(1,5,86);
	MOVLW       1
	MOVWF       FARG_Lcd_Chr_row+0 
	MOVLW       5
	MOVWF       FARG_Lcd_Chr_column+0 
	MOVLW       86
	MOVWF       FARG_Lcd_Chr_out_char+0 
	CALL        _Lcd_Chr+0, 0
;ADC Linearity.c,47 :: 		inttostr(hold,txt);
	MOVF        main_hold_L0+0, 0 
	MOVWF       FARG_IntToStr_input+0 
	MOVF        main_hold_L0+1, 0 
	MOVWF       FARG_IntToStr_input+1 
	MOVLW       main_txt_L0+0
	MOVWF       FARG_IntToStr_output+0 
	MOVLW       hi_addr(main_txt_L0+0)
	MOVWF       FARG_IntToStr_output+1 
	CALL        _IntToStr+0, 0
;ADC Linearity.c,48 :: 		LCD_OUT(2,0,TXT);
	MOVLW       2
	MOVWF       FARG_Lcd_Out_row+0 
	CLRF        FARG_Lcd_Out_column+0 
	MOVLW       main_txt_L0+0
	MOVWF       FARG_Lcd_Out_text+0 
	MOVLW       hi_addr(main_txt_L0+0)
	MOVWF       FARG_Lcd_Out_text+1 
	CALL        _Lcd_Out+0, 0
;ADC Linearity.c,53 :: 		delay_ms(180);
	MOVLW       11
	MOVWF       R11, 0
	MOVLW       246
	MOVWF       R12, 0
	MOVLW       40
	MOVWF       R13, 0
L_main2:
	DECFSZ      R13, 1, 1
	BRA         L_main2
	DECFSZ      R12, 1, 1
	BRA         L_main2
	DECFSZ      R11, 1, 1
	BRA         L_main2
	NOP
;ADC Linearity.c,55 :: 		}
	GOTO        L_main0
;ADC Linearity.c,56 :: 		}
L_end_main:
	GOTO        $+0
; end of _main
