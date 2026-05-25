#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int arr[11000000]={0};
int ISSU(int i)
{
	int n,k=0;
	for(n=2;n<=sqrt((double)(i));n++)
	{
		if(i%n==0)
		{
			k=1;
			break;
		}
	}
	if(k==0)
	{
		return 1;
	}
	else
		return 0;
}
int main()
{
	int i=0,n,a=0,b=0,c=0,d=0,e=0,k=0;
	scanf("%d",&n);
	if(n==1)
	{
		for(a=2;a<=9;a++)
		{
			if(ISSU(a))
			{
				arr[k]=a;
				k++;
			}
		}
	}
	else if(n==2)
	{
		for(a=1;a<=9;a++)
		{
			if(ISSU(a*10+a))
			{
				arr[k]=a*10+a;
				k++;
			}
		}
	}
	else if(n==3)
	{
		for(a=1;a<=9;a++)
		{
			for(b=0;b<=9;b++)
			{
            if(ISSU(a*100+b*10+a))
			{
				arr[k]=a*100+b*10+a;
				k++;
			}
			}
		}
	}
	else if(n==5)
	{
		for(a=1;a<=9;a++)
		{
			for(b=0;b<=9;b++)
			{
				for(c=0;c<=9;c++)
				{
            if(ISSU(a*10000+b*1000+c*100+b*10+a))
			{
				arr[k]=a*10000+b*1000+c*100+b*10+a;
				k++;
			}
				}
			}
		}
	}
	else if(n==7)
	{
		for(a=1;a<=9;a++)
		{
			for(b=0;b<=9;b++)
			{
				for(c=0;c<=9;c++)
				{
					for(d=0;d<=9;d++)
					{
            if(ISSU(a*1000000+b*100000+c*10000+d*1000+c*100+b*10+a))
			{
				arr[k]=a*1000000+b*100000+c*10000+d*1000+c*100+b*10+a;
				k++;
			}
					}
				}
			}
		}
	}
	else if(n==9)
	{
		for(a=1;a<=9;a++)
		{
			for(b=0;b<=9;b++)
			{
				for(c=0;c<=9;c++)
				{
					for(d=0;d<=9;d++)
					{
						for(e=0;e<=9;e++)
            if(ISSU(a*100000000+b*10000000+c*1000000+d*100000+e*10000+d*1000+c*100+b*10+a))
			{
				arr[k]=a*100000000+b*10000000+c*1000000+d*100000+e*10000+d*1000+c*100+b*10+a;
				k++;
			}
					}
				}
			}
		}
	}
	printf("%d\n",k);
	for(i=0;i<k;i++)
	{
		printf("%d ",arr[i]);
	}
	system("pause");
	return 0;
}