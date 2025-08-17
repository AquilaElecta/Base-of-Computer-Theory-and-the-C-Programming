#include <stdio.h>
#include <stdlib.h>
struct Student
{
	char name[20];
	int num;
	float score;
};
int stunum;
int main()
{
	void input(struct Student *stu);
	void listStuInfo(struct Student *stu);
	void printer(struct Student *stu);
	printf("enter the number of students bitte\n");
	scanf("%d",&stunum);
	struct Student *Stu;struct Student *Stupointer;
	Stu=(struct Student *)malloc(stunum*sizeof(struct Student));
	//if(Stu==NULL)
		//printf("failed");
	input(Stu);
	listStuInfo(Stu);
	printer(Stu);
	free(Stu);
	return 0;
}
void input(struct Student *stu)
{
	int i;
	printf("enter name,num,score bitte\n");
	for(i=0;i<stunum;i++)
	{
		//printf("%d",i);
		scanf("%s%d%f",&(stu+i)->name,&(stu+i)->num,&(stu+i)->score);
	}
}
void listStuInfo(struct Student *stu)
{
	struct Student temp;
	int i;int j=0;int max=0;
	for(i=0;i<stunum;i++)
	{
		max=j;
		for(j=i;j<stunum;j++)
		{
			if((stu+j)->score>(stu+max)->score)
				max=j;
		}
		temp=*(stu+i);*(stu+i)=*(stu+max);*(stu+max)=temp;
	}
}
void printer(struct Student *stu)
{
	int i;
	for(i=0;i<stunum;i++)
	{
		//printf("%d",i);
		printf("%s\t%d\t%f\n",(stu+i)->name,(stu+i)->num,(stu+i)->score);
	}
}
