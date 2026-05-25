#include<stdio.h>
#include<stdlib.h>
int IS(int a,int b)
{
	if(a>b)
	{
		a=a%b;
		if(a==0)
		{
			return b;
		}
		else
			return IS(a,b);
	}
	else
	{
		b=b%a;
		if(b==0)
		{
			return a;
		}
		else
			return IS(a,b);
	}
}
int main()
{
	int i,n,a,b,sum1=1,sum2=1,c;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d/%d",&a,&b);
		if(i==1)
		{
			sum1=a;
			sum2=b;
		}
		else
		{
			sum1=sum1*b+sum2*a;
			sum2=sum2*b;
		}
	}
	c=IS(sum1,sum2);
	if(sum1%sum2==0)
	{
		printf("%d",sum1/sum2);
	}
	else
	printf("%d/%d",sum1/c,sum2/c);
	system("pause");
	return 0;
}