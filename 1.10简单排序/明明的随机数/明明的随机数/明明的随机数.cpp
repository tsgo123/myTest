#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,arr[110]={0},i,m,c;
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(m=i+1;m<n;m++)
		{
			if(arr[i]==arr[m])
			{
				for(c=m;c<n-1;c++)
				{
					arr[c]=arr[c+1];
				}
				n--;
				m--;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(m=0;m<n;m++)
		{
			if(arr[i]<arr[m])
			{
				c=arr[m];
				arr[m]=arr[i];
				arr[i]=c;
			}
		}
	}
	printf("%d\n",n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	system("pause");
	return 0;
}