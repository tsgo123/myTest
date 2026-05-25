#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char brr[40]={'m','a','l','e'};
int Ismale(char crr[40])
{
	if(strcmp(crr,brr)==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n,i=0,j=0,m,t;
	double a,arr[40]={0},drr[40]={0};
	char crr[40]={0};
	scanf("%d",&n);
	for(m=1;m<=n;m++)
	{
		getchar();
		scanf("%s %lf",crr,&a);
		if(Ismale(crr))
		{
			arr[i]=a;
			i++;
		}
		else
		{
			drr[j]=a;
			j++;
		}
	}
	for(m=0;m<i;m++)
	{
		a=arr[m];
		t=m;
		for(n=m+1;n<i;n++)
		{
			if(arr[n]<a)
			{
				a=arr[n];
				t=n;
			}
		}
		arr[t]=arr[m];
		arr[m]=a;
	}
	for(m=0;m<j;m++)
	{
		a=drr[m];
		t=m;
		for(n=m+1;n<j;n++)
		{
			if(drr[n]>a)
			{
				a=drr[n];
				t=n;
			}
		}
		drr[t]=drr[m];
		drr[m]=a;
	}
	for(m=0;m<i;m++)
	{
		printf("%.2lf ",arr[m]);
	}
	for(m=0;m<j;m++)
	{
		printf("%.2lf ",drr[m]);
	}
	system("pause");
	return 0;
}