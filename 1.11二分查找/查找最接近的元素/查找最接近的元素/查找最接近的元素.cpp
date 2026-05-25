#include<stdio.h>
#include<stdlib.h>
#include<math.h>
long long arr[100001]={0};
int main()
{
	long long n,m,i,a,b,c;
	scanf("%lld",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		scanf("%lld",&arr[i]);
	}
	getchar();
	scanf("%lld",&m);
	for(i=0;i<m;i++)
	{
		getchar();
		scanf("%lld",&a);
		if(a>=arr[n-1])
		{
		   printf("%lld\n",arr[n-1]);
		}
		else if(a<arr[0])
		{
		   printf("%lld\n",arr[0]);
		}
		else
		{
		for(b=0;b<n;b++)
		{
			if(a<arr[b+1]&&a>=arr[b])
			{
				if(abs(a-arr[b+1])<abs(a-arr[b]))
				{
					printf("%lld\n",arr[b+1]);
				}
				else
				{
					printf("%lld\n",arr[b]);	
				}
			}
		}
		}
	}
	system("pause");
	return 0;
}