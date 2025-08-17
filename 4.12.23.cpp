#include<stdio.h>
int main()
{
	char char1[100];char *char1pointer=char1;
	
}
bittest(unsigned char *p,int n)
{
	int n1=n/8;
	int n2=n%8;
	char data=*(p+n1);
	if((data>>n2)&1)
		return 1;
	else
		return 0;
}