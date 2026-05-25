#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,len,n;
	char arr[101]={},brr[101]={};
	gets(arr);
	len=strlen(arr);
	for(i=0,n=len-1;i<len;i++,n--)
	{
		brr[n]=arr[i];
	}
	if(strcmp(arr,brr)==0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	system("pause");
	return 0;
}