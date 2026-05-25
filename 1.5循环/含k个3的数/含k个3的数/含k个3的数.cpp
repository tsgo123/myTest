#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,m,k,b,a=0,n;
	scanf("%d %d",&m,&k);
	n=m;
	for(i=1;m!=0;i++)
	{
		b=m%10;
		m=m/10;
		if(b==3)
		{
			a++;
		}
	}
	if(n%19==0&&a==k)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	system("pause");
	return 0;
}