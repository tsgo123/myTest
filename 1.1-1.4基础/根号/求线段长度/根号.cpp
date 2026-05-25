#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,d,f,e;
	
	scanf("%lf %lf",&a,&b);
	scanf("%lf %lf",&c,&d);
	f=(a-c)*(a-c)+(b-d)*(b-d);
	
	e=sqrt(f);
	printf("%.3lf",e);
	return 0;
}