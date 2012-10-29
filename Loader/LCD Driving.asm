
_Delay:

;LCD Driving.c,33 :: 		void Delay() {
;LCD Driving.c,34 :: 		Delay_ms(25);
	MOVLW      98
	MOVWF      R12+0
	MOVLW      101
	MOVWF      R13+0
L_Delay0:
	DECFSZ     R13+0, 1
	GOTO       L_Delay0
	DECFSZ     R12+0, 1
	GOTO       L_Delay0
	NOP
	NOP
;LCD Driving.c,35 :: 		}
L_end_Delay:
	RETURN
; end of _Delay

_main:

;LCD Driving.c,37 :: 		void main() {
;LCD Driving.c,38 :: 		CMCON = 0x07; // Disable comparators
	MOVLW      7
	MOVWF      CMCON+0
;LCD Driving.c,39 :: 		ADCON1 = 0x0F; // Disable Analog functions
	MOVLW      15
	MOVWF      ADCON1+0
;LCD Driving.c,41 :: 		lcd_init();
	CALL       _Lcd_Init+0
;LCD Driving.c,42 :: 		lcd_cmd(_LCD_CLEAR);
	MOVLW      1
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;LCD Driving.c,43 :: 		lcd_cmd(_LCD_CURSOR_OFF);
	MOVLW      12
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;LCD Driving.c,44 :: 		lcd_out(1,1,text);
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVF       _text+0, 0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;LCD Driving.c,45 :: 		delay();
	CALL       _Delay+0
;LCD Driving.c,46 :: 		lcd_out(1,2,"i");
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      2
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr2_LCD_32Driving+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;LCD Driving.c,47 :: 		delay();
	CALL       _Delay+0
;LCD Driving.c,48 :: 		lcd_out(1,3,"c");
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      3
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr3_LCD_32Driving+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;LCD Driving.c,49 :: 		delay();
	CALL       _Delay+0
;LCD Driving.c,50 :: 		lcd_out(1,4,"k");
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      4
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr4_LCD_32Driving+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;LCD Driving.c,51 :: 		delay();
	CALL       _Delay+0
;LCD Driving.c,52 :: 		lcd_out(1,5,"y");
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      5
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr5_LCD_32Driving+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;LCD Driving.c,53 :: 		delay();
	CALL       _Delay+0
;LCD Driving.c,54 :: 		lcd_out(2,1,"F");
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr6_LCD_32Driving+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;LCD Driving.c,55 :: 		delay();
	CALL       _Delay+0
;LCD Driving.c,56 :: 		lcd_out(2,2,"a");
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      2
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr7_LCD_32Driving+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;LCD Driving.c,57 :: 		delay();
	CALL       _Delay+0
;LCD Driving.c,58 :: 		lcd_out(2,3,"j");
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      3
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr8_LCD_32Driving+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;LCD Driving.c,59 :: 		delay();
	CALL       _Delay+0
;LCD Driving.c,60 :: 		lcd_out(2,4,"a");
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      4
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr9_LCD_32Driving+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;LCD Driving.c,61 :: 		delay();
	CALL       _Delay+0
;LCD Driving.c,62 :: 		lcd_out(2,5,"r");
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      5
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr10_LCD_32Driving+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;LCD Driving.c,63 :: 		delay_ms(30);
	MOVLW      117
	MOVWF      R12+0
	MOVLW      225
	MOVWF      R13+0
L_main1:
	DECFSZ     R13+0, 1
	GOTO       L_main1
	DECFSZ     R12+0, 1
	GOTO       L_main1
;LCD Driving.c,64 :: 		lcd_out(2,6," ");
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      6
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr11_LCD_32Driving+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;LCD Driving.c,65 :: 		delay();
	CALL       _Delay+0
;LCD Driving.c,66 :: 		lcd_out(2,7,":");
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      7
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr12_LCD_32Driving+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;LCD Driving.c,67 :: 		delay();
	CALL       _Delay+0
;LCD Driving.c,68 :: 		lcd_out(2,8,")");
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      8
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr13_LCD_32Driving+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;LCD Driving.c,69 :: 		delay();
	CALL       _Delay+0
;LCD Driving.c,71 :: 		while(1){
L_main2:
;LCD Driving.c,72 :: 		lcd_out(2,7,";");
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      7
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr14_LCD_32Driving+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;LCD Driving.c,73 :: 		delay();
	CALL       _Delay+0
;LCD Driving.c,74 :: 		lcd_out(2,7,":");
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      7
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr15_LCD_32Driving+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;LCD Driving.c,75 :: 		delay();
	CALL       _Delay+0
;LCD Driving.c,76 :: 		}
	GOTO       L_main2
;LCD Driving.c,77 :: 		}
L_end_main:
	GOTO       $+0
; end of _main
