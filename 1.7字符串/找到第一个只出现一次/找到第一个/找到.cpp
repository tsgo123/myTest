#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
char arr[100000];
int i,b,m[26]={0};
gets(arr);
b=strlen(arr);
for(i=0;i<b;i++)
{
	m[arr[i]-'a']++;
}
for(i=0;i<b;i++)
{
	if(m[arr[i]-'a']==1)
	{
		printf("%c",arr[i]);
		return 0;
	}
}
	printf("no");
	return 0;
}