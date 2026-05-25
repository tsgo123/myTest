#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,len,n;
	char arr[105];
	gets(arr);
	len=strlen(arr);
	n=arr[0];
	for(i=0;i<len;i++)
	{
		if(i==len-1)
		{
			arr[i]+=n;
			break;
		}
		arr[i]+=arr[i+1];
	}
	for(i=0;i<len;i++)
	{
		printf("%c",arr[i]);
	}
	system("pause");
	return 0;
}