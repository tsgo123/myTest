#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,a,sum=0;
	scanf("%d",&n);
	for(i=1;;i++)
	{
		n=n-i;
		if(n<0)
		{
			break;
		}
		for(a=1;a<=i;a++)
		{
			sum+=i;
		}
	}
	sum=sum+(n+i)*i;
	printf("%d",sum);
	system("pause");
	return 0;
}