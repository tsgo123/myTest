#include<stdio.h>
int main()
{
	int n,i=1,j=1,count=1,flag=0;
	scanf("%d",&n);
	while(1)
	{
		if(count==n)
		{
			printf("%d/%d",i,j);
			break;
		}
		else if(flag==0&&i-1==0)
		{
			count++;
			j++;
			flag=1;
		}
		else if(flag==1)
		{
			count++;
			j--;
			i++;
			if(j-1==0)
			{
				flag=2;
			}
		}
		else if(flag==2&&j-1==0)
		{
			i++;
			count++;
			flag=3;
		}
		else if(flag==3)
		{
			i--;
			j++;
			count++;
			if(i-1==0)
			{
				flag=0;
			}
		}
	}
	return 0;
}