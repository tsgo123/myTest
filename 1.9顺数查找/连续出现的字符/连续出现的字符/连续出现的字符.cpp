#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int len,n,i,k,num=0,z=0;
	char arr[10000]={0};
	scanf("%d",&k);
	getchar();
	gets(arr);
	len=strlen(arr);
	for(i=0;i<len;i++)
	{
		if(arr[i]==arr[i+1])
		{
			n=i;
			while(arr[i]==arr[n+1]&&n<len)
			{
				n++;
				num++;
			}
			if(num+1>=k)
			{
				printf("%c",arr[i]);
				z=1;
				break;
			}
			num=0;
			i=n-1;
		}
	}
	if(z==0)
	{
		printf("No");
	}
	system("pause");
	return 0;
}