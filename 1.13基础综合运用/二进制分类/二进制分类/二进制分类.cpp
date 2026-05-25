#include<stdio.h>
#include<stdlib.h>
int IS1(int i)
{
	int n=0,a=0,b=0;
	while(i!=0)
	{
		if(i%2==0)
		{
			b++;
			i/=2;
		}
		else
		{
			a++;
			i=(i-1)/2;
		}
	}
	if(a>b)
		return 1;
	else
		return 0;
}
int main()
{
	int i,a=0,b=0;
	for(i=1;i<=1000;i++)
	{
		if(IS1(i))
			a++;
		else
			b++;
	}
	printf("%d %d",a,b);
	system("pause");
	return 0;
}