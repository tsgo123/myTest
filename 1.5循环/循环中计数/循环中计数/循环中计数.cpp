#include<stdio.h>
int main()
{
	int i,k,a=0,b=0,c=0,n;
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		scanf("%d",&n);
		if(n==1)
		{
			a=a+1;
		}
		if(n==5)
		{
			b=b+1;
		}
		if(n==10)
		{
			c=c+1;
		}
	}
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
	return 0;
}
