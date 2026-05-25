#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,m,i,num=0,flag=0;
	scanf("%d",&n);
	m=n;
	i=2;
	for(i=2;i<=m;i++)
	{
		while(n%i==0)
		{
			n/=i;
			num++;
		}
		if(num>=1&&flag==0)
		{
			num-1?printf("%d^%d",i,num):printf("%d",i);
			flag=1;
		}
		else if(num>=1&&flag==1)
		{
			num-1?printf("*%d^%d",i,num):printf("*%d",i);
		}
		num=0;
	}
	system("pause");
	return 0;
}