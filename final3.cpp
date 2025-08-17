#include <stdio.h>
int main()
{
	float data1,data2;char op;float result;
	scanf("%f%c%f",&data1,&op,&data2);
	switch(op)
	{
		case '+':
			result=data1+data2;
			printf("result:%5.2f\n",result);
			break;
		case '-':
			result=data1-data2;
			printf("result:%5.2f\n",result);
			break;
		case '*':
			result=data1*data2;
			printf("result:%5.2f\n",result);
			break;
		case '/':
			result=data1/data2;
			printf("result:%5.2f\n",result);
			break;
		default:
			printf("Error!");
	}
	return 0;
}