#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,j,m,a;
	scanf("%d%d%d",&n,&i,&j);
	for(m=1;m<=n;m++)
	{
		printf("(%d,%d) ",i,m);
	}
	printf("\n");
	for(m=1;m<=n;m++)
	{
		printf("(%d,%d) ",m,j);
	}
	printf("\n");
	for(m=1;m<=n;m++)
	{
		for(a=1;a<=n;a++)
		{
			if(a-m==j-i)
			{
				printf("(%d,%d) ",m,a);
			}
		}
	}
	printf("\n");
	for(m=n;m>=1;m--)
	{
		for(a=1;a<=n;a++)
		{
			if(a+m==j+i)
			{
				printf("(%d,%d) ",m,a);
			}
		}
	}
	system("pause");
	return 0;
}