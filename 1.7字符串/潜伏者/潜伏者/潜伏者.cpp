#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,n=0,len,len2;
	char arr[101]={},brr[101]={},crr[101]={},drr[25]={0},err[101]={};
	scanf("%s%s%s",arr,brr,crr);
	len=strlen(arr);
	len2=strlen(crr);
	if(len<26)
	{
		printf("Failed");
		system("pause");
		return 0;
	}
	else
	{
		for(i=0;i<len;i++)
		{
			drr[arr[i]-65]++;
		}
		for(i=0;i<26;i++)
		{
			if(drr[i]!=0)
			{
				n++;
			}
		}
		if(n!=26)
		{
			printf("Failed");
			system("pause");
			return 0;
		}
		else
		{
			for(i=0;i<len;i++)
			{
				for(n=i;n<len;n++)
				{
					if(arr[i]!=arr[n]&&brr[i]==brr[n]||arr[i]==arr[n]&&brr[i]!=brr[n])
					{
						printf("Failed");
						system("pause");
						return 0;
					}
				}
			}
			for(i=0;i<len;i++)
			{
				for(n=0;n<len2;n++)
				{
					if(arr[i]==crr[n])
					{
						err[n]=brr[i];
					}
				}
			}
			for(i=0;i<len2;i++)
			{
				printf("%c",err[i]);
			}
		}
	}
	system("pause");
	return 0;
}