#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,n=0,len,num=0;
	char arr[1100];
	gets(arr);
	len=strlen(arr);
	for(i=0;i<len;i++)
	{
		if(arr[i]!=' ')
		{
			num++;
		}
		if(arr[i]==' '&&n==0&&num!=0)
		{
			printf("%d",num);
			num=0;
			n=1;
		}
		if(arr[i]==' '&&n==1&&num!=0)
		{
			printf(",%d",num);
			num=0;
		}
		if(i==len-1&&num!=0&&n==0)
		{
			printf("%d",num);
		}
		if(i==len-1&&num!=0&&n==1)
		{
			printf(",%d",num);
		}
	}
	system("pause");
	return 0;
}