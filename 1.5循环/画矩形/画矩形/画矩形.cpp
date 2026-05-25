#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,a,b,d,e;
	char c;
	scanf("%d %d %c %d",&a,&b,&c,&d);
	if(d==1)
	{
		for(i=1;i<=a;i++)
		{
			for(e=1;e<=b;e++)
			{
				printf("%c",c);
			}
			printf("\n");
		}
	}
	if(d==0)
	{
			for(i=1;i<=a;i++)
		{
			for(e=1;e<=b;e++)
			{
				if(i==1||i==a||e==1||e==b)
				{
				printf("%c",c);
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	system("pause");
	return 0;
}