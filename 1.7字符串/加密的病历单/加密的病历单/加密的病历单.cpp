#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,len;
	char arr[60];
	gets(arr);
	len=strlen(arr);
	for(i=0;i<len;i++)
	{
		if(arr[i]<='w'&&arr[i]>='a'||arr[i]<='W'&&arr[i]>='A')
		{
			arr[i]+=3;
		}
		else if(arr[i]<='z'&&arr[i]>='x'||arr[i]<='Z'&&arr[i]>='X')
		{
			arr[i]-=23; 
		}
	}
	for(i=0;i<len;i++)
	{
		if(arr[i]<='z'&&arr[i]>='a')
		{
			arr[i]-=32;
		}
		else if(arr[i]<='Z'&&arr[i]>='A')
		{
			arr[i]+=32;
		}
	}
	for(i=len-1;i>=0;i--)
	{
		printf("%c",arr[i]);
	}
	system("pause");
	return 0;
}