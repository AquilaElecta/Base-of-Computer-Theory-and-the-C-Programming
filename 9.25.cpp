#include <stdio.h>
int main()
{
	int i,j;
	float a[10];float t;
	for (i=1;i<=10;i++)
	scanf("%f",&a[i]);
	for(j=0;j<=8;j++)
	{
		for(i=1,i<=9-j;i++)
		{
			if(a[i]>a[i+1])
			{
				t=a[i+1];
				a[i+1]=a[i];
				a[i]=t;
			}
		}
	}
	for (i=1;i<=10;i++)
	printf("a[i]=%f",a[i]);
	return 0;
}