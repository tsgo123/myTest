#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	double L,C,SL,c;
	scanf("%lf%lf%lf",&L,&C,&c);
	SL=(1+c*C)*L;
	SL/=2;
	L/=2;
	double left=0,right=L;
	while(right-left>=1e-7)
	{
		double mid=(left+right)/2,r,jd,SSL;
		r=(L*L+mid*mid)/(2*mid);
		jd=asin(L/r);
		SSL=r*jd;
		if(SSL>SL)
			right=mid;
		else
			left=mid;
	}
	printf("%.3lf",left);
}