#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	float a1,a2,b1,b2;
	float sum=0;
	a1=2;a2=3;b1=1;b2=2;
	for(n=1;n<=10;n++)//进行十次运算，每次运算两组数字
	{
		sum=sum+a1/b1+a2/b2;
		a1=a1+a2;//将左侧数字替换为两数和
		a2=a2+a1;//将右侧数字替换为两数和
		b1=b1+b2;
		b2=b2+b1;
	}
	printf("%f",sum);
	return 0;
}