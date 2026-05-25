#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,n,brr[110]={0},crr[110]={0},a,j=0,k=0,max=0,t;
	char arr[11],drr[110][11]={0},err[110][11]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		getchar();
		scanf("%s %d",arr,&a);
		if(a>=60)
		{
			brr[j]=a;
			strcpy(drr[j],arr);
			j++;
		}
		else
		{
			crr[k]=a;
			strcpy(err[k],arr);
			k++;
		}
	}
	for(i=0;i<j;i++)
	{
		max=0;
		t=0;
		for(a=0;a<j;a++)
		{
			if(brr[a]>max)
			{
				max=brr[a];
				t=a;
			}
		}
		brr[t]=0;
		printf("%s\n",drr[t]);
	}
	for(i=0;i<k;i++)
	{
		printf("%s\n",err[i]);
	}
	system("pause");
	return 0;
}
