#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//31337=0111101001101001
char char1[100];
int intoints[100]={0};int xorints[100];
int main()
{
	int i=0;int j;
	void grouper(char *char1);
	void inter2(char *char1,int i);
	gets(char1);
	grouper(char1);
	while(char1[i]!='\0')
	{
		inter2(char1,i);
		i=i+2;
	}
	printf("encrypted message ist:");
	for(j=0;intoints[j]!=0;j++)
	{
		xorints[j]=intoints[j]^31337;
		printf("%d\t",xorints[j]);
	}
	return 0;
}
void grouper(char *char1)
{
	int i=0;
	while(*char1!='\0')
	{
		char1++;
		i++;
	}
	if((i%2)==1)
		*char1=' ';
	i=0;
}
void inter2(char *char1,int i)
{
	char ascii[17]={"0000000000000000"},cacheascii1[9]={"00000000"},cacheascii2[9]={"00000000"},ascii1[9]={"00000000"},ascii2[9]={"00000000"};
	char *asciipointer=ascii;char *asciipointer1=ascii1;char *asciipointer2=ascii2;char *cacheasciipointer1=cacheascii1;char *cacheasciipointer2=cacheascii2;
	char *endptr;
	itoa(char1[i],cacheasciipointer1,2);
	//while(*asciipointer!='\0')
		//asciipointer++;
	itoa(char1[i+1],cacheasciipointer2,2);
	asciipointer1=asciipointer1+(8-strlen(cacheascii1));
	asciipointer2=asciipointer2+(8-strlen(cacheascii2));
	strcpy(asciipointer1,cacheascii1);
	strcpy(asciipointer2,cacheascii2);
	strcpy(asciipointer,ascii1);
	asciipointer=asciipointer+8;
	strcpy(asciipointer,ascii2);
	//printf("%s\t%s\t",ascii1,ascii2);
	//printf("%s\t",ascii);
	intoints[i/2]=strtol(ascii,&endptr,2);
}