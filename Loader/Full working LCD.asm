
_Move_Delay:

;Full working LCD.c,24 :: 		void Move_Delay() { // Function used for text moving
;Full working LCD.c,25 :: 		Delay_ms(30); // You can change the moving speed here
	MOVLW      117
	MOVWF      R12+0
	MOVLW      225
	MOVWF      R13+0
L_Move_Delay0:
	DECFSZ     R13+0, 1
	GOTO       L_Move_Delay0
	DECFSZ     R12+0, 1
	GOTO       L_Move_Delay0
;Full working LCD.c,26 :: 		}
L_end_Move_Delay:
	RETURN
; end of _Move_Delay

_main:

;Full working LCD.c,28 :: 		void main(){
;Full working LCD.c,30 :: 		ADCON1=6;
	MOVLW      6
	MOVWF      ADCON1+0
;Full working LCD.c,32 :: 		Lcd_Init(); // Initialize LCD
	CALL       _Lcd_Init+0
;Full working LCD.c,34 :: 		Lcd_Cmd(_LCD_CLEAR); // Clear display
	MOVLW      1
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;Full working LCD.c,35 :: 		Lcd_Cmd(_LCD_CURSOR_OFF); // Cursor off
	MOVLW      12
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;Full working LCD.c,36 :: 		Lcd_Out(1,6,txt3); // Write text in first row
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      6
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      _txt3+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;Full working LCD.c,38 :: 		Lcd_Out(2,6,txt4); // Write text in second row
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      6
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      _txt4+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;Full working LCD.c,39 :: 		Delay_ms(200);
	MOVLW      4
	MOVWF      R11+0
	MOVLW      12
	MOVWF      R12+0
	MOVLW      51
	MOVWF      R13+0
L_main1:
	DECFSZ     R13+0, 1
	GOTO       L_main1
	DECFSZ     R12+0, 1
	GOTO       L_main1
	DECFSZ     R11+0, 1
	GOTO       L_main1
	NOP
	NOP
;Full working LCD.c,40 :: 		Lcd_Cmd(_LCD_CLEAR); // Clear display
	MOVLW      1
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;Full working LCD.c,42 :: 		Lcd_Out(1,1,txt1); // Write text in first row
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      _txt1+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;Full working LCD.c,43 :: 		Lcd_Out(2,5,txt2); // Write text in second row
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      5
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      _txt2+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;Full working LCD.c,45 :: 		Delay_ms(200);
	MOVLW      4
	MOVWF      R11+0
	MOVLW      12
	MOVWF      R12+0
	MOVLW      51
	MOVWF      R13+0
L_main2:
	DECFSZ     R13+0, 1
	GOTO       L_main2
	DECFSZ     R12+0, 1
	GOTO       L_main2
	DECFSZ     R11+0, 1
	GOTO       L_main2
	NOP
	NOP
;Full working LCD.c,48 :: 		for(i=0; i<4; i++) { // Move text to the right 4 times
	CLRF       _i+0
L_main3:
	MOVLW      4
	SUBWF      _i+0, 0
	BTFSC      STATUS+0, 0
	GOTO       L_main4
;Full working LCD.c,49 :: 		Lcd_Cmd(_LCD_SHIFT_RIGHT);
	MOVLW      28
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;Full working LCD.c,50 :: 		Move_Delay();
	CALL       _Move_Delay+0
;Full working LCD.c,48 :: 		for(i=0; i<4; i++) { // Move text to the right 4 times
	INCF       _i+0, 1
;Full working LCD.c,51 :: 		}
	GOTO       L_main3
L_main4:
;Full working LCD.c,53 :: 		while(1) { // Endless loop
L_main6:
;Full working LCD.c,54 :: 		for(i=0; i<8; i++) { // Move text to the left 7 times
	CLRF       _i+0
L_main8:
	MOVLW      8
	SUBWF      _i+0, 0
	BTFSC      STATUS+0, 0
	GOTO       L_main9
;Full working LCD.c,55 :: 		Lcd_Cmd(_LCD_SHIFT_LEFT);
	MOVLW      24
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;Full working LCD.c,56 :: 		Move_Delay();
	CALL       _Move_Delay+0
;Full working LCD.c,54 :: 		for(i=0; i<8; i++) { // Move text to the left 7 times
	INCF       _i+0, 1
;Full working LCD.c,57 :: 		}
	GOTO       L_main8
L_main9:
;Full working LCD.c,59 :: 		for(i=0; i<8; i++) { // Move text to the right 7 times
	CLRF       _i+0
L_main11:
	MOVLW      8
	SUBWF      _i+0, 0
	BTFSC      STATUS+0, 0
	GOTO       L_main12
;Full working LCD.c,60 :: 		Lcd_Cmd(_LCD_SHIFT_RIGHT);
	MOVLW      28
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;Full working LCD.c,61 :: 		Move_Delay();
	CALL       _Move_Delay+0
;Full working LCD.c,59 :: 		for(i=0; i<8; i++) { // Move text to the right 7 times
	INCF       _i+0, 1
;Full working LCD.c,62 :: 		}
	GOTO       L_main11
L_main12:
;Full working LCD.c,63 :: 		}
	GOTO       L_main6
;Full working LCD.c,64 :: 		}
L_end_main:
	GOTO       $+0
; end of _main
