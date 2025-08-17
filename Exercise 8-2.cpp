#include<stdio.h>
int main()
{
	void _strcmp(char *p1,char *p2);
	char p1[2048],p2[2048];
	gets(p1);
	gets(p2);
	_strcmp(p1,p2);
	return 0;
}
void _strcmp(char *p1,char *p2)
{
	while(*p1!='\0'&&*p2!='\0'&&*p1==*p2)
	{
		p1++;
		p2++;
	}
	if(*p1<*p2)
		printf("the first string is less than the second string.");
	if(*p1==*p2)
		printf("the first string is equal to the second string.");
	if(*p1>*p2)
		printf("the first string is greater than the second string.");
}
