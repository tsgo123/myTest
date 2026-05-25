#include<stdio.h>
int main()
{
	int i,n;
	i=1;
	scanf("%d\n",&n);
	double a,sum;
	sum=0;
	while(i<=n)
	{
		scanf("%lf",&a);
		i=i+1;
		sum=sum+a;
	}
	printf("%.4lf",sum/n);
	return 0;
}