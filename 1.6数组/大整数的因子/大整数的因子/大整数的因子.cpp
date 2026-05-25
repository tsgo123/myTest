#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char arr[40];
	int i,m[40]={0},k,n,c,z=0;
	scanf("%s",arr);
	c=strlen(arr);
	for(i=0;i<c;i++)
	{
		m[i]=arr[i]-'0';
	}
	for(k=2;k<=9;k++)
	{
		for(i=0,n=0;i<c;i++)
		{
			n=(n*10+m[i])%k;
			if(n!=0&&c-i>1)
			{
				if(i+1>=c||i==c)
				{
					break;
				}
				n=(n*10+m[i+1])%k;
				i++;
			}
		}
		if(n==0)
		{
			printf("%d ",k);
			z++;
		}
	}
	if(z==0)
	{
		printf("none");
	}
	system("pause");
	return 0;
}
