#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,b,a,c,e=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		b=i;
		for(a=1;b!=0;a++)
		{
			c=b%10;
			b=b/10;
			if(c==1)
			{
				e++;
			}
		}
	}
	printf("%d",e);
	system("pause");
	return 0;
}