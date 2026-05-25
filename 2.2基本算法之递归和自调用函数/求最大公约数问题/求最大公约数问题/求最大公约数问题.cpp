#include<stdio.h>
#include<stdlib.h>
int GYs(int n,int m)
{
	int i;
	if(n>=m)
	{
		i=n%m;
		if(i==0)
		{
			return m;
		}
		else 
		{
			n=i;
			return  GYs(n,m);
		}
	}
	else
	{
		i=m%n;
		if(i==0)
		{
			return n;
		}
		else 
		{
			m=i;
			return  GYs(n,m);
		}
	}
}
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	printf("%d",GYs(n,m));
	system("pause");
	return 0;
}