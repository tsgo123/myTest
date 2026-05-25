#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,x,b;
	scanf("%d",&n);
	b=n;
	for(i=0;i<=b;i++)
	{
		scanf("%d",&x);
		if(i==0)
		{
			printf("%d",x*n);
			if(x*n==0)
			{
				break;
			}
		}
		if(i!=0&&n!=0)
		{
			printf(" %d",x*n);
		}
		n=n-1;
	}
	system("pause");
	return 0;
}