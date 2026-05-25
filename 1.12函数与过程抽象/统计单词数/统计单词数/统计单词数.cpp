#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char arr[1000000]={0},brr[1000000][100]={0},ch;
int crr[1000000][10]={0};
int main()
{
	int i,j=0,n=0,m=0,z=0,y=0,x=0,len,flag=0;
	gets(arr);
	len=strlen(arr);
	for(j=0;j<len;j++)
	{
		if(arr[j]>='A'&&arr[j]<='Z')
		{
			arr[j]+=32;
		}
	}
	while(scanf("%c",&ch)&&ch!='\n')
	{
		if(ch!=' ')
		{
			if(ch>='A'&&ch<='Z')
			{
				ch+=32;
			}
			brr[n][m]=ch;
			crr[n][0]=x;
			m++;
		}
		else if(ch==' ')
		{
			n++;
			m=0;
		}
		x++;
	}
	for(i=0;i<=n;i++)
	{
		if(strcmp(arr,brr[i])==NULL)
		{
			z++;
			if(y==0)
			{
				y++;
				flag=i;
			}
		}
	}
	if(z==0)
	{
		printf("%d",z-1);
	}
	else
	{
    	printf("%d %d",z,crr[flag][0]-len+1);
	}
	system("pause");
	return 0;
}