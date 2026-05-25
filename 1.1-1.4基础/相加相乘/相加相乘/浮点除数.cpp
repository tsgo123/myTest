#include<stdio.h>
int main()
{
	float a,b,c,d;
	
	scanf("%f %f",&a,&b);
	c=100;
	d=c*b/a;
	printf("%.3f%%",d);
	return 0;
}