#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,n,m,num,z,sum=0,max=0,flag=0,x=0;
	int arr[105]={0},brr[105][105]={0};	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&m,&num);
		for(j=0;j<num;j++)
		{
			scanf("%d",&z);
			brr[m][z]++;
		}
	}
	for(i=1;i<105;i++)
	{
		for(j=1;j<105;j++)
		{
			sum+=brr[j][i];
		}
		if(sum>max)
		{
			max=sum;
			flag=i;
		}
		sum=0;
	}
	printf("%d\n",flag);
	for(i=1;i<105;i++)
	{
		if(brr[i][flag]>0)
		{
			x?printf(" %d",i):printf("%d",i);
			x=1;
		}
	}
	system("pause");
	return 0;
}