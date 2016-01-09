#include"lcd.h"
int i;

void start(unsigned char x)
{
I2CONSET=x;				//10 0000 START
while((I2CONSET&0X08)==0X00);
}

void idata(unsigned char x)
{
I2DAT=x;	   			//	   SLAVE ADD & data.
I2CONCLR=0X08;
while((I2CONSET&0X08)==0X00);
}

void stop(unsigned char x)
{
I2CONSET=x;			  	//STOP
I2CONCLR=0X08;
for(i=0;i<210;i++);
//I2CONCLR=0X08;

}

void main()
{
char j[4],b,k[]={"bhut"};
//IODIR0&=0XFFFFFFF3;
IODIR1=0xffffffff;
PINSEL0=0X50;			 //PIN SET
I2CONSET=0x44;			//0100 0100
I2SCLH=13;						  //SCL Duty Cycle Register Low Half Word
I2SCLL=12;
lcd_ini();							//SCL Duty Cycle Register Low Half Word
//I2ADR=0X04;
/***************BYTE WRITE**********/
while(1)
{
//lcd_cmd(0x01);
//_delay_ms(100);			   
start(0x20);							  //start bit
idata(0x03);								 //SLAVE ADD.


for(b=0;b<4;b++)
{
I2CONCLR=0X08;
while((I2CONSET&0X08)==0X00);					  //DATA POLLING
j[b]=I2DAT;								  //data .
}

I2CONCLR=0X08;
while((I2CONSET&0X08)==0X00);					  //DATA POLLING
j[4]=I2DAT;


I2CONCLR=0x04;

I2CONSET=0x10;			  	//STOP
I2CONCLR=0X08;
for(i=0;i<210;i++);
I2CONCLR=0X08;


for(b=0;b<5;b++)
{
lcd_data(j[b]);
}
   
start(0x20);							  //start bit
idata(0x02);								 //SLAVE ADD.


for(b=0;b<6;b++)
{
idata(k[b]);								  //data .
}


stop(0x10);
 
//while(1);
}
}