#include <stdio.h>
int borad[3][3]={0,0,0,0,0,0,0,0,0};
int main()
{
	int i;
	int printer();
	int scaner(int i);
	for(i=0;i<=8;i++)
	{
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printer();
		scaner(i);
	}
	return 0;
}
int printer()
{
	int i,j;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			if(borad[i][j]==0)
			printf(".\t");
			if(borad[i][j]==1)
			printf("X\t");
			if(borad[i][j]==2)
			printf("O\t");
		}
		printf("\n\n");
	}
	return 0;
}
int scaner(int i)
{
	int input,layout[2];
	scaner:printf("input a number between 1 and 9 inclusive bitte\n");
	scanf("%d",&input);
	layout[0]=2-input/3;
	if(input%3==0)
	{
		layout[0]++;
		layout[1]=2;
	}
	else layout[1]=input%3-1;
	if(borad[layout[0]][layout[1]]==0)
	{
		if(i%2==0)
		borad[layout[0]][layout[1]]=1;
		else
		borad[layout[0]][layout[1]]=2;
	}
	else
	{
		printf("The square ist currently occupied.Choose again bitte.");
		goto scaner;
	}
	return 0;
}