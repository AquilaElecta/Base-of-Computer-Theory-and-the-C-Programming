#include <stdio.h>
unsigned long hexconvert() 
{
	char hex[9];unsigned long ten;
	printf("enter hex bitte\n(char <=8)\n");
  	scanf("%s",&hex);
  	sscanf(hex,"%x",&ten);
  	return(ten);
}
int main()
{
	unsigned long ten;
	ten=hexconvert();
	printf("%lu",ten);
	return 0;
}