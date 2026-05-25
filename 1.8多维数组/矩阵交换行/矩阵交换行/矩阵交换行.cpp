#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[5][5]={},m,n,j,k;
	for(m=0;m<5;m++)
	{
		for(n=0;n<5;n++)
		{
			scanf("%d",&arr[m][n]);
		}
	}
	scanf("%d%d",&j,&k);
	for(m=0;m<5;m++)
	{
		if(m==j-1)
		{
			m=k-1;
		}
		else if(m==k-1)
		{
			m=j-1;
		}
		for(n=0;n<5;n++)
		{
			printf("%d ",arr[m][n]);
		}
		if(m==k-1)
		{
			m=j-1;
		}
		else if(m==j-1)
		{
			m=k-1;
		}
		printf("\n");
	}
	system("pause");
	return 0;
}