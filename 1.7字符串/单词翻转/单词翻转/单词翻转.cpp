#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,n=0,len,a;
	char arr[510]={};
	gets(arr);
	len=strlen(arr);
	for(i=0;i<=len;i++)
	{
		if(arr[i]==' '||arr[i]=='\0')
		{
			for(a=i-1;a>=n;a--)
			{
				printf("%c",arr[a]);
			}
			printf(" ");
			n=i+1;
		}
	}
	system("pause");
	return 0;
}