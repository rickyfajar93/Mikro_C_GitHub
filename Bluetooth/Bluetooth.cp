#line 1 "D:/Kuliah/Test dummy/MikroC/Bluetooth/Bluetooth.c"
#line 23 "D:/Kuliah/Test dummy/MikroC/Bluetooth/Bluetooth.c"
char data1[7];
char data2[7];
char data3[7];
char data4[7];
char data5[7];
char data6[7];
unsigned int hold0,hold1,hold2,hold3,hold4,hold5;
int x;
#line 50 "D:/Kuliah/Test dummy/MikroC/Bluetooth/Bluetooth.c"
void Wait(){
 for(X=0;X<60;X++)
 {
 Delay_ms(1000);
 }
#line 117 "D:/Kuliah/Test dummy/MikroC/Bluetooth/Bluetooth.c"
}

void main(){




 UART1_Init(9600);


ADCON1 = 0b00001001;
CMCON |= 7;

 ADC_init();
#line 189 "D:/Kuliah/Test dummy/MikroC/Bluetooth/Bluetooth.c"
 while(1) {

hold0 = adc_read(0)*0.4886;
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
#line 232 "D:/Kuliah/Test dummy/MikroC/Bluetooth/Bluetooth.c"
UART1_Write_text("Data1");
UART1_Write_text("  ");
UART1_Write_text(data1);
UART1_Write(0x0D);
UART1_Write(0x0A);



UART1_Write_text("Data2");
UART1_Write_text("  ");
UART1_Write_text(data2);
UART1_Write(0x0D);
UART1_Write(0x0A);



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



UART1_Write_text("Data5");
UART1_Write_text("  ");
UART1_Write_text(data5);
UART1_Write(0x0D);
UART1_Write(0x0A);




UART1_Write_text("Data6");
UART1_Write_text("  ");
UART1_Write_text(data6);
UART1_Write(0x0D);
UART1_Write(0x0A);
UART1_Write(0x0D);
UART1_Write(0x0A);


Wait();
X=0;
#line 322 "D:/Kuliah/Test dummy/MikroC/Bluetooth/Bluetooth.c"
}
}
