#include<stdio.h>
int main()
{
	double a,b,c,r,pi;
	scanf("%lf",&r);
	pi=3.14159;
	a=2*r;
	b=2*r*pi;
	c=pi*r*r;
	printf("%.4lf %.4lf %.4lf",a,b,c);

	return 0;
}