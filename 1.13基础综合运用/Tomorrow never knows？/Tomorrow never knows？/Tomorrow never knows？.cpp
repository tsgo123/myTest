#include<stdio.h>
#include<stdlib.h>
int YEAR(int n)
{
	if(n%4==0&&n%100!=0||n%400==0&&n%3200!=0)
	{
		return 1;
	}
	else
		return 0;
}
int main()
{
	int arr[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int brr[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int yea,mom,day;
	scanf("%d-%d-%d",&yea,&mom,&day);
	if(YEAR(yea))
	{
		if(day<brr[mom-1])
		{
			if(mom<10&&day+1<10)		
				printf("%d-%d%d-%d%d",yea,0,mom,0,day+1);
			else if(mom<10&&day+1>=10)
				printf("%d-%d%d-%d",yea,0,mom,day+1);
			else if(mom>10&&day+1<10)
				printf("%d-%d-%d%d",yea,mom,0,day+1);
			else
				printf("%d-%d%d-%d",yea,0,mom,day+1);
		}
		else
		{
			if(mom<12)
			{
				if(mom+1<10)
				printf("%d-%d%d-%d%d",yea,0,mom+1,0,1);
				else
					printf("%d-%d-%d%d",yea,mom+1,0,1);
			}
			else
				printf("%d-%d%d-%d%d",yea+1,0,1,0,1);
		}
	}
	else
	{
		if(day<arr[mom-1])
		{
			if(mom<10&&day+1<10)		
				printf("%d-%d%d-%d%d",yea,0,mom,0,day+1);
			else if(mom<10&&day+1>=10)
				printf("%d-%d%d-%d",yea,0,mom,day+1);
			else if(mom>10&&day+1<10)
				printf("%d-%d-%d%d",yea,mom,0,day+1);
			else
				printf("%d-%d%d-%d",yea,0,mom,day+1);
		}
		else
		{
			if(mom<12)
			{
				if(mom+1<10)
				printf("%d-%d%d-%d%d",yea,0,mom+1,0,1);
				else
					printf("%d-%d-%d%d",yea,mom+1,0,1);
			}
			else
				printf("%d-%d%d-%d%d",yea+1,0,1,0,1);
		}
	}
	system("pause");
	return 0;
}