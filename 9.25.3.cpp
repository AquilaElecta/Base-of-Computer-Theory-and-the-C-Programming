#include <stdio.h>
int main()
{
	int row,column;int n,p,m;int i,j,k;
	printf("enter row,column pls\n");
	scanf("%d%d",&row,&column);
	row=row+1;column=column+1;
	int a[row][column],b[row][column],c[row][column]={0};
	printf("enter n,p,m pls\n");
	scanf("%d%d%d",&n,&p,&m);
	printf("enter matrixA pls\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=p;j++)
		scanf("%d",&a[i][j]);
	}
	//for(i=1;i<=n;i++)
	//{
	//	for(j=1;j<=p;j++)
	//	printf("%d\t",a[i][j]);
	//}
	printf("\n");
	printf("enter matrixB pls\n");
	for(i=1;i<=p;i++)
	{
		for(j=1;j<=m;j++)
		scanf("%d",&b[i][j]);
	}
	printf("\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			for(k=1;k<=p;k++)
			{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}  