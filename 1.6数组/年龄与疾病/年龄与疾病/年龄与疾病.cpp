#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[100],i,n;
	float c=0,d=0,e=0,f=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<=18&&a[i]>=0)
		{
			c++;
		}
		if(a[i]<=35&&a[i]>=19)
		{
			d++;
		}
		if(a[i]<=60&&a[i]>=36)
		{
			e++;
		}
		if(a[i]>=61)
		{
			f++;
		}
	}
	printf("%.2f%%\n%.2f%%\n%.2f%%\n%.2f%%",c/n*100,d/n*100,e/n*100,f/n*100);
	system("pause");
	return 0;
}