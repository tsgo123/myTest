#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,num,len,m;
	char arr[1001],n;
	gets(arr);
	len=strlen(arr);
	for(i=0;i<len;i++)
	{
		num=0;
		n=arr[i];
		m=i;
		while(arr[m]==n)
		{
			num++;
			m++;
		}
		i=m-1;
		printf("%d%c",num,n);
	}
	system("pause");
	return 0;
}