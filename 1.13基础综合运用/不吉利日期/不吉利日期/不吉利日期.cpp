#include<stdio.h>
#include<stdlib.h>
int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int ISDAY5(int month1,int n)
{
	int i,sum=0;
	for(i=0;i<month1-1;i++)
	{
		sum+=month[i];
	}
	sum+=12;
	n=(n+sum%7)%7;
	if(n==5)
	{
		return 1;
	}
	else
		return 0;
}
int main()
{
	int i,n,b;
	scanf("%d",&n);
	b=n;
	for(i=0;i<12;i++)
	{
		if(ISDAY5(i+1,n))
		{
			printf("%d\n",i+1);
		}
		n=b;
	}
	system("pause");
	return 0;
}