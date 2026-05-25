#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,na,nb,a[100],b[100],e=0,f=0;
	scanf("%d %d %d\n",&n,&na,&nb);
	for(i=0;i<na;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		a[na+i]=a[i];
	}
	for(i=0;i<nb;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		b[nb+i]=b[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==0&&b[i]==2||a[i]==2&&b[i]==5||a[i]==5&&b[i]==0)
		{
			e++;
		}
		else if(b[i]==0&&a[i]==2||b[i]==2&&a[i]==5||b[i]==5&&a[i]==0)
		{
			f++;
		}

	}
	if(e>f)
	{
		printf("A");
	}
	else if(e<f)
	{
		printf("B");
	}
	else
	{
		printf("draw");
	}
	system("pause");
	return 0;
}
