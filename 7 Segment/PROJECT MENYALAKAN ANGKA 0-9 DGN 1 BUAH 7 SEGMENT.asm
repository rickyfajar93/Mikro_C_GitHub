
_mask:

;PROJECT MENYALAKAN ANGKA 0-9 DGN 1 BUAH 7 SEGMENT.c,2 :: 		unsigned short mask(unsigned short num){
;PROJECT MENYALAKAN ANGKA 0-9 DGN 1 BUAH 7 SEGMENT.c,16 :: 		}//case end
L_mask0:
;PROJECT MENYALAKAN ANGKA 0-9 DGN 1 BUAH 7 SEGMENT.c,17 :: 		}
L_end_mask:
	RETURN
; end of _mask

_main:

;PROJECT MENYALAKAN ANGKA 0-9 DGN 1 BUAH 7 SEGMENT.c,19 :: 		void main() {
;PROJECT MENYALAKAN ANGKA 0-9 DGN 1 BUAH 7 SEGMENT.c,20 :: 		intcon=0;
	CLRF       INTCON+0
;PROJECT MENYALAKAN ANGKA 0-9 DGN 1 BUAH 7 SEGMENT.c,21 :: 		porta=0;
	CLRF       PORTA+0
;PROJECT MENYALAKAN ANGKA 0-9 DGN 1 BUAH 7 SEGMENT.c,22 :: 		trisa=0;
	CLRF       TRISA+0
;PROJECT MENYALAKAN ANGKA 0-9 DGN 1 BUAH 7 SEGMENT.c,23 :: 		portd =0;
	CLRF       PORTD+0
;PROJECT MENYALAKAN ANGKA 0-9 DGN 1 BUAH 7 SEGMENT.c,24 :: 		trisd=0;
	CLRF       TRISD+0
;PROJECT MENYALAKAN ANGKA 0-9 DGN 1 BUAH 7 SEGMENT.c,25 :: 		do{
L_main2:
;PROJECT MENYALAKAN ANGKA 0-9 DGN 1 BUAH 7 SEGMENT.c,26 :: 		portd=mask(1);
	MOVLW      1
	MOVWF      FARG_mask_num+0
	CALL       _mask+0
	MOVF       R0+0, 0
	MOVWF      PORTD+0
;PROJECT MENYALAKAN ANGKA 0-9 DGN 1 BUAH 7 SEGMENT.c,27 :: 		delay_ms(10);
	MOVLW      26
	MOVWF      R12+0
	MOVLW      248
	MOVWF      R13+0
L_main5:
	DECFSZ     R13+0, 1
	GOTO       L_main5
	DECFSZ     R12+0, 1
	GOTO       L_main5
	NOP
;PROJECT MENYALAKAN ANGKA 0-9 DGN 1 BUAH 7 SEGMENT.c,33 :: 		}while(1);
	GOTO       L_main2
;PROJECT MENYALAKAN ANGKA 0-9 DGN 1 BUAH 7 SEGMENT.c,34 :: 		}
L_end_main:
	GOTO       $+0
; end of _main