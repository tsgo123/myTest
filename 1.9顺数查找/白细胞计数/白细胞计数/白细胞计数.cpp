#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int i,n,j,k,m=0;
	double max,min,arr[500]={0},sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    getchar();
		scanf("%lf",&arr[i]);
	}
	min=arr[0];
	max=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
			j=i;
		}
		if(arr[i]<min)
		{
			min=arr[i];
			k=i;
		}
	}
	for(i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	sum=(sum-max-min)*1.0/(n-2);
	for(i=0;i<n;i++)
	{
		if(i!=j&&i!=k&&m==0)
		{
			max=fabs(sum-arr[i]);
			m=1;
		}
		if(fabs(sum-arr[i])>max&&i!=j&&i!=k)
		{
			max=fabs(sum-arr[i]);
		}
	}
	printf("%.2lf %.2lf",sum,max);
	system("pause");
	return 0;
}