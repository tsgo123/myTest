#include<stdio.h>
int main()
{
	long n;
	scanf("%ld\n",&n);
	for(;n!=1;)
	{
		if(n%2==0)
		{
			printf("%ld/2=",n);
			n=n/2;
			printf("%ld\n",n);
		}
		else
		{
			printf("%ld*3+1=",n);
			n=3*n+1;
			printf("%ld\n",n);
		}
	}
	printf("End");
	return 0;
}