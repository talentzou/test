#include<stdio.h>
#include<math.h>
float xf(float x)
{
return	x*x+3*x-4;
}
float dx(float x)
{
	return 2*x+3;
}
void main()
{
	float x1=0,x2=0;
	do
	{
		x1=x2;
	x2=x1-xf(x1)/dx(x1);
	}while(fabs(xf(x2)<0.00001)||(fabs(x2-x1)<0.00001))
		;
	printf("x=%8.5f",x2);
	}



