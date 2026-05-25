#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char arr[110]={0};
	int len,i,drr[110]={0},crr[110]={0},t=0,flag=0;
	gets(arr);
	len=strlen(arr);
	for(i=0;i<len;i++)
	{
		crr[i]=arr[i]-'0';
	}
	for(i=0;i<len;i++)
	{
		t=t*10+crr[i];
		drr[i]=t/13;
		t=t%13;
	}
	for(i=0;i<len;i++)
	{
		if(drr[i]!=0||flag==1)
		{
			printf("%d",drr[i]);
			flag=1;
		}
	}
	if(flag==0)
		printf("0");
	printf("\n%d",t);
	system("pause");
	return 0;
}