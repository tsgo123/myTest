#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int n,b;
	double i,a,sum=0;
	scanf("%d",&n);
	for(i=1,b=0;i<=n;i++,b++)
	{
		a=(pow)((double)(-1),b)*1/i;
		sum+=a;
	}
	printf("%.4lf",sum);
	system("pause");
	return 0;
}