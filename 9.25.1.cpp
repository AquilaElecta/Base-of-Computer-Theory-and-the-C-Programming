#include <stdio.h>
int main()
{
	int i,j;int t;
	int score[10];
	for(i=1;i<=10;i++)
	scanf("%d",&score[i]);
	for (i=1;i<=9;i++)
		for (j=1;j<=10-i;j++)
		{
			if(score[j]>score[j+1])
			{
				t=score[j+1];
				score[j+1]=score[j];score[j]=t;
			}
			
		}
	for(i=1;i<=10;i++)
	printf("%d\t",score[i]);
	int inquiry,min=1,max=10,mid;
	printf("\n");
	scanf("%d",&inquiry);
	for(t=1;t<=4;t++)
	{
		mid=(max+min)/2;
		if (score[mid]==inquiry)
		{
			printf("%d",mid);
			goto end;
		}
		if(score[mid]<inquiry)
		min=mid;
		if(score[mid]>inquiry)
		max=mid;
	//printf("%d%d%d\t",mid,max,min);
	}
	if (score[max]==inquiry)
		{
			printf("%d",max);
			goto end;
		}
	if (score[min]==inquiry)
		{
			printf("%d",min);
			goto end;
		}
	printf("0");
	end:return 0;
}  