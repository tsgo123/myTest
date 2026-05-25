#include<stdio.h>
#include<stdlib.h>
int isyear(int year)
{
	if(year%4==0&&year%100!=0||year%100==0&&year%400==0&&year%3200!=0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int month(int year1,int year2,int month1,int month2,int day1,int day2)
{
	int arr[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int brr[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int i,m,total=0;
	if(year2-year1>=2)
	{
	for(i=year1+1;i<=year2-1;i++)
	{
		for(m=0;m<12;m++)
		{
			if(isyear(i))
			{
				total+=brr[m];
			}
			else
			{
				total+=arr[m];
			}
		}
	}
	}
	if(year2-year1>=1)
	{
	for(i=month1-1;i<12;i++)
	{
			if(isyear(year1))
			{
				total+=brr[i];
			}
			else
			{
				total+=arr[i];
			}
	}
	for(i=0;i<month2-1;i++)
	{
			if(isyear(year2))
			{
				total+=brr[i];
			}
			else
			{
				total+=arr[i];
			}
	}
	}
	else if(year2==year1)
	{
		for(i=month1-1;i<month2-1;i++)
		{
			if(isyear(year1))
			{
				total+=brr[i];
			}
			else
			{
				total+=arr[i];
			}
		}
	}
	total-=(day1-1);
	total+=day2-1;
	return total;
}
int main()
{
	int a,b,c,d,e,f;
	scanf("%d%d%d",&a,&b,&c);
	getchar();
	scanf("%d%d%d",&d,&e,&f);
	printf("%d",month(a,d,b,e,c,f));
	system("pause");
	return 0;
}
