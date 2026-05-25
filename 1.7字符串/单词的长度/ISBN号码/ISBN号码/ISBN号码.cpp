#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int m,i,n=1,len,sum=0;
	char arr[15];
	gets(arr);
	len=strlen(arr);
	for(i=0;i<len;i++)
	{
		if(arr[i]!='-'&&i!=len-1)
		{
			sum+=(arr[i]-48)*n;
			n++;
		}
	}
	m=sum%11;
	if(m+48==arr[len-1])
	{
		printf("Right");
	}
	else if(m==10&&arr[len-1]=='X')
	{
		printf("Right");
	}
	else
	{
		if(m!=10)
		{
			arr[len-1]=m+48;
			for(i=0;i<len;i++)
			{
				printf("%c",arr[i]);
			}
		}
		else
		{
			arr[len-1]='X';
			for(i=0;i<len;i++)
			{
				printf("%c",arr[i]);
			}
		}
			
	}
	system("pause");
	return 0;
}