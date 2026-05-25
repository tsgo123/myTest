#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int mon1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int mon2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
char days[7][10]={"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
int ISyear(int n)
{
	if(n%4==0&&n%100!=0||n%400==0)
	{
		return 0;
	}
	else
		return 1;
}
int main()
{
    int i,n,j,num=0,day=1;
	scanf("%d",&n);
	for(i=2000;;i++)
	{
		for(j=0;j<12;j++)
		{
			if(ISyear(i))
			{
				if(num+mon1[j]<n+1)
				{
					num+=mon1[j];
				}
				else
				{
					while(num!=n)
					{
						num++;
						day++;
					}
					printf("%d-%02d-%02d %s",i,j+1,day,days[(num)%7]);
						system("pause");
	                     return 0;
				}
			}
			else
			{
				if(num+mon2[j]<n+1)
				{
					num+=mon2[j];
				}
				else
				{
					while(num!=n)
					{
						num++;
						day++;
					}
					printf("%d-%02d-%02d %s",i,j+1,day,days[(num)%7]);
						system("pause");
	                    return 0;
				}
			}
		}
	}
}