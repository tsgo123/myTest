#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int rr[26]={0};
void E(char arr[90],int rr[26])
{
	int len,i;
	len=strlen(arr);
	for(i=0;i<len;i++)
	{
		if(arr[i]<='Z'&&arr[i]>='A')
		{
			rr[arr[i]-'A']++;
		}
	}
}
int main()
{
	int i,max=0,j,t;
	char arr[90]={0},brr[90]={0},crr[90]={0},drr[90]={0};
	gets(arr);
	gets(brr);
	gets(crr);
	gets(drr);
	E(arr,rr);
	E(brr,rr);
	E(crr,rr);
	E(drr,rr);
	for(i=0;i<26;i++)
	{
		if(rr[i]>max)
		{
			max=rr[i];
		}
	}
	t=max;
	for(j=1;j<=max;j++)
	{
		for(i=0;i<26;i++)
		{
			if(rr[i]<t)
			{
				printf(" ");
			    printf(" ");
			}
			else
			{
				printf("*");
				printf(" ");
			}
		}
		printf("\n");
		t--;
	}
	printf("A B C D E F G H I J K L M N O P Q R S T U V W X Y Z");
	system("pause");
	return 0;
}