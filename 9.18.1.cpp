#include <stdio.h>
#include <math.h>
int main()
{
	int number,n,t;
	scanf("%d",&number);//输入数字
	printf("%d=",number);//回显数字
	t=sqrt(number);//计算最大因数
	while(number>=n)
	{
		for (n=2;n<=t;n++)
		{
			if(number%n==0)//可以整除
			{
				if (number==n)//最后一次运算
				printf("%d",n);
				else//继续算法
				{
					number=number/n;
					printf("%dx",n);
					n=2;
				}	
			}
		}
	}
	return 0;
}