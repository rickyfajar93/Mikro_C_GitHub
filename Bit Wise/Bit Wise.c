unsigned char move;

void main() {
TRISD = 0X00;
PORTD = 0B00000001;
move = 0B00000001;

while(1){
PORTD=move;
move=move<<1;
delay_ms(500);
if(PORTD.F7==1)
{
move=0x01;
}
}
}