#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,a,sum,c=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(a=1,sum=1;a<=i;a++)
		{
			sum=sum*a;
		}
		c=c+sum;
	}
	printf("%d",c);
	system("pause");
	return 0;
}