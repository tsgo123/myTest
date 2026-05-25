#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int PING(int n)
{
	double k=(sqrt)((double)(n));
	if((int)(k)==k)
	{
		return 1;
	}
	else
		return 0;
}
int SAME(int n)
{
	int i,j,k;
	int arr[5]={0};
	for(i=0;n!=0;i++)
	{
		arr[i]=n%10;
		n/=10;
	}
	for(j=0;j<i;j++)
	{
		for(k=j+1;k<i;k++)
		{
			if(arr[k]==arr[j])
			{
				return 1;
			}
		}
	}
	return 0;
}
int main()
{
	int i=100,n,num=0;
	scanf("%d",&n);
	while(num!=n)
	{
		if(PING(i)&& SAME(i))
		{
			num++;
		}
		i++;
	}
	printf("%d",i-1);
	system("pause");
	return 0;
}