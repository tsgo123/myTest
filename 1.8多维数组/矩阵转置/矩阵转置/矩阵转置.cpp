#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,n,m,arr[110][110]={};
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(j=0;j<m;j++)
	{
		for(i=n-1;i>=0;i--)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}