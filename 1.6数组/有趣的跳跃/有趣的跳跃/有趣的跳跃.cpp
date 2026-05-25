#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
int main()
{
	int i,n,a[3100],m,d[3100]={0},e=0,f,min=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		a[i]=m;
	}
	for(i=0;i<n-1;i++)
	{
		d[i]=abs(a[i+1]-a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		min=d[i];
		for(f=i;f<n-1;f++)
		{
			if(d[f]<min)
			{
				min=d[f];
				d[f]=d[i];
				d[i]=min;
			}
		}
	}
	for(i=0;i<n-1;i++)
	{
		if(d[i]!=i+1)
		{
			printf("Not jolly")	;
			return 0;
		}
	}
	printf("Jolly");
	system("pause");
	return 0;
}