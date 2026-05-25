#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,len;
	char arr[40],swich,end;
	scanf("%s",arr);
	getchar();
	scanf("%c %c",&swich,&end);
	len=strlen(arr);
	for(i=0;i<len;i++)
	{
		if(arr[i]==swich)
		{
			arr[i]=end;
		}
	}
	for(i=0;i<len;i++)
	{
		printf("%c",arr[i]);
	}
	system("pause");
	return 0;
}