#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,j,k;
	int arr[51][51]={0};
	scanf("%d",&n);
	arr[0][(2*n-1)/2]=1;
	k=0;
	j=(2*n-1)/2;
	for(i=2;i<=(2*n-1)*(2*n-1);i++)
	{
		if(k-1<0&&j+1<=2*n-2)
		{
			if(arr[2*n-2][j+1]>0)
			{
				arr[k+1][j]=i;
				k++;
			}
			else
			{
			arr[2*n-2][j+1]=i;
			k=2*n-2;
			j=j+1;
			}
		}
		else if(k-1>=0&&j+1>2*n-2)
		{
			if(arr[k-1][0]>0)
			{
				arr[k+1][j]=i;
				k++;
			}
			else
			{
			arr[k-1][0]=i;
			k=k-1;
			j=0;
			}
		}
		else if(k-1<0&&j+1>2*n-2)
		{
			arr[k+1][j]=i;
			k++;
		}
		else
		{
			if(arr[k-1][j+1]>0)
			{
				arr[k+1][j]=i;
				k++;
			}
			else
			{
			arr[k-1][j+1]=i;
			k--;
			j++;
			}
		}
	}
	for(i=0;i<2*n-1;i++)
	{
		for(j=0;j<(2*n-1);j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0; 
}