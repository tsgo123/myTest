#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,m,n,x;
	scanf("%d %d %d",&m,&n,&x);
	for(i=1;;i++)
	{
		if(m%n!=0)
		{
			x=x-m/n-1;
			if(x<0)
			{
				break;
			}
		}
		else
		{
			x=x-m/n;
			if(x<0)
			{
				break;
			}
		}
		n=n+m/n;
	}
		printf("%d",n);
	system("pause");
	return 0;
}