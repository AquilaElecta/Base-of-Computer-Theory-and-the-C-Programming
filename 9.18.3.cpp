#include <stdio.h>
int main()
{
	char c;
	int letter,space,number,other;
	letter=space=number=other=0;
	while(c!='\n')//检测未换行
	{
		c=getchar();//读取输入的字符并记录类别
		if(c>='A'&&c<='Z'||c>='a'&&c<='z')
		letter=letter+1;
		else if(c==' ')
		space=space+1;
		else if(c>='0'&&c<='9')
		number=number+1;
		else if(c=='\n')//结束循环
		break;
		else
		other=other+1;
	}
	printf("letter=%d,space=%d,number=%d,other=%d",letter,space,number,other);
	return 0;
}