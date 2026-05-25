#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int ISaa(long long n)
{
	int i,len=0,arr[100]={0};
	while(n!=0)
	{
		arr[len]=n%10;
		n/=10;
		len++;
	}
	for(i=0;i<len/2;i++)
	{
		if(arr[i]!=arr[len-i-1])
		{
			return 0;
		}
	}
	return 1;
}
int ISsu(long long n)
{
	long long i,k=0;
	if(n==1)
	{
		return 0;
	}
	for(i=2;i<=(sqrt)((double)(n));i++)
	{
		if(n%i==0)
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
	long long i,n,m,k=0,t;
	scanf("%lld%lld",&n,&m);
	if(n>m)
	{
		t=n;
		n=m;
		m=t;
	}
	for(i=n;i<=m;i++)
	{
		if(/*ISaa(i)&&*/ISsu(i)) 
		{
			k++;
		}
	}
	printf("%d",k);
	system("pause");
	return 0;
}