#include <stdio.h>
int main()
{
	float average(float array[3]);
	float score[3],aver;
	int i;
	printf("input 3 scores.\n");
	for(i=0;i<3;i++)
		scanf("%f",&score[i]);
	printf("\n");
	aver=average(score);
	printf("average score is %5.2f\n",aver);
	return 0;
}
float average(float array[])
{
	int i;
	float aver,sum=array[0];
	for (i=1;i<3;i++)
		sum=sum+array[i];
	aver=sum/3;
	return(aver);
}