#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,a[10],n,b=0;
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&n);
	for(i=9;i>=0;i--)
	{
		if(n+30>=a[i])
		{
			b++;
		}
	}
	printf("%d",b);
	system("pause");
	return 0;
}