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
int monthhow(int year,int month)
{
	int arr[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int brr[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	if(isyear(year))
	{
		return brr[month-1];
	}
	else
	{
		return arr[month-1];
	}
}
int momthday11(int year,int month)
{
	int i,total=0,b,n=1;
	int arr[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int brr[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	for(i=1900;i<year;i++)
	{
		for(b=0;b<12;b++)
		{
			if(isyear(i))
			{
				total+=brr[b];
			}
			else
			{
				total+=arr[b];
			}
		}
	}
	for(i=0;i<month-1;i++)
	{
			if(isyear(year))
			{
				total+=brr[i];
			}
			else
			{
				total+=arr[i];
			}
	}
	n=(1+total%7)%7;
	return n;
}
int printfyueli(int year,int month)
{
	int i,n=0,b,c;
	printf("Sun Mon Tue Wed Thu Fri Sat\n");
	c=momthday11(year,month);
	for(i=0;i<c;i++)
	{
		n?printf("    "):printf("   ");
		n++;
	}
	b=monthhow(year,month);
	for(i=1;i<=b;i++)
	{
		n?printf("%4d",i):printf("%3d",i);
		n++;
		if(n==7)
		{
			printf("\n");
			n=0;
		}
	}
	printf("\n");
	return 0;

}
int main()
{
	int year,month;
	scanf("%d%d",&year,&month);
	printfyueli(year,month);
	system("pause");
	return 0;
}