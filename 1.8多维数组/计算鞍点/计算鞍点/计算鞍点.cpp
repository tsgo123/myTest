#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,m,n,arr[6][6]={0},max,z=0,x;
	for(m=0;m<5;m++)
	{
		for(n=0;n<5;n++)
		{
			scanf("%d",&arr[m][n]);
		}
	}
	for(m=0;m<5;m++)
	{
		x=0;
		max=arr[m][x];
		for(n=0;n<5;n++)
		{
			if(arr[m][n]>max)
			{
				max=arr[m][n];
				x=n;
			}
		}
		for(i=0;i<5;i++)
		{
			if(arr[i][x]<max)
			{
				max=arr[i][x];
			}
		}
		if(max==arr[m][x])
		{
			printf("%d %d %d",m+1,x+1,arr[m][x]);
			printf("\n");
			z++;
		}
	}
	if(z==0)
	{
		printf("not found");
	}
	system("pause");
	return 0;
}