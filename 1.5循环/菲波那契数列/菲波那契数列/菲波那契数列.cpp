#include<stdio.h>
int main()
{
	int a,b,k,i;
	a=b=1;
	scanf("%d",&k);
	if(k%2!=0)
	{
		for(i=1;i<=k/2;i++)
	{
		a=a+b;
		b=a+b;
	}
		printf("%d",a);
	}
	if(k%2==0)
	{
		for(i=1;i<=k/2-1;i++)
	{
		a=a+b;
		b=a+b;
	}
		printf("%d",b);
	}
	return 0;
}