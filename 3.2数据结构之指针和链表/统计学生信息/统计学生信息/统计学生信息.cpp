#include<stdio.h>
#include<malloc.h>
#include<string.h>
typedef struct st
{
	char xh[21];
	char name[41];
	char sex;
	int year;
	int goal;
	char address[41];
	struct st *next;
}*Link;
int main()
{
	int flag=0;
	Link head,node,p,q;
	head=new st;
	head->next=NULL;
	p=head;
	q=head->next;
	while(1)
	{
		node=new st;
		scanf("%s",node->xh);
		if(strcmp("end",node->xh)==0)
			break;
		else
		{
			scanf("%s %c %d %d %s",node->name,&node->sex,&node->year,&node->goal,node->address);
			p->next=node;
			node->next=q;
			q=node;
			if(flag==0)
			{
				q->next=NULL;
				flag=1;
			}
		}
	}
	p=head->next;
	while(p!=NULL)
	{
		printf("%s %s %c %d %d %s\n",p->xh,p->name,p->sex,p->year,p->goal,p->address);
		p=p->next;
	}
	p=head->next;
	return 0;
}