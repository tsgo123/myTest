#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,len;
	char arr[85];
	gets(arr);
	len=strlen(arr);
	for(i=0;i<len;i++)
	{
		if(arr[i]<'z'&&arr[i]>='a'||arr[i]<'Z'&&arr[i]>='A')
		{
			arr[i]+=1;
		}
		else if(arr[i]=='z'||arr[i]=='Z')
		{
			arr[i]-=25;
		}
	}
	for(i=0;i<len;i++)
	{
		printf("%c",arr[i]);
	}
	system("pause");
	return 0;
}