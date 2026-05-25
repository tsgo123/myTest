#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char arr[3000][41]={0},ch;
	int n,i=0,j=0,len=0,len1,m=0,z;
	scanf("%d",&n);
	getchar();
	while(scanf("%c",&ch)&&ch!='\n'&&i<n)
	{
		if(ch!=' ')
		{
			arr[i][j]=ch;
			j++;
		}
		else
		{
			i++;
			j=0;
		}
	}
	for(n=0;n<=i;n++)
	{
		len1=strlen(arr[n]);
		m?(len+=len1+1):(len+=len1);
		if(len>80)
		{
			len=0;
			len+=len1;
			printf("\n");
			m=0;
		}
		m?printf(" %s",arr[n]):printf("%s",arr[n]);
		m=1;
	}
	system("pause");
	return 0;
}