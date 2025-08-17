#include <stdio.h>
#include <string.h>
int getWordLen(char *pStr);
int main()
{
	char input[100];char *input_p=input;int maxlen;
	gets(input);
	maxlen=getWordLen(input_p);
	printf("maxlen:%d",maxlen);
	return 0;
}
int getWordLen(char *pStr)
{
	int i;int maxlen=0,len=0;
	for(;*(pStr)!='\0';pStr++)
	{
		if(*(pStr)!=' '&&*(pStr)!='.')
		{
			len++;
		}
		else
		{
			if(len>maxlen)
			maxlen=len;
			len=0;
		}
	}
	return(maxlen);
}