#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,len;
	char arr[25];
	scanf("%s",arr);
	len=strlen(arr);
	if(arr[0]<='9'&&arr[0]>='0')
	{
		printf("no");
		system("pause");
		return 0;
	}
	for(i=0;i<len;i++)
	{
		if(arr[i]<='9'&&arr[i]>='0'||arr[i]<='z'&&arr[i]>='a'||arr[i]<='Z'&&arr[i]>='A'||arr[i]=='_')
		{
		}
		else
		{
			printf("no");
			system("pause");
			return 0;
		}
	}
	printf("yes");
	system("pause");
	return 0;
}