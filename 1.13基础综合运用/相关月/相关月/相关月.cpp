#include<stdio.h>
#include<stdlib.h>
int day1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int day2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
int ISyear(int n)
{
	if(n%4==0&&n%100!=0||n%400==0)
		return 0;
	else
		return 1;
}
int DAY(int year,int n,int m)
{
	int z,day=0;
	if(n>m)
	{
		z=n;
		n=m;
		m=z;
	}
	if( ISyear(year))
	{
		for(z=n-1;z<m-1;z++)
			day+=day1[z];
	}
	else
	{
		for(z=n-1;z<m-1;z++)
			day+=day2[z];
	}
	return day;
}
int main()
{
	int num,year,n,m,z;
	scanf("%d",&num);
	while(num--)
	{
		scanf("%d%d%d",&year,&n,&m);
		z=DAY(year,n,m);
		if(z%7==0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	system("pause");
	return 0;
}