#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int SWICH(int n,int z)
{
	int arr[50]={0},i=0,sum=0,j;
	while(n!=0)
	{
		arr[i]=n%10;
		i++;
		n/=10;
	}
    for(j=0;j<i;j++)
	{
		sum+=arr[j]*pow((double)(z),j);
	}
	return sum;
}
int MAX(int n)
{
	int i=0,sum=0,max=0;
	while(n!=0)
	{
		i=n%10;
		n/=10;
		if(i>max)
			max=i;
	}
	return max;
}
int main()
{
	int n,m,d,z,flag=0,x;
	scanf("%d%d%d",&n,&m,&d);
	x=MAX(n);
	if(MAX(m)>x)
		x=MAX(m);
	if(MAX(d)>x)
		x=MAX(d);
	for(z=x+1;z<20;z++)
	{
		if(SWICH(n,z)*SWICH(m,z)==SWICH(d,z))
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		printf("%d",z);
	else
		printf("0");
	system("pause");
	return 0;
}