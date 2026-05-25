#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef struct Stu
{
	int data;
	struct Stu *next;
}*Link;
int main()
{
	Link head,p,node;
	head=(Link)malloc(sizeof(Stu));
	head->next=NULL;
	p=head;
	int n,i,m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		node=(Link)malloc(sizeof(Stu));
       	node->next=NULL;
		scanf("%d",&node->data);
		p->next=node;
		p=p->next;
		p->next=NULL;
	}
	scanf("%d",&m);
	p=head->next;
	while(p!=NULL)
	{
		if(p->data!=m)
			printf("%d ",p->data);
		if(p->next==NULL)
		  break;
		else
		 p=p->next;
	}
	system("pause");
	return 0;
}