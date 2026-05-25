#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,x,y,c,d,e;
	scanf("%d",&n);
	for(x=2;x<n;x++)
	{
		y=n/x;
		if(n%x==0)
		{
			for(e=0,i=1;i<=n;i++)
			{
				c=x%i;
				d=y%i;
				if(c==0&&i!=x&&i!=1||d==0&&i!=y&&i!=1)
				{
					e++;
				}
					if(e==0&&x>=y&&n%x==0)
				{
					printf("%d",x);break;
				}
					if(e==0&&y>x&&n%x==0)
				{
					printf("%d",y);break;
				}
			}
			if(e==0&&x>=y&&n%x==0||e==0&&y>x&&n%x==0)
			{
				break;
			}
		}
	}
	system("pause");
	return 0;
}