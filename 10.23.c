#include<stdio.h>
float max2(float num1,float num2)
{
	float maxz;
	if(num1>num2)
	maxz=num1;
	else
	maxz=num2;
	return(maxz);	
}
float max4(float num1,float num2,float num3,float num4)
{
	float maxv;
	maxv=max2(num1,num2);
	maxv=max2(maxv,num3);
	maxv=max2(maxv,num4);
	return(maxv);	
}
int main()
{
	float a,b,c,d,e;
	scanf("%f%f%f%f",&a,&b,&c,&d);
	e=max4(a,b,c,d);
	printf("%f",e);
	return 0;
}
