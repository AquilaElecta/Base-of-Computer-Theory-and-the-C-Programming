#include <stdio.h>
int sign_f(float x);
int main()
{
	float x;int y;
	scanf("%f",&x);
	y=sign_f(x);
	printf("y:%d\n",y);
	return 0;
}
int sign_f(float x)
{
	int y;
	if(x<0)
		y=-1;
	else if(x==0)
		y=0;
	else if(x>0)
		y=1;
	return y;
}
