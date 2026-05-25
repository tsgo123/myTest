#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double HANSHU(double x)
{
	double s;
	s=pow(x,5)-15*pow(x,4)+85*pow(x,3)-225*x*x+274*x-121;
	return s;
}
int main()
{
	double a,b,c;
	a=1.5;//>0
	b=2.4;//<0
	c=(a+b)/2.0;
	while(HANSHU(c)!=0)
	{
		if(HANSHU(c)>0)
		{
			a=c;
			c=(a+b)/2.0;
		}
		else if(HANSHU(c)<0)
		{
			b=c;
			c=(a+b)/2.0;
		}
	}
	printf("%lf",c);
	system("pause");
	return 0;
}