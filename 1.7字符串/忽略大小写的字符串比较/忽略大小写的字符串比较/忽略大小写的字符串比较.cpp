#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,len1,len2;
	char arr[90],brr[90];
	gets(arr);
	gets(brr);
	len1=strlen(arr);
	len2=strlen(brr);
	for(i=0;i<len1;i++)
	{
		if(arr[i]<='Z'&&arr[i]>='A')
		{
			arr[i]+=32;
		}
	}
	for(i=0;i<len2;i++)
	{
		if(brr[i]<='Z'&&brr[i]>='A')
		{
			brr[i]+=32;
		}
	}
	if(strcmp(arr,brr)>0)
	{
		printf(">");
	}
	else if(strcmp(arr,brr)<0)
	{
		printf("<");
	}
	else
	{
		printf("=");
	}
	system("pause");
	return 0;
}