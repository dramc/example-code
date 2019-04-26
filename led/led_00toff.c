#include <lpc214x.h>

void delay_ms(unsigned int count)
{
  unsigned int j=0,i=0;
  for(j=0;j<count;j++)
  {    
    for(i=0;i<3000;i++);
  }
}

/* start the main program */
int main() 
{
    PINSEL0 = 0x000000;  //Configure the P1 Pins for GPIO;
    IODIR0 = 0xffffffff; //Configure the P1 pins as OUTPUT;

  while(1)
    {
			unsigned int i;
			for(i=0;i<256;i++)
			{
				IOSET0 = i;     // Make all the Port pins as high  
         delay_ms(1000);
				IOCLR0 = 0xffffffff;
	
			}

      
    }
}
