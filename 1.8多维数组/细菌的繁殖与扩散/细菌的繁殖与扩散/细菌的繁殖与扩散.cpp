#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,m,a,b,t,j,k;
	int arr[10][10]={0},brr[10][10]={0};
	scanf("%d%d",&m,&n);
	brr[4][4]=m;
	arr[4][4]=m;
	for(i=1;i<=n;i++)
	{
		for(a=0;a<9;a++)
		{
			for(b=0;b<9;b++)
			{
				if(brr[a][b]!=0)
				{
					t=brr[a][b];
					for(j=a-1;j<a+2;j++)
					{
						for(k=b-1;k<b+2;k++)
						{
							arr[j][k]+=t;
						}
					}
				}
			}
		}
		for(a=0;a<9;a++)
		{
			for(b=0;b<9;b++)
			{
				brr[a][b]=arr[a][b];
			}
		}
	}
	for(a=0;a<9;a++)
	{
		for(b=0;b<9;b++)
		{
			printf("%d ",arr[a][b]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
