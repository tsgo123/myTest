#include<stdio.h>
#include<stdlib.h>
int main()
{
	double i,e=0,n,a,b;
	scanf("%lf",&n);
	for(i=1;i<=n;i++)
	{
		for(a=1,b=1;a<=i;a++)
		{
			b=b*a;
		}
		e=e+1/b;
	}
	printf("%.10lf",e+1);
	system("pause");
	return 0;
}
