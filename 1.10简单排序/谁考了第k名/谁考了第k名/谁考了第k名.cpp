#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,k,i,num=0,t=111;
	char arr[110][20]={0};
	double brr[110]={0},max=0;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		getchar();
		scanf("%s %lf",arr[i],&brr[i]);
	}
	for(num=1;num<=k;num++)
	{
		brr[t]=0;
		max=0;
		for(i=0;i<n;i++)
		{
			if(brr[i]>max)
			{
				max=brr[i];
				t=i;
			}
		}
	}
	printf("%s %g",arr[t],max);
	system("pause");
	return 0;
}