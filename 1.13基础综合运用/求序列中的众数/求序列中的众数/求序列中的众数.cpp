#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char arr[130][60]={0};
char brr[130][60]={0};
void E(char *arr)
{
	int i,j,len=strlen(arr),z=0;
	if(arr[0]=='+')
	{
		for(i=0;i<len;i++)
		{
			arr[i]=arr[i+1];
		}
		z=1;
	}
	while(arr[0]=='0'&&z==1||arr[0]=='0')
		{
			for(j=0;j<len;j++)
			{
				arr[j]=arr[j+1];
			}
		}
	while(arr[1]=='0'&&arr[0]=='-')
		{
			for(j=1;j<len;j++)
			{
				arr[j]=arr[j+1];
			}
		}
	if(arr[0]=='\0'||arr[0]=='-'&&arr[1]=='\0')
	{
		arr[0]='0';
	}
}
int main()
{
	int i,n,j,max=0,len=0,flag=0,z=0,num=0,x=0,y=0;
	int crr[130]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		getchar();
		scanf("%s",arr[i]);
		E(arr[i]);
		for(j=0;j<len;j++)
		{
			if(strcmp(arr[i],brr[j])==0)
			{
				flag=1;
				crr[j]++;
				break;
			}
		}
		if(flag==0)
		{
			strcpy(brr[len],arr[i]);
			crr[len]++;
			len++;
		}
		flag=0;
	}
	for(i=0;i<len;i++)
	{
		if(crr[i]>max)
		{
			max=crr[i];
			z=i;
		}
	}
     for(i=1;i<len;i++)
	 {
		if(crr[i]!=crr[0])
		{
			y=1;
		}
    }
	if(y==1||len>1)
	{
		printf("%s",brr[z]);
	}
	else
		printf("no");
	system("pause");
	return 0;
}
