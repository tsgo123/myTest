#include<stdio.h>
#include<stdlib.h>
int LEN(int i,int arr[10006],int j,int n)
{
	int a=0,b=0,z;
	if(i<j)
	{
		for(z=i;z<j;z++)
		{
			a+=arr[z];
		}
		for(z=0;z<i;z++)
		{
			b+=arr[z];
		}
		for(z=j;z<n;z++)
		{
			b+=arr[z];
		}
	}
	else
	{
		for(z=j;z<i;z++)
		{
			a+=arr[z];
		}
		for(z=0;z<j;z++)
		{
			b+=arr[z];
		}
		for(z=i;z<n;z++)
		{
			b+=arr[z];
		}
	}
	if(a>b)
		return b;
	else
		return a;
}
int main()
{
	int arr[10006]={0},brr[10006]={0};
	int n,i,max=0,m,j,s=0,flag=0,z=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&arr[i],&brr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j!=i)
			{
				m=LEN(i,brr,j,n);
				s+=m*arr[j];
			}
		}
		if(z==0)
		{
			max=s;
			z=1;
		}
		if(s<max&&z==1)
		{
			max=s;
			flag=i;
		}
		s=0;
	}
	printf("%d,%d",flag,max);
	system("pause");
	return 0;
}