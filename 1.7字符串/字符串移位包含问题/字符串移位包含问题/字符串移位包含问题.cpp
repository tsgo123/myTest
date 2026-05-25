#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,len1,len2;
	char arr[50],brr[50],crr[500];
	scanf("%s %s",arr,brr);
	len1=strlen(arr);
	len2=strlen(brr);
	if(len1>=len2)
	{
	if(strstr(arr,brr)!=NULL)
	{
		printf("true");
		system("pause");
		return 0;
	}
	strcpy(crr,arr);
	for(i=1;i<len1;i++)
	{
		strcat(crr,arr);
		if(strstr(crr,brr)!=NULL)
		{
			printf("true");
			system("pause");
			return 0;
		}
	}
	printf("false");
	system("pause");
	return 0;
	}
	else if(len1<len2)
	{
	if(strstr(brr,arr)!=NULL)
	{
		printf("true");
		system("pause");
		return 0;
	}
	strcpy(crr,brr);
	for(i=1;i<len2;i++)
	{
		strcat(crr,brr);
		if(strstr(crr,arr)!=NULL)
		{
			printf("true");
			system("pause");
			return 0;
		}
	}
	printf("false");
	system("pause");
	return 0;
	}
}