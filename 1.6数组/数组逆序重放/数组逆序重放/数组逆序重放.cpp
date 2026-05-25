#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,a[100],b[100],n,c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(c=n-1,i=0;i<n;i++,c--)
	{
		b[c]=a[i];
	}
	for(c=0;c<n;c++)
	{
		if(c==0)
		{
			printf("%d",b[c]);
		}
		else
		{
			printf(" %d",b[c]);
		}
	}
	system("pause");
	return 0;
}