#include<stdio.h>
#include<stdlib.h>
int main()
{
	int m,i,max=-1,min=11000;
	int arr[11000]={0};
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<m;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("%d",max-min);
	system("pause");
	return 0;
}