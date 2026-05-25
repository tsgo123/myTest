#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int ISsu(int n)
{
	int i,flag=0;
	for(i=2;i<=sqrt(n*1.0);i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		return 1;
	}
	else
		return 0;
}
int FANSHU(int n)
{
	char arr[10]={0};
	int m,i;
	for(i=0;n!=0;i++)
	{
		arr[i]=n%10+'0';
		n/=10;
	}
	m=atoi(arr);
	return m;
}
int main()
{
	int n,m,i,flag=0;
	scanf("%d%d",&n,&m);
	for(i=n;i<=m;i++)
	{
		if(ISsu(i)&&ISsu(FANSHU(i))&&flag==0)
		{
			printf("%d",i);
			flag=1;
		}
		else if(ISsu(i)&&ISsu(FANSHU(i))&&flag==1)
		{
			printf(",%d",i);
		}
	}
	if(flag==0)
	{
		printf("No");
	}
	system("pause");
	return 0;
}