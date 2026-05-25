#include<stdio.h>
int main()
{
	int i,a,b=0,c=0,d=0,e=0;
	double f;
	for(i=1;i<=12;i++)
	{
		scanf("%d",&a);
		if(a>d+300)
		{
			printf("%d",-i);break;
		}
		d=d+300;
		c=(d-a)/100;
		e=e+c*100;
		d=d-a-c*100;
	}
	f=e*1.2+d;
	if(i>=12)
	{
		printf("%d",(int)(f));
	}
	return 0;
}