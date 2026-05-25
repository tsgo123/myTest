#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,m,arr[5100]={0},brr[5100]={0},b,crr[5100]={0},c,max,t,drr[5100]={0},z;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		getchar();
		scanf("%d%d",&arr[i],&brr[i]);
		drr[i]=brr[i];
	}
	c=(int)(m*1.5);
	for(i=0;i<n;i++)
	{
		max=brr[i];
		t=i;
		for(b=0;b<n;b++)
		{
			if(brr[b]>max)
			{
				max=brr[b];
				t=b;
			}
		}
		for(b=0;b<n;b++)
		{
			if(brr[b]==max&&b!=t&&arr[t]>arr[b])
			{
				t=b;
			}
		}
		brr[t]=0;
		crr[i]=t;
	}
	z=drr[crr[c-1]];
	printf("%d ",drr[crr[c-1]]);
	while(drr[crr[c]]==z)
	{
		c++;
	}
	printf("%d\n",c);
	for(i=0;i<c;i++)
	{
		printf("%d %d\n",arr[crr[i]],drr[crr[i]]);
	}
	system("pause");
	return 0;
}