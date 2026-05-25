#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[110][110]={},n,m,i,num=0,j,k,t=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(m=0;m<n;m++)
		{
			getchar();
			scanf("%d",&arr[i][m]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(m=0;m<n;m++)
		{
			if(arr[i][m]<=50&&arr[i][m]>=0)
			{
				j=i;
				k=m;
				num++;
				if(j==n-1||j==0||k==0||k==n-1||arr[j][k-1]>50||arr[j][k+1]>50||arr[j-1][k]>50||arr[j+1][k]>50)
				{
					t++;
				}
			}
		}
	}
	printf("%d %d",num,t);
	system("pause");
	return 0;
}