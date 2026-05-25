#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num=0,n,m,i,j,a,b;
	char arr[110][110]={};
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		getchar();
		for(j=0;j<m;j++)
		{
			scanf("%c",&arr[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(arr[i][j]=='?')
			{
				for(a=i-1;a<i+2;a++)
				{
					for(b=j-1;b<j+2;b++)
					{
						if(arr[a][b]=='*')
						{
							num++;
						}
					}
				}
				arr[i][j]=num+'0';
			}
			num=0;
		}
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