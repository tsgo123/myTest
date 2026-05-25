#include<stdio.h>
#include<stdlib.h>
int a[100100]={0},b[100100]={0},g[100100]={0},k[100100]={0};
int main()
{
	int i,n,x,y,t=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		getchar();
		scanf("%d%d%d%d",&a[i],&b[i],&g[i],&k[i]);
	}
	getchar();
	scanf("%d%d",&x,&y);
    for(i=0;i<n;i++)
	{
		if(x>=a[i]&&x<=(a[i]+g[i])&&y>=b[i]&&y<=(b[i]+k[i]))
		{
			t=i+1;
		}
	}
    if(t)
	{
		printf("%d",t);
	}
	else
	{
		printf("-1");
	}
	system("pause");
	return 0;
}