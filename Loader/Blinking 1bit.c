void main() {
intcon=0;
trisb=0;
while(1){
portb=0x80;
 delay_ms(700);
portb=0b00000000;
delay_ms(700);
}
}