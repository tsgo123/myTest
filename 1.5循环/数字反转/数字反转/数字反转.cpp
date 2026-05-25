#include<stdio.h>
int main()
{
	int a=0,b,i;
	long n;
	scanf("%ld",&n);
	if(n==0)
	{
		printf("0");
	}
	else
	{
		if(n<0)
		{
		printf("-");
		n=-n;
		}
	for(i=1;n!=0;i++)
	{
		b=n%10;
		n=n/10;
		if(b!=0||a!=0)
		{
			printf("%d",b);
			a++;
		}
	}
	}
	return 0;
}