#include<stdio.h>
#include<stdlib.h>
int arr[32]={0};
int main()
{
	long long n,i=0,flag=0;
	scanf("%lld",&n);
	if(n+2147483648==0)
	{
		printf("10000000000000000000000000000000");
		system("pause");
		return 0;
	}
	if(n==0)
	{
		printf("00000000000000000000000000000000");
		system("pause");
		return 0;
	}
	if(n<0)
	{
		n=-n;
		flag=1;
	}
	while(n!=1)
	{
		if(n%2==0)
		{
			arr[i]=0;
			i++;
			n/=2;
		}
		else
		{
			arr[i]=1;
			i++;
			n=(n-1)/2;
		}
	}
	arr[i]=1;
	if(flag==1)
	{
		arr[31]=1;
		for(i=0;i<31;i++)
		{
			if(arr[i]==1)
				arr[i]=0;
			else
				arr[i]=1;
		}
		arr[0]+=1;
		for(i=0;i<32;i++)
		{
			arr[i+1]+=arr[i]/2;
			arr[i]%=2;
		}
	}
	for(i=31;i>=0;i--)
		printf("%d",arr[i]);
	system("pause");
	return 0;
}