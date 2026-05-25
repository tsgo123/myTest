#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,a[100],d,b,c,e=0;
	scanf("%d/n",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&b);
		a[i]=b;
	}
	scanf("%d/n",&d);
	for(i=n;i>=1;i--)
	{
		c=a[i];
		if(c==d)
		{
			e++;
		}
	}
	printf("%d",e);
	system("pause");
	return 0;
}