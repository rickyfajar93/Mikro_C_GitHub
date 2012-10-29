#line 1 "D:/project mikro C/Loader/LED.c"
void main() {
 intcon=0;
 trisb=0;
 while(1){
 portb=0b10000000;
 delay_ms(1000);
 portb=0b01000000;
 delay_ms(1000);
 portb=0b00100000;
 delay_ms(1000);
 portb=0b00010000;
 delay_ms(1000);
 portb=0b00001000;
 delay_ms(1000);
 portb=0b00000100;
 delay_ms(1000);
 portb=0b00000010;
 delay_ms(1000);
 portb=0b00000001;
 delay_ms(1000);
}
}
