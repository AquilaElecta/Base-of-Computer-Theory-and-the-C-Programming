#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//31337=0111101001101001
char char1[100];char dechar[100];
int intoints[100]={0};int deintoints[100]={0};int xorints[100];
int main()
{
	int i=0;int j;int number;
	void degrouper(int deintoint,int j);
	void deinter2(int intoints,int i);
	printf("enter the numbers of encrypted message bitte\n");
	scanf("%d",&number);
	for(j=0;j<number;j++)
	{
		scanf("%d",&xorints[j]);
		intoints[j]=xorints[j]^31337;
		//printf("%d\n",intoints[j]);
	}
	while(intoints[i]!=0)
	{
		deinter2(intoints[i],i);
		i=i+1;
	}
	printf("decrypted message ist:");
	for(j=0;j<number*2;j++)
	{
		degrouper(deintoints[j],j);
	}
	return 0;
}
void degrouper(int deintoint,int j)
{
	dechar[j]=deintoint;
	printf("%c",dechar[j]);
}
void deinter2(int intoint,int i)
{
	char ascii[17]={"0000000000000000"},cacheascii[17]={"0000000000000000"},cacheascii1[9]={"00000000"},cacheascii2[9]={"00000000"},ascii1[9]={"00000000"},ascii2[9]={"00000000"};
	char *asciipointer=ascii;char *cacheasciipointer=cacheascii;char *asciipointer1=ascii1;char *asciipointer2=ascii2;char *cacheasciipointer1=cacheascii1;char *cacheasciipointer2=cacheascii2;
	char *endptr;
	itoa(intoints[i],cacheasciipointer,2);
	asciipointer=asciipointer+(16-strlen(cacheascii));
	strcpy(asciipointer,cacheascii);
	asciipointer=ascii;
	strcpy(ascii1,asciipointer);
	ascii1[8]='\0';
	asciipointer=asciipointer+8;
	strcpy(ascii2,asciipointer);
	//printf("%s\t%s\t",ascii1,ascii2);
	//printf("%s\t",ascii);
	deintoints[2*i]=strtol(ascii1,&endptr,2);
	deintoints[2*i+1]=strtol(ascii2,&endptr,2);
	//printf("%d\t%d\t",deintoints[2*i],deintoints[2*i+1]);
}