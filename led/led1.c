#include<lpc214x.h>
#define led 0x00000001
void delay(unsigned int d)
{
unsigned int i;
for(;d>0;d--)
for(i=12000;i>0;i--);
}
int main()
{
PINSEL0=0x00000000;
IODIR0=led;
while(1)
{
IOSET0=led;
delay(200);
IOCLR0=led;
delay(200);
}
}
