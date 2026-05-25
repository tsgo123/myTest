#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char arr[110]={0},brr[110]={0};
	int len,i,j,crr[26]={0},drr[26]={0},flag=0;
	gets(arr);
	gets(brr);
	len=strlen(arr);
	for(i=0;i<len;i++)
		crr[arr[i]-'A']++;
	for(i=0;i<len;i++)
		drr[brr[i]-'A']++;
	for(i=0;i<26;i++)
	{
		for(j=0;j<26;j++)
		{
			if(drr[j]==crr[i])
			{
				drr[j]=0;
				crr[i]=0;
				break;
			}
		}
	}
	for(i=0;i<26;i++)
	{
		if(drr[i]!=0)
			flag=1;
	}
	if(flag==0)
		printf("YES");
	else
		printf("NO");
	system("pause");
	return 0;
}