#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[110][110]={0},m,n,i,j,sum=0;
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
			if(i==0||i==m-1||j==0||j==n-1)
				sum+=arr[i][j];
		}
	}
	printf("%d",sum);
	system("pause");
	return 0;
}