#include<stdio.h>
int main()
{
	double N,y;
	scanf("%lf",&N);
	if(N>=0&&N<5)
	{
		y=-N+2.5;
		printf("%.3lf",y);
	}
	if(N>=5&&N<10)
	{
		y=2-1.5*(N-3)*(N-3);
		printf("%.3lf",y);
	}
	if(N>=10&&N<20)
	{
		y=N/2-1.5;
		printf("%.3lf",y);
	}

	return 0;
}