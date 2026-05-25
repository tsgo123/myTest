#include<stdio.h>
	int main()
{
	int i,n,j,y,t,sum1=0,sum2=0,sum3=0;
	scanf("%d\n",&n);
	if(n<=17&&n>=1)
	{
		for(i=1;i<=n;i++)
	{
		scanf("%d%d%d\n",&j,&y,&t);
		sum1+=j,sum2+=y,sum3+=t;
	}
	printf("%d %d %d %d",sum1,sum2,sum3,sum1+sum2+sum3);
	}
	
	return 0;
}