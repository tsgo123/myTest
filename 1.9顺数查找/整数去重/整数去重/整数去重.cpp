#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,t,m,c;
	int arr[21000]={0};
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		t=arr[i];
		for(m=i+1;m<n;m++)
		{
			if(arr[m]==t)
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
		printf("%d ",arr[i]);
	}
	system("pause");
	return 0;
}