#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int ISsu(int n)
{
	int i,flag=0;
	for(i=2;i<=sqrt(n*1.0);i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
		return 1;
	else
		return 0;
}
int MAX(int n)
{
	int i;
	int max=1;
	for(i=2;i<=n;i++)
	{
		if(n%i==0&&ISsu(i)&&i>max)
		{
			max=i;
		}
	}
	return max;
}
int main()
{
	int i,n,m;
	scanf("%d%d",&n,&m);
	for(i=n;i<=m;i++)
	{
		(i-n)?printf(",%d",MAX(i)):printf("%d",MAX(i));
	}
	system("pause");
	return 0;
}