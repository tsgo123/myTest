#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int ISbig(char a)
{
	if(a>='A'&&a<='Z')
	{
		a+=32;
		return 1;
	}
	else
		return 0;
}
char BIG(char a)
{
	if( ISbig(a))
	{
		a+=32;
		return a;
	}
	else
	return a;
}
int main()
{
	char arr1[1100]={0},arr2[1100]={0},arr3[110]={0};
	int n=0,i,len3,len2;
	gets(arr3);
	len3=strlen(arr3);
	gets(arr2);
	len2=strlen(arr2);
	for(i=0;i<len2;i++)
	{
		if(n==len3)
		{
			n=0;
		}
		if(ISbig(arr2[i]))
		{
			arr1[i]=(BIG(arr2[i])-97)-(BIG(arr3[n])-97);
			if(arr1[i]<0)
			{
				arr1[i]+=26;
			}
			arr1[i]+=97;
			n++;
			arr1[i]-=32;
		}
		else if(!ISbig(arr2[i]))
		{
            arr1[i]=(BIG(arr2[i])-97)-(BIG(arr3[n])-97);
			if(arr1[i]<0)
			{
				arr1[i]+=26;
			}
			arr1[i]+=97;
			n++;
		}
	}
	for(i=0;i<len2;i++)
	{
		printf("%c",arr1[i]);
	}
	system("pause");
	return 0;
}