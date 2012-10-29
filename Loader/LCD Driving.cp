#line 1 "D:/project mikro C/Loader/LCD Driving.c"
#line 13 "D:/project mikro C/Loader/LCD Driving.c"
sbit LCD_RS at RB4_bit;
sbit LCD_EN at RB5_bit;
sbit LCD_D4 at RB0_bit;
sbit LCD_D5 at RB1_bit;
sbit LCD_D6 at RB2_bit;
sbit LCD_D7 at RB3_bit;

sbit LCD_RS_Direction at TRISB4_bit;
sbit LCD_EN_Direction at TRISB5_bit;
sbit LCD_D4_Direction at TRISB0_bit;
sbit LCD_D5_Direction at TRISB1_bit;
sbit LCD_D6_Direction at TRISB2_bit;
sbit LCD_D7_Direction at TRISB3_bit;




char *text="R";
char i;

void Delay() {
Delay_ms(25);
}

void main() {
CMCON = 0x07;
ADCON1 = 0x0F;

lcd_init();
lcd_cmd(_LCD_CLEAR);
lcd_cmd(_LCD_CURSOR_OFF);
lcd_out(1,1,text);
delay();
lcd_out(1,2,"i");
delay();
lcd_out(1,3,"c");
delay();
lcd_out(1,4,"k");
delay();
lcd_out(1,5,"y");
delay();
lcd_out(2,1,"F");
delay();
lcd_out(2,2,"a");
delay();
lcd_out(2,3,"j");
delay();
lcd_out(2,4,"a");
delay();
lcd_out(2,5,"r");
delay_ms(30);
lcd_out(2,6," ");
delay();
lcd_out(2,7,":");
delay();
lcd_out(2,8,")");
delay();

while(1){
lcd_out(2,7,";");
delay();
lcd_out(2,7,":");
delay();
}
}
