#include<stdio.h>
#include<stdlib.h>
int SUM1(int n,int a,int str)
{
	if(n<=0)
		return 0;
	if(n==1)
		return str;
	if(n==2)
		return a;
	else
		return SUM1(n-1,a,str)+SUM1(n-2,a,str);
}
int MOST(int n,int a,int str)
{
	int i,most=0;
	for(i=1;i<=n;i++)
	{
		most+=SUM1(i,a,str);
	}
	return most;
}
int main()
{
	int a,str,plat,sum,n;
	scanf("%d%d%d%d",&str,&plat,&sum,&n);
    if(n==plat)
		printf("0");
	else
	{
		for(a=0;;a++)
		{
			if(MOST(plat-1,a,str)-MOST(plat-2,a,str)+str-a==sum)
			{
				break;
			}
		}
		printf("%d",MOST(n,a,str)-MOST(n-1,a,str)+str-a);
	}
	system("pause");
	return 0;
}