#include <stdio.h>
#include <math.h>
int main()
{
	int prime[201]={0},d,k,n,i;
	for(d=2;d<=sqrt(200);d++)
	{
		k=0;
		if(prime[d]==0)
		{
			for(n=2;k<=200;n++)
			{
				k=n*d;
				prime[k]=1;
			}	
		}
		
	}
	for(i=2;i<=200;i++)
	{
		if(prime[i]==0)
		printf("%d\t",i);
	}
	return 0;
}  