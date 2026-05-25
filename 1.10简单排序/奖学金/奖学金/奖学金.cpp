#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,i,n,arr[310]={0},brr[310]={0},crr[310]={0},drr[310]={0},err[310]={0},frr[310]={0},max1=0,max2=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		getchar();
		scanf("%d %d %d",&brr[i],&crr[i],&drr[i]);
		arr[i]=i+1;
		err[i]=brr[i]+crr[i]+drr[i];
	}
	for(a=0;a<n;a++)
	{
		max1=0;
		max2=0;
		for(i=0;i<n;i++)
		{
			if(err[i]>max1)
			{
				max1=err[i];
				max2=brr[i];
				frr[a]=i;
			}
			else if(err[i]==max1)
			{
				if(brr[i]>max2)
				{
                   	max1=err[i];
					max2=brr[i];
					frr[a]=i;
				}
			}
		}
		err[frr[a]]=0;
	}
		for(i=0;i<5;i++)
		{
			printf("%d %d",arr[frr[i]],brr[frr[i]]+crr[frr[i]]+drr[frr[i]]);
			printf("\n");
		}
	system("pause");
	return 0;
}