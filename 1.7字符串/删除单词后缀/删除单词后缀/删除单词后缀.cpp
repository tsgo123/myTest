#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,len;
	char arr[40];
	scanf("%s",arr);
	len=strlen(arr);
	if(len<=2)
	{
		printf("%s",arr);
	}
	else
	{
		if(arr[len-1]=='y'&&arr[len-2]=='l')
		{
			for(i=0;i<=len-3;i++)
			{
				printf("%c",arr[i]);
			}
		}
		else if(arr[len-1]=='r'&&arr[len-2]=='e')
		{
			for(i=0;i<=len-3;i++)
			{
				printf("%c",arr[i]);
			}
		}
		else if(arr[len-1]=='g'&&arr[len-2]=='n'&&arr[len-3]=='i'&&len!=3)
		{
			for(i=0;i<=len-4;i++)
			{
				printf("%c",arr[i]);
			}
		}
		else
		{
			printf("%s",arr);
		}
	}
	system("pause");
	return 0;
}