#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[300];
	int i,b,n=0;
	gets(a);
	b=strlen(a);
	for(i=0;i<b;i++)
	{
		if(a[i]-'0'<=9&&a[i]-'0'>=0)
		{
			n++;
		}
	}
	printf("%d",n);
	system("pause");
	return 0;
}