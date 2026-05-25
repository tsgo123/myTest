#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,n=0,len;
	char arr[210];
	gets(arr);
	len=strlen(arr);
	for(i=0;i<len;i++)
	{
		if(arr[i]!=' ')
		{
			printf("%c",arr[i]);
			n=0;
		}
		if(arr[i]==' '&&n<1)
		{
			printf("%c",arr[i]);
			n++;
		}
	}
	system("pause");
	return 0;
}