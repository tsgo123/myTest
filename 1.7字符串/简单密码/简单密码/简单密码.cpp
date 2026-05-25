#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,len;
	char arr[250];
	gets(arr);
	len=strlen(arr);
	for(i=0;i<len;i++)
	{
		if(arr[i]<='Z'&&arr[i]>='F')
		{
			arr[i]-=5;
		}
		else if(arr[i]>='A'&&arr[i]<='E')
		{
			arr[i]+=21;
		}
	}
	for(i=0;i<len;i++)
	{
		printf("%c",arr[i]);
	}
	system("pause");
	return 0;
}