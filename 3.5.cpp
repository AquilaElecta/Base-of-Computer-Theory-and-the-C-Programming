#include <stdio.h>
#include <math.h> //sin(x)、cos(x)、|x|、ex、xy
int main()
{
float x,y,_1,_2,_3,_4,_5;
scanf("%f%f",&x,&y);
_1=sin(x);
_2=cos(x);
_3=fabs(x);
_4=exp(x);
_5=pow(x,y);
printf("sin(x)=%f\n",_1);
printf("cos(x)=%f\n",_2);
printf("|x|=%f\n",_3);
printf("ex=%f\n",_4);
printf("xy=%f\n",_5);
return 0;
}