#include <stdio.h>
int main()
{
	float x;
	scanf("%f",&x);
	if(x<1000 && x>0)
	printf("x=%5.2f\n",x);
	else
	printf("ILLEGAL!RETYPE!");
	return 0;
}