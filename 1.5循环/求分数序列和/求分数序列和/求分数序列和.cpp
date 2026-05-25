#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n;
	double c,d,b,sum=0;
	scanf("%d",&n);
	for(i=1,c=1,d=2;i<=n;i++)
	{
		b=d/c;
		sum+=b;
		d=d+c;
		c=d-c;
	}
	printf("%.4lf",sum);
	system("pause");
	return 0;
}