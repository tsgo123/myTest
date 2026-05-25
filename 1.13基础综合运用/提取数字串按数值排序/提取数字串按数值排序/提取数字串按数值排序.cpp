#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,n=0,m=0,len,flag=0,z,j=0,k=0,max=0,crr[310]={0};
	char arr[310]={0};
	char brr[310][12]={0};
	gets(arr);
	len=strlen(arr);
	for(i=0;i<len;i++)
	{
		if(arr[i]>='0'&&arr[i]<='9'&&flag==0)
		{
			n=i;
			flag=1;
		}
		if((arr[i]<'0'||arr[i]>'9')&&flag==1||i==len-1&&flag==1)
		{
			k=0;
			flag=0;
			m=i;
			for(z=n;z<=m;z++)
			{
				if(arr[z]>='0'&&arr[z]<='9')
					brr[j][k++]=arr[z];
			}
			j++;
		}
	}
	for(i=0;i<j;i++)
	{
		crr[i]=atoi(brr[i]);
	}
	for(i=0;i<j;i++)
	{
		max=crr[i];
		for(n=i+1;n<j;n++)
		{
			if(crr[n]<max)
			{
				max=crr[n];	max=crr[n];
				m=crr[i];
				crr[i]=crr[n];
				crr[n]=m;
			}
		}
	}
	for(i=0;i<j;i++)
		i?printf(",%d",crr[i]):printf("%d",crr[i]);
	if(j==0)
		printf("0");
	system("pause");
	return 0;
}