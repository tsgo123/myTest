#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,m,a=0,b=0,c=0,d=0;
	char arr[20][20]={0},brr[20][20]={0},crr[20][20]={0},drr[20][20]={0},err[20][20]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		getchar();
		for(m=0;m<n;m++)
		{
			m?scanf(" %c",&arr[i][m]):scanf("%c",&arr[i][m]);
		}
	}
	for(i=0;i<n;i++)
	{
		getchar();
		for(m=0;m<n;m++)
		{
			m?scanf(" %c",&brr[i][m]):scanf("%c",&brr[i][m]);
		}
	}
	for(m=0;m<n;m++)
	{
		for(i=n-1;i>=0;i--)
		{
			crr[m][n-i-1]=arr[i][m];
		}
	}
	for(m=n-1;m>=0;m--)
	{
		for(i=0;i<n;i++)
		{
			drr[n-m-1][i]=arr[i][m];
		}
	}
	for(i=0;i<n;i++)
	{
		for(m=0;m<n;m++)
		{
			err[n-i-1][n-m-1]=arr[i][m];
		}
	}
	for(i=0;i<n;i++)
	{
		for(m=0;m<n;m++)
		{
			if(brr[i][m]==crr[i][m])
			{
				a++;
			}
			if(brr[i][m]==drr[i][m])
			{
				b++;
			}
			if(brr[i][m]==err[i][m])
			{
				c++;
			}
			if(brr[i][m]==arr[i][m])
			{
				d++;
			}
		}
	}
	if(a==n*n)
	{
		printf("1");
	}
	else if(b==n*n)
	{
		printf("2");
	}
	else if(c==n*n)
	{
		printf("3");
	}
	else if(d==n*n)
	{
		printf("4");
	}
	else
	{
		printf("5");
	}
	system("pause");
	return 0;
}