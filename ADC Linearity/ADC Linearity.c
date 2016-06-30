sbit LCD_RS at LATB2_bit;
sbit LCD_EN at LATB3_bit;
sbit LCD_D4 at LATB4_bit;
sbit LCD_D5 at LATB5_bit;
sbit LCD_D6 at LATB6_bit;
sbit LCD_D7 at LATB7_bit;

sbit LCD_RS_Direction at TRISB2_bit;
sbit LCD_EN_Direction at TRISB3_bit;
sbit LCD_D4_Direction at TRISB4_bit;
sbit LCD_D5_Direction at TRISB5_bit;
sbit LCD_D6_Direction at TRISB6_bit;
sbit LCD_D7_Direction at TRISB7_bit;


void main() {
unsigned int hold;

char txt[7];

Lcd_Init();

TRISD = 0x00; //PORTB as output
TRISA = 0xFF; //PORTA as input
ADCON1 = 0x0E; // Set AN0 channel pin as analog
CMCON |= 7; // Disable comparators
//ADCON0 = 0b00000000;
//ADCON1 = 0b00001110;
//ADCON2 = 0b00001000;
//ADCON0.ADON = 0x01;
ADC_Init();
Lcd_Cmd(_LCD_CLEAR);
Lcd_Cmd(_LCD_CURSOR_OFF);


while (1){
//ADCON0.GO_DONE=1;
//while(ADCON0.GO_DONE!=0);
//hold = ((unsigned int)ADRESH)<<8|(ADRESL);
hold = ADC_READ(0);

LCD_Chr(1,1,5*hold/1024+48);
LCD_Chr(1,2,46);
LCD_Chr(1,3,(50*hold/1024)%10+48);
LCD_Chr(1,4,(20*hold/41)%10+48); //20/41 =~ 500/1024
LCD_Chr(1,5,86);
inttostr(hold,txt);
LCD_OUT(2,0,TXT);
//IntToStr(hold, txt);

//Lcd_Out(1,1,txt);

delay_ms(180);

}
}