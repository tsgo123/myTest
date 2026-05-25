#include<stdio.h>
#include<stdlib.h>
void TA(int n,char a,char b,char c)
{
	if(n==1)
	{
		printf("%c->%d->%c",a,n,b);
		printf("\n");
	}
	else
	{
		TA(n-1,a,c,b);
		printf("%c->%d->%c",a,n,b);
		printf("\n");
		TA(n-1,c,b,a);
	}
}
int main()
{
	int n;
	char a,b,c;
	scanf("%d %c %c %c",&n,&a,&b,&c);
	TA(n,a,b,c);
	system("pause");
	return 0;
}