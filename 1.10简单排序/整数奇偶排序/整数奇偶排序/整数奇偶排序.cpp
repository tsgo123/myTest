#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n=0,m=0,arr[11]={0},brr[11]={0},crr[11]={0},a,t;
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]%2!=0)
		{
			brr[n]=arr[i];
			n++;
		}
		else
		{
			crr[m]=arr[i];
			m++;
		}
	}
	for(i=0;i<n;i++)
	{
		for(a=i+1;a<n;a++)
		{
			if(brr[i]<brr[a])
			{
				t=brr[i];
				brr[i]=brr[a];
				brr[a]=t;
			}
		}
	}
	for(i=0;i<m;i++)
	{
		for(a=i+1;a<m;a++)
		{
			if(crr[i]>crr[a])
			{
				t=crr[i];
				crr[i]=crr[a];
				crr[a]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",brr[i]);
	}
	for(i=0;i<m;i++)
	{
		printf("%d ",crr[i]);
	}
	system("pause");
	return 0;
}