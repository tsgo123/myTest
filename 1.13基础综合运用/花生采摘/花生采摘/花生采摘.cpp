#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int xMAX(int arr[21][21],int n,int m)
{
	int i,j,max=0,x,y;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(arr[i][j]>max)
			{
				max=arr[i][j];
				x=i;
				y=j;
			}
		}
	}
	return x;
}
int yMAX(int arr[21][21],int n,int m)
{
	int i,j,max=0,x,y;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(arr[i][j]>max)
			{
				max=arr[i][j];
				x=i;
				y=j;
			}
		}
	}
	return y;
}
int main()
{
	int i,j,n,m,t,arr[21][21]={0},num=0,max=0,x,y,flag=0;
	scanf("%d%d%d",&n,&m,&t);
	getchar();
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		  scanf("%d",&arr[i][j]);
	}
	while(1)
	{
		x=xMAX(arr,n,m);
		y=yMAX(arr,n,m);
		if(flag==0)
		{
			if(2*(x+1)+1<=t)
			{
				num+=(x+1)+1;
				max+=arr[x][y];
				arr[x][y]=0;
				flag=1;
				i=x,j=y;
			}
			else
				break;
		}
		else
		{
			if(abs(x-i)+abs(y-j)+1+x+1+num<=t)
			{
				num+=abs(x-i)+abs(y-j)+1;
				max+=arr[x][y];
				arr[x][y]=0;
				i=x;
				j=y;
			}
			else
				break;
		}
	}
	printf("%d",max);
	system("pause");
	return 0;
}