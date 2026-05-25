#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,n=0,max=0,len,min=101,j,k,a,b,c,d,l,m;
	char arr[40000];
	gets(arr);
	len=strlen(arr);
	for(i=0;i<len;i++)
	{
		if(arr[i]!=' '&&arr[i]!=','&&n==0)
		{
			a=i;
			j=i;
			n=1;
		}
		if(arr[i]==' '||arr[i]==','||n==1&&i==len-1)
		{
			if(n==1)
			{
				b=i;
				k=i;
			}
			n=0;
			if(i==len-1)
			{
				b+=1;
				k+=1;
			}
			if(k-j>max)
			{
				max=k-j;
				m=k;
				l=j;
			}
			if(b-a<min)
			{
				min=b-a;
				c=a;
				d=b;
			}
		}
	}
	for(i=l;i<m;i++)
	{
		printf("%c",arr[i]);
	}
	printf("\n");
	for(i=c;i<d;i++)
	{
		printf("%c",arr[i]);
	}
	system("pause");
	return 0;
}