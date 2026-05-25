#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,len;
	char arr[120];
	gets(arr);
	len=strlen(arr);
	for(i=0;i<len;i++)
	{
		if(arr[i]<='z'&&arr[i]>='a')
		{
			arr[i]-=32;
		}
	}
	for(i=0;i<len;i++)
	{
		printf("%c",arr[i]);
	}
	system("pause");
	return 0;
}
