#include<stdio.h>
#include<stdlib.h>
char arr[1000000000]={0};
int main()
{
	char ch;
	int n=0,m=0,i=0,len=0;
	while(scanf("%c",&ch)!=EOF)
	{
		if(ch!='\n')
		{
			arr[len]=ch;
			len++;
		}
	}
	if(len==0)
	{
		printf("0:0\n");
		printf("\n");
		printf("0:0\n");
	}
	else
	{
		for(i=0;;i++)
		{
			if(arr[i]=='W')
				n++;
			else if(arr[i]=='L')
					m++;
			if(n>=11&&(n-m)>=2||m>=11&&(m-n)>=2||arr[i]=='E')
			{
				printf("%d:%d\n",n,m);
				n=0,m=0;
			}
			if(arr[i]=='E')
				break;
		}
		printf("\n");
		for(i=0;i<len;i++)
		{
			if(arr[i]=='W')
				n++;
			else if(arr[i]=='L')
					m++;
			if(n>=21&&(n-m)>=2||m>=21&&(m-n)>=2||arr[i]=='E')
			{
				printf("%d:%d\n",n,m);
				n=0,m=0;
			}
			if(arr[i]=='E')
				break;
		}
	}
	system("pause");
	return 0;
}