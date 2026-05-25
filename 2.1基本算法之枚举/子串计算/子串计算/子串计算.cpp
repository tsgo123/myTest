#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char brr[1000000][101]={0},err[1000000][101]={0};
int crr[10000000]={0},frr[10000000]={0};
int main()
{
	int len,i,j=0,n,m,z,num=0,flag=0,x=0;
	char arr[101]={0},drr[101]={0};
	gets(arr);
	len=strlen(arr);
	for(z=1;z<=len-1;z++)
	{
		for(i=0;i<len-z+1;i++)
		{
			n=0;
			flag=0;
			for(j=i;j<i+z;j++)
			{
				drr[n++]=arr[j];
			}
			for(m=0;m<num;m++)
			{
				if(strcmp(brr[m],drr)==0)
				{
					crr[m]++;
					flag=1;
				}
			}
			if(flag==0)
			{
				strcpy(brr[num],drr);
				crr[num]++;
				num++;
			}
		}
	}
	j=0;
	for(n=0;n<num;n++)
	{
		if(crr[n]>=2)
		{
			strcpy(err[j],brr[n]);
			frr[j]=crr[n];
			j++;
		}
	}
	for(i=0;i<j;i++)
	{
		for(x=i+1;x<j;x++)
		{
			if(strcmp(err[i],err[x])>0)
			{
				strcpy(drr,err[i]);
				strcpy(err[i],err[x]);
				strcpy(err[x],drr);
				flag=frr[i];
				frr[i]=frr[x];
				frr[x]=flag;
			}
		}
	}
	for(i=0;i<j;i++)
	{
		printf("%s %d\n",err[i],frr[i]);
	}
	system("pause");
	return 0;
}