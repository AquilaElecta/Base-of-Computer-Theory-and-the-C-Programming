#include <stdio.h>
int main()
{
	int grade;char rank;int truth=0;int gradehead;
	scanf("%d",&grade);
	gradehead=grade-(grade%10);
	//printf("%d",gradehead);
	switch(gradehead)
	{
		case 100:
		case 90:rank='A';truth=truth+1;break;
		case 80:rank='B';truth=truth+1;break;
		case 70:rank='C';truth=truth+1;break;
		case 60:rank='D';truth=truth+1;break;
		case 50:
		case 40:
		case 30:
		case 20:
		case 10:
		case 0:rank='E';truth=truth+1;break;
	}
	if(truth=1)
	printf("%c",rank);
	else
	printf("ILLEGAL!RETYPE!");
	return 0;
}