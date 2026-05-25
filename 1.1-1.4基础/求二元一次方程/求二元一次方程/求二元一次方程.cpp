#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c;
	scanf("%lf %lf %lf",&a,&b,&c);
	if(b *b== 4 * a * c&&a!=0)
	{
		printf("x1=x2=%.5lf",(-b)/(2*a));
	}
	if(b*b> 4 * a * c&&a>0)
	{
		printf("x1=%.5lf;x2=%.5lf",(-b+(sqrt)(b*b-4*a*c))/(2*a),(-b-(sqrt)(b*b-4*a*c))/(2*a));
	}
	if(b*b> 4 * a * c&&a<0)
	{
		printf("x1=%.5lf;x2=%.5lf",(-b-(sqrt)(b*b-4*a*c))/(2*a),(-b+(sqrt)(b*b-4*a*c))/(2*a));
	}

	if(b*b< 4 * a * c&&a!=0&&b!=0)
	{
		printf("x1=%.5lf+%.5lf%c;x2=%.5lf-%.5lf%c",-b / (2*a),(sqrt)(4*a*c-b*b) / (2*a),'i',-b / (2*a),(sqrt)(4*a*c-b*b) / (2*a),'i');
	}
	if(b*b< 4 * a * c&&a!=0&&b==0)
	{
		printf("x1=%.5lf+%.5lf%c;x2=%.5lf-%.5lf%c",b / (2*a),(sqrt)(4*a*c-b*b) / (2*a),'i',b / (2*a),(sqrt)(4*a*c-b*b) / (2*a),'i');
	}
	return 0;
}
