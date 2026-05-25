#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int Zheng_fu(int n,int flag)
{
	if(flag==1&&n>0)
	{
		return 1;
	}
	else if(n<0)
	{
		return 0;
	}
	else if(flag==0&&n>0)
	{
		return 2;
	}
}
int main()
{
	int i,flag=0,n,z;
	scanf("%d",&n);
	getchar();
	for(i=1;i<=n+1;i++)
	{
		scanf("%d",&z);
        if(Zheng_fu(z,flag)==1)
		{
			printf("+");
			flag=1;
			if(abs(z)==1)
			{
				if(n+1-i==0)
				{
				printf("%d",abs(z));
				}
			    else
				{
				printf("x^%d",n+1-i);
				}
			}
			else
			{
                if(n+1-i==0)
				{
				printf("%d",abs(z));
				}
				else
				printf("%dx^%d",abs(z),n+1-i);
			}
		}
		else if(Zheng_fu(z,flag)==0)
		{
			printf("-");
			flag=1;
			if(abs(z)==1)
			{
				if(n+1-i==0)
				{
				printf("%d",abs(z));
				}
				else
				printf("x^%d",n+1-i);
			}
			else
			{
                if(n+1-i==0)
				{
				printf("%d",abs(z));
				}
				else
				printf("%dx^%d",abs(z),n+1-i);
			}
		}
		else if(Zheng_fu(z,flag)==2)
		{
			flag=1;
			if(abs(z)==1)
			{
				if(n+1-i==0)
				{
				printf("%d",abs(z));
				}
				else
				printf("x^%d",n+1-i);
			}
			else
			{
                if(n+1-i==0)
				{
				printf("%d",abs(z));
				}
				else
				printf("%dx^%d",abs(z),n+1-i);
			}
		}
	}
	if(flag==0)
	{
		printf("0");
	}
	system("pause");
	return 0;
}
//100x^5-x^4+x^3-3x^2+10 -50x^3+1

//100x^5-x^4+x^3-3x^2+10 -50x^3+1