#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	long n,b,a;
	scanf("%ld",&n);
	for(i=1;;i++)
	{
		a=n;
		b=n%10;
		n=n/10;
		if(a!=b)
		{
			printf("%ld ",b);
		}
		else
		{
			printf("%ld ",b);
			break;
		}
	}
	return 0;
	system("pause");
}
	