#include <stdio.h>
float Legendre(int n,float x)
{
	float result;
	if(n==0)
		result=1;
	else if(n==1)
		result=x;
	else
		result=(2*n-1)*x-Legendre(n-1,x)-(n-1)*Legendre(n-2,x)/n;
	return(result);
}
int main()
{
	float result;int n;float x;
	printf("enter n,x bitte\n");
  	scanf("%d%f",&n,&x);
	result=Legendre(n,x);
	printf("%f",result);
	return 0;
}