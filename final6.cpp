#include <stdio.h>
void bitclr(char *p_addr,int n);
int main()
{
	unsigned char status[]={0x11,0x22,0x33,0x85};int n;
	scanf("%d",&n);
	printf("%s",status);
	return 0;
}
void bitclr(char *p_addr,int n)
{
	void *pointer=p_addr;
	int byte;int remain;int k;char temp[100];
	byte=n/8;
	remain=n%8;
	p_addr=p_addr+byte;
	scanf(p_addr,temp);
	for(k=0;k<remain;k++)
	{
		*(p_addr)=*(p_addr)>>1;
	}
}