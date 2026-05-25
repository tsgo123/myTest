#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int ISsushu(int n)
{
	if(n==0)
	{
		return -1;
	}
	else if(n-1==0)
	{
		return 1;
	}
	else if(n-2==0)
	{
	  return 2;
	}
	else
	{
		return ISsushu(n-1)+ISsushu(n-2);
	}
}
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
	printf("%d\n", ISsushu(n));
	}
	system("pause");
	return 0;
}