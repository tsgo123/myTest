#include<stdio.h>
#include<stdlib.h>
int Fight(char s1,char s2)
{
	if(s1=='R')
	{
		if(s2=='S')
		{
			return 1;
		}
		else 
			return 0;
	}
	else if(s1=='S')
	{
		if(s2=='P')
		{
			return 1;
		}	
		else
			return 0;
	}
	else if(s1=='P')
	{
		if(s2=='R')
		{
			return 1;
		}
		else
			return 0;
	}
}
int Fightswich(char arr[110][110],char brr[110][110],int i,int j,int n,int m)
{
	if(i-1>=0&&Fight(arr[i][j],arr[i-1][j])==1)
	{
		brr[i-1][j]=arr[i][j];
	}
	if(i+1<=n&&Fight(arr[i][j],arr[i+1][j])==1)
	{
		brr[i+1][j]=arr[i][j];
	}
	if(j+1<=m&&Fight(arr[i][j],arr[i][j+1])==1)
	{
		brr[i][j+1]=arr[i][j];
	}
 if(j-1>=0&&Fight(arr[i][j],arr[i][j-1])==1)
	{
		brr[i][j-1]=arr[i][j];
	}
	return 0;
}
int Swich(char s1[110][110],char s2[110][110],int i,int j,int n,int m)
{
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			s1[i][j]=s2[i][j];
		}
	}
	return 0;
}
int main()
{
	int n,m,i,j,z,k;
	char arr[110][110]={0},brr[110][110]={0};
	scanf("%d%d%d",&n,&m,&z);
	for(i=0;i<n;i++)
	{
		getchar();
		for(j=0;j<m;j++)
		{
			scanf("%c",&arr[i][j]);
		}
	}
	for(k=1;k<=z;k++)
	{
		Swich(brr,arr,i,j,n,m);
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				Fightswich(arr,brr,i,j,n,m);
			}
		}
		Swich(arr,brr,i,j,n,m);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%c",arr[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}