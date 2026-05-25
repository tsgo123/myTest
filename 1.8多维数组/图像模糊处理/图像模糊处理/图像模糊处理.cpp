#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,m,a;
	int arr[110][110]={},brr[110][110]={};
	double e;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		getchar();
		for(a=0;a<m;a++)
		{
			scanf("%d",&arr[i][a]);
			brr[i][a]=arr[i][a];
		}
	}
	for(i=1;i<n-1;i++)
	{
		for(a=1;a<m-1;a++)
		{
			arr[i][a]=(brr[i+1][a]+brr[i-1][a]+brr[i][a+1]+brr[i][a-1]+brr[i][a])/5;
			e=((brr[i+1][a]+brr[i-1][a]+brr[i][a+1]+brr[i][a-1]+brr[i][a])%5)/5.0;
			if(e>=0.5)
			{
				arr[i][a]+=1;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(a=0;a<m;a++)
		{
			printf("%d ",arr[i][a]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}