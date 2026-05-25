#include<stdio.h>
int main()
{
	int n,x,y,a,b;
	scanf("%d %d %d",&n,&x,&y);
    a=y/x;
	b=y%x;
	if(a<=n&&b==0)
	{
		printf("%d",n-y/x);
	}
	if(a<n&&b!=0)
	{
		printf("%d",n-y/x-1);
	}
	if(a>n&&b!=0||a==n&&b!=0||a>n&&b==0)
	{
		printf("0");
	}
	return 0;
}