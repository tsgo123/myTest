#include<stdio.h>
int main()
{
	int i,n,a,c,d;
	scanf("%d",&n);
	for(i=1,c=-1,d=101;i<=n;i++)
	{
		scanf("%d",&a);
		if(a>c)
			c=a;
		else
			c=c;
		if(a<d)
			d=a;
		else
			d=d;
	}
	printf("%d",c-d);
	return 0;
}