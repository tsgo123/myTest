#include<stdio.h>
#include<stdlib.h>
int arr[1100][1100]={};
int main()
{
	int n,i,m,j,k,a=0,b=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(m=0;m<n;m++)
		{
			getchar();
			scanf("%d",&arr[i][m]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(m=0;m<n;m++)
		{
			if(arr[i][m]==0)
			{
				j=i;
				k=m;
				while(arr[i][k]==0&&k<n)
				{
					a++;
					k++;
				}
				while(arr[j][m]==0&&j<n)
				{
					b++;
					j++;
				}
				if(a>=2&&b>=2)
				{
					printf("%d",(a-2)*(b-2));
					system("pause");
					return 0;
				}
			}
		}
	}
	printf("0");
	system("pause");
	return 0;
}