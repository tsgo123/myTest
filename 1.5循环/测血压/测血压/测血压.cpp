#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,a,b,t=0,maxt=0,max;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d%d",&a,&b);
		if(a<=140&&a>=90&&b<=90&&b>=60)
		{
			t++;
			if(t>maxt)
			{
				maxt=t;
			}
		}
		else
		{
			t=0;
		}
	}
	printf("%d",maxt);
	system("pause");
	return 0;
}