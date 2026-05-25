#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k,n,num=0;
	int arr[20][20]={0};
	scanf("%d",&n);
	j=0;
	k=1;
	arr[0][0]=1;
	for(i=2;i<=n*n;i++)
	{
		if(num==0)
		{
			arr[j][k]=i;
			j++;
			k--;
			if(k==-1||j==n)
			{
				num=1;
				if(k==-1&&j!=n)
				{
					k=0;
				}
				else if(j==n)
				{
					j=n-1;
					k+=2;
				}
			}
		}
		else if(num==1)
		{
			arr[j][k]=i;
			k++;
			j--;
			if(k==n||j==-1)
			{
				num=0;
				if(j==-1&&k!=n)
				{
					j=0;
				}
				else if(k==n)
				{
					k=n-1;
					j+=2;
				}
			}
		}
	}
	for(j=0;j<n;j++)
	{
		for(k=0;k<n;k++)
		{
			printf("%d ",arr[j][k]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}