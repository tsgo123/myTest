#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,m,arr[110]={0},i,ch,z=0,j,num=0,flag=0,x=0;
	scanf("%d%d",&n,&m);
	getchar();
	for(i=0;i<n;i++)
	{
		arr[i]=-1;
	}
	for(i=1;i<=m;i++)
	{
		scanf("%d",&ch);
		for(j=0;j<n;j++)
		{
			if(arr[j]==-1&&z==0)
			{
				x=j;
				z=1;
			}
			if(arr[j]==ch)
			{
				flag=1;
			}
		}
		if(z==0&&flag==0)
		{
			for(j=0;j<n-1;j++)
			{
				arr[j]=arr[j+1];
			}
			num++;
			arr[n-1]=ch;
		}
		else if(flag==0)
		{
			arr[x]=ch;
			num++;
		}
		flag=0;
		z=0;
	}
	printf("%d",num);
	system("pause");
	return 0;
}
