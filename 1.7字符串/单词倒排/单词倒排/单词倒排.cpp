#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,n,len,a;
	char arr[110]={};
	gets(arr);
	len=strlen(arr);
	n=len-1;
	for(i=len-1;i>=0;i--)
	{
		if(arr[i]==' '||i==0)
		{
			if(arr[i]==' ')
			{
				for(a=i+1;a<=n;a++)
				{
					printf("%c",arr[a]);
				}
				printf(" ");
				n=i-1;
			}
			else
			{
				for(a=i;a<=n;a++)
				{
					printf("%c",arr[a]);
				}
			}
		}
	}
	system("pause");
	return 0;
}
