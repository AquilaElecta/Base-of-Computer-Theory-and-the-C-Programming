#include <stdio.h>
int main()
{
	float grade;char rank;int truth=0;
	scanf("%f",&grade);
	if(grade<=100 && grade>=90)
	rank='A';truth=truth+1;
	if(grade<=89 && grade>=81)
	rank='B';truth=truth+1;
	if(grade<=79 && grade>=70)
	rank='C';truth=truth+1;
	if(grade<=69 && grade>=60)
	rank='D';truth=truth+1;
	if(grade<60)
	rank='E';truth=truth+1;
	if(truth=1)
	printf("%c",rank);
	else
	printf("ILLEGAL!RETYPE!");
	return 0;
}