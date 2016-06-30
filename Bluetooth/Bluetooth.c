/*
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
*/
// End LCD module connections

//char error, byte_read;
//unsigned short ready;
//unsigned char uart_rd;
//signed char temp;
//unsigned char X;
char data1[7];
char data2[7];
char data3[7];
char data4[7];
char data5[7];
char data6[7];
unsigned int hold0,hold1,hold2,hold3,hold4,hold5;
int x;

/*
void delay1(){
delay_ms(135);
}

void delay2(){
delay_ms(95);
}


void aku(){
      portd=0b10000000;
      delay_ms(350);
      portd=0b00000000;
      delay_ms(650);
}
*/

void Wait(){
      for(X=0;X<60;X++) //600
      {
      Delay_ms(1000);
      }
/*
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
delay_ms(1000);
*/
}

void main(){

  //TRISD = 0x00;
  //PORTD = 0b00000000;
//  CMCON| = 7;
  UART1_Init(9600);              // Initialize UART module at 9600 bps

  //TRISA = 0xFF; //PORTA as input
ADCON1 = 0b00001001; // Set AN0 channel pin as analog
CMCON |= 7; // Disable comparators
  //X=0;
  ADC_init();
  //UART1_Init(9600);
  //Lcd_Init();
  /*

  Lcd_Cmd(_LCD_CLEAR);
  Lcd_Cmd(_LCD_CURSOR_OFF);
  Lcd_Out(1,1,"W");
  delay1();
  Lcd_Out(1,2,"E");
  delay1();
  Lcd_Out(1,3,"L");
  delay1();
  Lcd_Out(1,4,"C");
  delay1();
  Lcd_Out(1,5,"O");
  delay1();
  Lcd_Out(1,6,"M");
  delay1();
  Lcd_Out(1,7,"E");
  delay1();
  delay1();
  Lcd_Out(2,1,"I");
  delay2();
  Lcd_out(2,2,"N");
  delay2();
  Lcd_Out(2,3,"I");
  delay2();
  Lcd_Out(2,4,"T");
  delay2();
  Lcd_Out(2,5,"I");
  delay2();
  Lcd_Out(2,6,"A");
  delay2();
  Lcd_Out(2,7,"L");
  delay2();
  Lcd_Out(2,8,"I");
  delay2();
  Lcd_Out(2,9,"Z");
  delay2();
  Lcd_Out(2,10,"I");
  delay2();
  Lcd_Out(2,11,"N");
  delay2();
  Lcd_Out(2,12,"G");
  delay2();
  Lcd_Out(2,13,".");
  delay2();
  Lcd_Out(2,14,".");
  delay2();
  Lcd_Out(2,15,".");
  delay2();
  delay1();
  delay1();
  delay_ms(350);
  lcd_cmd(_LCD_CLEAR);

  Lcd_Out(1,1, "Input char:");
  */
  while(1) {

hold0 = adc_read(0)*0.4886; //0.406
delay_ms(12);
hold1 = adc_read(1)*0.4886;
delay_ms(12);
hold2 = adc_read(2)*0.4886;
delay_ms(12);
hold3 = adc_read(3)*0.4886;
delay_ms(12);
hold4 = adc_read(4)*0.4886;
delay_ms(12);
hold5 = adc_read(5)*0.4886;
delay_ms(12);

intToStr(hold0, data1);
LTRIM(data1);
intToStr(hold1, data2);
LTRIM(data2);
intToStr(hold2, data3);
LTRIM(data3);
intToStr(hold3, data4);
LTRIM(data4);
intToStr(hold4, data5);
LTRIM(data5);
intToStr(hold5, data6);
LTRIM(data6);

//delay_us(10);
//LCD_Chr(1,1,5*hold/1024+48);
//LCD_Chr(1,2,46);
//LCD_Chr(1,1,(50*hold/1024)%10+48);
//LCD_Chr(1,2,(20*hold/41)%10+48); //20/41 =~ 500/1024
//LCD_Chr(1,3,0xdf);
//LCD_out(1,4,"C");
//LCD_Out(2,1,"RAW ADC =");

//Lcd_Out(2,1,txt);
//LTRIM(txt);
//RTRIM(txt);

//sprintf(txt,0.1f,hold);

UART1_Write_text("Data1");
UART1_Write_text("  ");
UART1_Write_text(data1);
UART1_Write(0x0D);
UART1_Write(0x0A);

//delay_ms(1);

UART1_Write_text("Data2");
UART1_Write_text("  ");
UART1_Write_text(data2);
UART1_Write(0x0D);
UART1_Write(0x0A);

//delay_ms(1);

UART1_Write_text("Data3");
UART1_Write_text("  ");
UART1_Write_text(data3);
UART1_Write(0x0D);
UART1_Write(0x0A);

UART1_Write_text("Data4");
UART1_Write_text("  ");
UART1_Write_text(data4);
UART1_Write(0x0D);
UART1_Write(0x0A);

//delay_ms(1);

UART1_Write_text("Data5");
UART1_Write_text("  ");
UART1_Write_text(data5);
UART1_Write(0x0D);
UART1_Write(0x0A);


//delay_ms(1);

UART1_Write_text("Data6");
UART1_Write_text("  ");
UART1_Write_text(data6);
UART1_Write(0x0D);
UART1_Write(0x0A);
UART1_Write(0x0D);
UART1_Write(0x0A);


Wait();
X=0;
//delay_ms(4000);

      /*
      if (UART1_Data_Ready() == 1) {
      uart_rd = UART1_Read();
      //UART1_Write(uart_rd);


      temp = uart_rd;

      switch (temp)
          {
          case 'a':portd=0b00000010;
      delay_ms(450);
      portd=0b00000000;
          break;

          case 's':portd=0b00000100;
      delay_ms(450);
      portd=0b00000000;
          break;

          case 'd':portd=0b00001000;
      delay_ms(450);
      portd=0b00000000;
          break;

          case 'f':portd=0b00010000;
      delay_ms(450);
      portd=0b00000000;
          break;

          case 'k':for (X=0;X<=5;X++)
          aku();
          break;
          }


}
*/
}
}