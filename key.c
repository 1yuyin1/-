#include <REGX52.H>
#include "Delay.h"

unsigned char mkey()
{   
	unsigned char KeyNumber=0;
  P3_0=1;
	P3_1=1;
	P3_2=1;
	P3_3=1;
 
	if(P3_0==0){Delay(20);while(P1_7==0);Delay(20);KeyNumber=1;}
	if(P3_1==0){Delay(20);while(P1_6==0);Delay(20);KeyNumber=2;}
	if(P3_2==0){Delay(20);while(P1_5==0);Delay(20);KeyNumber=3;}
	if(P3_3==0){Delay(20);while(P1_4==0);Delay(20);KeyNumber=4;}
		
	return KeyNumber;
}

  