#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,m=0,n,arr[510]={0},brr[510]={0},j,max=0;
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]%2!=0)
		{
			brr[m]=arr[i];
			m++;
		}
	}
	for(i=0;i<m;i++)
	{
		max=brr[i];
		for(j=i;j<m;j++)
		{
			if(brr[j]<max)
			{
				max=brr[j];
				brr[j]=brr[i];
				brr[i]=max;
			}
		}
	}
	for(i=0;i<m;i++)
	{
		i?printf(",%d",brr[i]):printf("%d",brr[i]);
	}
	system("pause");
	return 0;
}