#include<stdio.h>
#include<stdlib.h>
int main()
{
	char arr[110][110]={};
	int n,m,r,c,num=0;
	scanf("%d%d",&r,&c);
	for(n=0;n<r;n++)
	{
		getchar();
		for(m=0;m<c;m++)
		{
			scanf("%c",&arr[n][m]);
		}
	}
	for(n=0;n<r;n++)
	{
		for(m=0;m<c;m++)
		{
			if(arr[n][m]=='#')
			{
				num++;
			}
		}
	}
	for(n=0;n<r;n++)
	{
		for(m=0;m<c;m++)
		{
			if(arr[n][m]=='#')
			{
				if(arr[n][m-1]=='#')
				{
					num--;
				}
				if(arr[n-1][m]=='#')
				{
					num--;
				}
			}
		}
	}
	printf("%d",num);
	system("pause");
	return 0;
}