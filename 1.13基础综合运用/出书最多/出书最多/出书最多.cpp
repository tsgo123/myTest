#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int num,arr[1000]={0},i,n,crr[26]={0},len,max=0,flag=0,z=0;
	char brr[1000][27]={0},ch[1]={0};
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		 getchar();
		scanf("%d %s",&arr[i],brr[i]);
		len=strlen(brr[i]);
		for(n=0;n<len;n++)
			crr[brr[i][n]-'A']++;
	}
	for(i=0;i<26;i++)
	{
		if(crr[i]>max)
		{
			max=crr[i];
			flag=i;
		}
	}
	printf("%c\n",flag+'A');
	for(i=0;i<num;i++)
	{
		len=strlen(brr[i]);
		for(n=0;n<len;n++)
		{
			if(flag+'A'==brr[i][n])
			{
				z++;
			}
		}
	}
	printf("%d\n",z);
	for(i=0;i<num;i++)
	{
		len=strlen(brr[i]);
		for(n=0;n<len;n++)
		{
			if(flag+'A'==brr[i][n])
			{
				printf("%d\n",arr[i]);
			}
		}
	}
	system("pause");
	return 0;
}