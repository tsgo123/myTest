#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,n=0,m=0;
	char arr[100][101]={},brr[101]={},crr[101]={},ch;
	while(scanf("%c",&ch)&&ch!='\n')
	{
		if(ch!=' ')
		{
			arr[n][m]=ch;
			m++;
		}
		else
		{
			n++;
			m=0;
		}
	}
	gets(brr);
	gets(crr);
	for(i=0;i<=n;i++)
	{
		if(strcmp(arr[i],brr)==0)
		{
			strcpy(arr[i],crr);
		}
	}
	for(i=0;i<=n;i++)
	{
		printf("%s",arr[i]);
		printf(" ");
	}
	system("pause");
	return 0;
}

