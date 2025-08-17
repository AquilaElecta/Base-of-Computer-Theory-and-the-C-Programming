#include <stdio.h>
#include <stdlib.h>
struct Student
{
	int num;
	float score;
	struct Student *next;
};
int n;
struct Student *creat(void);

int main()
{
	struct Student a,b,c,*head,*p1,*p2;
	n=0;
	p1=p2=(struct Student*) malloc(sizeof(struct Student));
	head=NULL;
	a.num=10101;a.score=89.5;
	b.num=10103;b.score=90;
	c.num=10107;c.score=85;
	head=&a;
	a.next=&b;
	b.next=&c;
	c.next=NULL;
	p=head;
	do
	{
		printf("%d %5.1f\n",p->num,p->score);
		p=p->next;
	}while(p!=NULL);
	return 0;
}