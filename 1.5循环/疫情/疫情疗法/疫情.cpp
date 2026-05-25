#include<stdio.h>
int main()
{
	int n,i,a,b,c,d;
	scanf("%d\n",&n);
	scanf("%d %d\n",&c,&d);
	for(i=2;i<=n;i++)
	{
		scanf("%d %d\n",&a,&b);
		if((double)(d)/(double)(c)-(double)(b)/(double)(a)>0.05)
		{
			printf("worse\n");
		}
		if((double)(d)/(double)(c)-(double)(b)/(double)(a)<-0.05)
		{
			printf("better\n");
		}
		if((double)(d)/(double)(c)-(double)(b)/(double)(a)<=0.05&&(double)(d)/(double)(c)-(double)(b)/(double)(a)>=-0.05)
		{
			printf("same\n"); 
		}
	}

	return 0;
}

