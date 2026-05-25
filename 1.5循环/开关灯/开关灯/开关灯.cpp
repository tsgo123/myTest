#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,a,n,m,c,d=0;
	scanf("%d %d",&n,&m);
	printf("1");
	for(i=2;i<=n;i++)
	{
		for(a=1,d=0;a<=m;a++)
		{
			c=i%a;
			if(c==0)
			{
				d++;
			}
		}
		if(d%2!=0)
		{
			printf(",%d",i);
		}

	}

	system("pause");
	return 0;
}