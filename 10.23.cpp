#include<stdio.h>
float max(float num1,float num2)
{
	float max;
	if(num1>num2)
	max=num1;
	else
	max=num2;
	return(max);	
}
int main()
{
	float a=1,b=2.6,c;
	c=max(a,b);
	printf("%f",c);
}
