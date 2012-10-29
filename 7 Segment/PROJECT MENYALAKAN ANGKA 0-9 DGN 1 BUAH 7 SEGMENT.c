unsigned short i;
unsigned short mask(unsigned short num){

switch (num)
{
case0:return 0xc0;
case1:return 0xf9;
case2:return 0xa4;
case3:return 0xb0;
case4:return 0x99;
case5:return 0x92;
case6:return 0x82;
case7:return 0xf8;
case8:return 0x80;
case9:return 0x90;
}//case end
}

void main() {
 intcon=0;
 porta=0;
 trisa=0;
 portd =0;
 trisd=0;
 do{
  portd=mask(1);
  delay_ms(10);





 }while(1);
 }