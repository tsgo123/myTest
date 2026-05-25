#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,a[1000]={0},b[1000]={0},sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=a[i]*b[i];
	}
	printf("%d",sum);
	system("pause");
	return 0;
}