#include<stdio.h>
int main()
{
	int i,n,k;
	scanf("%d %d",&n,&k);
	double c,d,a=200.0,e;
	d=k;
	e=n;
	c=d/100+1.0;
	for(i=1;i<=20;i++)
	{
		a=a*c;
		e=e+n;
		if(e>=a&&i<=19)
		{
			printf("%d",i+1);
			return 0;
		}
			
	}
	if(e<a)
	{
		printf("Impossible");
	}
	return 0;
}