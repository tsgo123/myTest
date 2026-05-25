#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,n,len;
	char arr[260];
	gets(arr);
	len=strlen(arr);
	for(i=0;i<len;i++)
	{
		if(arr[i]=='A')
		{
			arr[i]='T';
		}
		else if(arr[i]=='T')
		{
			arr[i]='A';
		}
		else if(arr[i]=='G')
		{
			arr[i]='C';
		}
		else 
		{
			arr[i]='G';
		}
	}
	for(i=0;i<len;i++)
	{
		printf("%c",arr[i]);
	}
	system("pause");
	return 0;
}