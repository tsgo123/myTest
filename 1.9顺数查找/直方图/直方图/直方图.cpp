#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,arr[11000]={0},i,max=0,a,num=0;
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	for(i=0;i<=max;i++)
	{
		for(a=0;a<n;a++)
		{
			if(arr[a]==i)
			{
				num++;
			}
		}
		printf("%d\n",num);
		num=0;
	}
	system("pause");
	return 0;
}