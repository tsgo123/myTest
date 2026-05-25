#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char arr[210],brr[210];
	gets(arr);
	gets(brr);
	if(strstr(arr,brr)!=NULL)
	{
		printf("%s is substring of %s",brr,arr);
	}
	else if(strstr(brr,arr)!=NULL)
	{
		printf("%s is substring of %s",arr,brr);
	}
	else
	{
		printf("No substring");
	}
	system("pause");
	return 0;
}