#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,arr[110][110]={0},m,i,j=0,k=0,l,z=0,sum=0,a,b,c=0,x=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		getchar();
		for(m=0;m<n;m++)
		{
			scanf("%d",&arr[i][m]);
		}
	}
	for(i=0;i<n;i++)
	{
		sum=0;
		for(m=0;m<n;m++)
		{
			sum+=arr[i][m];
		}
		if(sum%2!=0)
		{
			k=i;
			j++;
			sum=0;
			z=1;
		}
	}
	for(b=0;b<n;b++)
	{
		sum=0;
		for(a=0;a<n;a++)
		{
			sum+=arr[a][b];
		}
		if(sum%2!=0)
		{
			l=b;
			c++;
			x=1;
		}
	}
	if(z==0&&x==0)
	{
		printf("OK");
	}
	else if(z==1&&x==1&&j==1&&c==1)
	{
		printf("%d %d",k+1,l+1);
	}
	else
	{
		printf("Corrupt");
	}
	system("pause");
	return 0;
}