
_main:

;Bit Wise.c,3 :: 		void main() {
;Bit Wise.c,4 :: 		TRISD = 0X00;
	CLRF        TRISD+0 
;Bit Wise.c,5 :: 		PORTD = 0B00000001;
	MOVLW       1
	MOVWF       PORTD+0 
;Bit Wise.c,6 :: 		move = 0B00000001;
	MOVLW       1
	MOVWF       _move+0 
;Bit Wise.c,8 :: 		while(1){
L_main0:
;Bit Wise.c,9 :: 		PORTD=move;
	MOVF        _move+0, 0 
	MOVWF       PORTD+0 
;Bit Wise.c,10 :: 		move=move<<1;
	RLCF        _move+0, 1 
	BCF         _move+0, 0 
;Bit Wise.c,11 :: 		delay_ms(500);
	MOVLW       8
	MOVWF       R11, 0
	MOVLW       157
	MOVWF       R12, 0
	MOVLW       5
	MOVWF       R13, 0
L_main2:
	DECFSZ      R13, 1, 1
	BRA         L_main2
	DECFSZ      R12, 1, 1
	BRA         L_main2
	DECFSZ      R11, 1, 1
	BRA         L_main2
	NOP
	NOP
;Bit Wise.c,12 :: 		if(PORTD.F7==1)
	BTFSS       PORTD+0, 7 
	GOTO        L_main3
;Bit Wise.c,14 :: 		move=0x01;
	MOVLW       1
	MOVWF       _move+0 
;Bit Wise.c,15 :: 		}
L_main3:
;Bit Wise.c,16 :: 		}
	GOTO        L_main0
;Bit Wise.c,17 :: 		}
L_end_main:
	GOTO        $+0
; end of _main
