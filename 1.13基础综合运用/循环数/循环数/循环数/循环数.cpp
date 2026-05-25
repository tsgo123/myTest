#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int E(char *arr,int len,int n)
{
	int i,z;
	int err[70]={0};
	char crr[150]={0},drr[70]={0};
	for(i=0;i<len;i++)
	{
		err[i]=(arr[i]-'0')*n;
	}
	for(i=0;i<len;i++)
	{
		err[i+1]+=err[i]/10;
		err[i]%=10;
	}
	while(err[i]>0)
	{
		err[i+1]+=err[i]/10;
		err[i]%=10;
		i++;
	}
	for(z=0;z<i;z++)
	{
		drr[z]=err[z]+'0';
	}
	strcpy(crr,drr);
	strcat(crr,drr);
	if(strstr(crr,arr)!=NULL)
	{
		return 1;
	}
	else
		return 0;
}
int main()
{
	char brr[70]={0};
	char arr[70]={0};
	int i,len;
	gets(brr);
	len=strlen(brr);
	for(i=len-1;i>=0;i--)
	{
		arr[len-1-i]=brr[i];
	}
	for(i=1;i<=len;i++)
	{
		if( !E(arr,len,i))
		{
			printf("0");
			system("pause");
			return 0;
		}
	}
	printf("1");
	system("pause");
	return 0;
}