#include <LPC21xx.H>
void wait()
{
int i;
for(i=0;i<300;i++);
}
int main()
{
int a[35],j,m,k,i;
	PINSEL0=0x00000000;
	PINSEL1=0x00000000;	
	IODIR0=0xffffffff;
	a[0]=(1<<0)|(1<<1)|(1<<2);//|(0<<6)|(1<<7)|(1<<8)|(1<<9)|(1<<10)|(1<<11)|(1<<12);
	a[1]=(1<<0)|(1<<3);//|(1<<6)|(0<<7)|(1<<8)|(1<<9)|(1<<10)|(1<<11)|(1<<12);
	a[2]=(1<<0)|(1<<3);//|(1<<6)|(1<<7)|(0<<8)|(1<<9)|(1<<10)|(1<<11)|(1<<12);
	a[3]=(1<<0)|(1<<3);//|(1<<6)|(1<<7)|(1<<8)|(0<<9)|(1<<10)|(1<<11)|(1<<12);
	a[4]=(1<<0)|(1<<1)|(1<<2);//|(1<<6)|(1<<7)|(1<<8)|(1<<9)|(0<<10)|(1<<11)|(1<<12);
	a[5]=(1<<0)|(1<<2);//|(1<<6)|(1<<7)|(1<<8)|(1<<9)|(1<<10)|(0<<11)|(1<<12);
	a[6]=(1<<0)|(1<<3)|(1<<4);//|(1<<6)|(1<<7)|(1<<8)|(1<<9)|(1<<10)|(1<<11)|(0<<12);

	a[7]=(1<<1)|(1<<2)|(1<<3);//|(0<<6)|(1<<7)|(1<<8)|(1<<9)|(1<<10)|(1<<11)|(1<<12);
	a[8]=(1<<1)|(1<<4);//|(1<<6)|(1<<7)|(0<<8)|(1<<9)|(1<<10)|(1<<11)|(1<<12);
	a[9]=(1<<1)|(1<<4);//|(1<<6)|(1<<7)|(1<<8)|(0<<9)|(1<<10)|(1<<11)|(1<<12);
	a[10]=(1<<1)|(1<<4);//|(1<<6)|(1<<7)|(1<<8)|(0<<9)|(1<<10)|(1<<11)|(1<<12);
	a[11]=(1<<1)|(1<<2)|(1<<3);//|(1<<6)|(1<<7)|(1<<8)|(1<<9)|(0<<10)|(1<<11)|(1<<12);
	a[12]=(1<<1)|(1<<3);//|(1<<6)|(1<<7)|(1<<8)|(1<<9)|(1<<10)|(0<<11)|(1<<12);
	a[13]=(1<<1)|(1<<4);//|(1<<5)|(1<<6)|(1<<7)|(1<<8)|(1<<9)|(1<<10)|(1<<11)|(0<<12);

	a[14]=(1<<2)|(1<<3)|(1<<4);//|(0<<6)|(1<<7)|(1<<8)|(1<<9)|(1<<10)|(1<<11)|(1<<12);
	a[15]=(1<<2);//|(1<<5)|(1<<6)|(0<<7)|(1<<8)|(1<<9)|(1<<10)|(1<<11)|(1<<12);
	a[16]=(1<<2);//|(1<<5)|(1<<6)|(1<<7)|(0<<8)|(1<<9)|(1<<10)|(1<<11)|(1<<12);
	a[17]=(1<<2);//|(1<<5)|(1<<6)|(1<<7)|(1<<8)|(0<<9)|(1<<10)|(1<<11)|(1<<12);
	a[18]=(1<<2)|(1<<3)|(1<<4);//|(1<<6)|(1<<7)|(1<<8)|(1<<9)|(0<<10)|(1<<11)|(1<<12);
	a[19]=(1<<2)|(1<<4);//|(1<<6)|(1<<7)|(1<<8)|(1<<9)|(1<<10)|(0<<11)|(1<<12);
	a[20]=(1<<2);//|(1<<5)|(1<<13)|(1<<6)|(1<<7)|(1<<8)|(1<<9)|(1<<10)|(1<<11)|(0<<12);

	a[21]=(1<<3)|(1<<4);//|(1<<5)|(0<<6)|(1<<7)|(1<<8)|(1<<9)|(1<<10)|(1<<11)|(1<<12);
	a[22]=(1<<3);//|(1<<13)|(1<<6)|(1<<7)|(0<<8)|(1<<9)|(1<<10)|(1<<11)|(1<<12);
	a[23]=(1<<3);//|(1<<13)|(1<<6)|(1<<7)|(1<<8)|(0<<9)|(1<<10)|(1<<11)|(1<<12);
	a[24]=(1<<3);//|(1<<13)|(1<<6)|(1<<7)|(1<<8)|(0<<9)|(1<<10)|(1<<11)|(1<<12);
	a[25]=(1<<3)|(1<<4);//|(1<<5)|(1<<6)|(1<<7)|(1<<8)|(1<<9)|(0<<10)|(1<<11)|(1<<12);
	a[26]=(1<<3);//|(1<<5)|(1<<6)|(1<<7)|(1<<8)|(1<<9)|(1<<10)|(0<<11)|(1<<12);
	a[27]=(1<<3);//|(1<<13)|(1<<14)|(1<<6)|(1<<7)|(1<<8)|(1<<9)|(1<<10)|(1<<11)|(0<<12);

	a[28]=(1<<4);//|(1<<5)|(1<<22)|(0<<6)|(1<<7)|(1<<8)|(1<<9)|(1<<10)|(1<<11)|(1<<12);
	a[29]=(1<<4);//|(1<<13)|(1<<6)|(0<<7)|(1<<8)|(1<<9)|(1<<10)|(1<<11)|(1<<12);
	a[30]=(1<<4);//|(1<<13)|(1<<6)|(1<<7)|(0<<8)|(1<<9)|(1<<10)|(1<<11)|(1<<12);
	a[31]=(1<<4);//|(1<<13)|(1<<6)|(1<<7)|(1<<8)|(0<<9)|(1<<10)|(1<<11)|(1<<12);
	a[32]=(1<<4);//|(1<<5)|(1<<22)|(1<<6)|(1<<7)|(1<<8)|(1<<9)|(0<<10)|(1<<11)|(1<<12);
	a[33]=(1<<4);//|(1<<22)|(1<<6)|(1<<7)|(1<<8)|(1<<9)|(1<<10)|(0<<11)|(1<<12);
	a[34]=(1<<4);//|(1<<13)|(1<<14)|(1<<6)|(1<<7)|(1<<8)|(1<<9)|(1<<10)|(1<<11)|(0<<12);

  /*  a[7]=(1<<0)|(1<<1)|(1<<2)|(0<<6)|(1<<7)|(1<<8)|(1<<9)|(1<<10)|(1<<11)|(1<<12);
	a[8]=(1<<0)|(1<<3)|(1<<6)|(1<<7)|(0<<8)|(1<<9)|(1<<10)|(1<<11)|(1<<12);
	a[9]=(1<<0)|(1<<3)|(1<<6)|(1<<7)|(1<<8)|(0<<9)|(1<<10)|(1<<11)|(1<<12);
	a[10]=(1<<0)|(1<<1)|(1<<2)|(1<<6)|(1<<7)|(1<<8)|(1<<9)|(0<<10)|(1<<11)|(1<<12);
	a[11]=(1<<0)|(1<<2)|(1<<6)|(1<<7)|(1<<8)|(1<<9)|(1<<10)|(0<<11)|(1<<12);
	a[12]=(1<<0)|(1<<3)|(1<<4)|(1<<6)|(1<<7)|(1<<8)|(1<<9)|(1<<10)|(1<<11)|(0<<12);

	a[0]=(1<<0)|(1<<1)|(1<<2)|(0<<6)|(1<<7)|(1<<8)|(1<<9)|(1<<10)|(1<<11)|(1<<12);
	a[1]=(1<<0)|(1<<3)|(1<<6)|(0<<7)|(1<<8)|(1<<9)|(1<<10)|(1<<11)|(1<<12);
	a[2]=(1<<0)|(1<<3)|(1<<6)|(1<<7)|(0<<8)|(1<<9)|(1<<10)|(1<<11)|(1<<12);
	a[3]=(1<<0)|(1<<3)|(1<<6)|(1<<7)|(1<<8)|(0<<9)|(1<<10)|(1<<11)|(1<<12);
	a[4]=(1<<0)|(1<<1)|(1<<2)|(1<<6)|(1<<7)|(1<<8)|(1<<9)|(0<<10)|(1<<11)|(1<<12);
	a[5]=(1<<0)|(1<<2)|(1<<6)|(1<<7)|(1<<8)|(1<<9)|(1<<10)|(0<<11)|(1<<12);
	a[6]=(1<<0)|(1<<3)|(1<<4)|(1<<6)|(1<<7)|(1<<8)|(1<<9)|(1<<10)|(1<<11)|(0<<12);

   */
	while(1)
  {
/*	for(i=0;i<7;i++)
	{
	   IOSET0=a[i];
	   wait();
	   IOCLR0=a[i];
	} */
	for(j=0;j<5;j++)
	{
	for(k=0;k<15;k++)
	                   {
	IOSET0&=~(1<<15);
       IOSET0=1<<14;
	   IOSET0=a[7*j+6];
	   wait();
	   IOCLR0=a[7*j+6];
	   IOCLR0=1<<14; 
	   IOCLR0&=~(1<<15);
	for(i=0;i<6;i++)
	   {
	     IOSET0=(1<<15);
	      IOSET0=1<<14;
		  IOSET0=a[7*j+i];
	      wait();
		  IOCLR0=a[7*j+i];
           IOCLR0=1<<14;
	      IOCLR0=1<<15;
        	wait();
	   }
	                      }
	}
     }
   }