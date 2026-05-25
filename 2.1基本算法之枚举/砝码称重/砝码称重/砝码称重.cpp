#include<stdio.h>
#include<stdlib.h>
int brr[1000000]={0};
int main()
{
	int arr[6]={0},i,a,b,c,d,e,f,max=0,count=0;
	for(i=0;i<6;i++)
	{
	  scanf("%d",&arr[i]);
	}
	for(a=0;a<=arr[0];a++)
	{
		for(b=0;b<=arr[1];b++)
		{
			for(c=0;c<=arr[2];c++)
			{
				for(d=0;d<=arr[3];d++)
				{
					for(e=0;e<=arr[4];e++)
					{
						for(f=0;f<=arr[5];f++)
						{
							if(a+b*2+c*3+d*5+e*10+f*20!=0)
								brr[a+b*2+c*3+d*5+e*10+f*20]=1;
							if(a+b*2+c*3+d*5+e*10+f*20>max)
								max=a+b*2+c*3+d*5+e*10+f*20;
						}
					}
				}
			}
		}
	}
	for(i=0;i<=max;i++)
	{
		if(brr[i]!=0)
			count++;
	}
	printf("Total=%d",count);
	system("pause");
	return 0;
}