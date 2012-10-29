
_main:

;Blinking 1bit.c,1 :: 		void main() {
;Blinking 1bit.c,2 :: 		intcon=0;
	CLRF       INTCON+0
;Blinking 1bit.c,3 :: 		trisb=0;
	CLRF       TRISB+0
;Blinking 1bit.c,4 :: 		while(1){
L_main0:
;Blinking 1bit.c,5 :: 		portb=0x80;
	MOVLW      128
	MOVWF      PORTB+0
;Blinking 1bit.c,6 :: 		delay_ms(700);
	MOVLW      11
	MOVWF      R11+0
	MOVLW      168
	MOVWF      R12+0
	MOVLW      60
	MOVWF      R13+0
L_main2:
	DECFSZ     R13+0, 1
	GOTO       L_main2
	DECFSZ     R12+0, 1
	GOTO       L_main2
	DECFSZ     R11+0, 1
	GOTO       L_main2
	NOP
;Blinking 1bit.c,7 :: 		portb=0b00000000;
	CLRF       PORTB+0
;Blinking 1bit.c,8 :: 		delay_ms(700);
	MOVLW      11
	MOVWF      R11+0
	MOVLW      168
	MOVWF      R12+0
	MOVLW      60
	MOVWF      R13+0
L_main3:
	DECFSZ     R13+0, 1
	GOTO       L_main3
	DECFSZ     R12+0, 1
	GOTO       L_main3
	DECFSZ     R11+0, 1
	GOTO       L_main3
	NOP
;Blinking 1bit.c,9 :: 		}
	GOTO       L_main0
;Blinking 1bit.c,10 :: 		}
L_end_main:
	GOTO       $+0
; end of _main
