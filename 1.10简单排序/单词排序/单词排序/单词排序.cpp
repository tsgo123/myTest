#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int n,i=0,m=0,z=0;
	char ch,arr[120][51]={0},brr[51]={0};
	while(scanf("%c",&ch)&&ch!='\n')
	{
		if(ch!=' ')
		{
			arr[i][m]=ch;
			m++;
			z=1;
		}
		else if(ch==' '&&z==1)
		{
			i++;
			m=0;
			z=0;
		}
	}
	for(n=0;n<=i;n++)
	{
		for(m=n+1;m<=i;m++)
		{
			if(strcmp(arr[n],arr[m])>0)
			{
				strcpy(brr,arr[m]);
				strcpy(arr[m],arr[n]);
				strcpy(arr[n],brr);
			}
			else if(strcmp(arr[n],arr[m])==0)
			{
				for(z=m;z<i;z++)
				{
					strcpy(arr[z],arr[z+1]);
				}
				i--;
				m--;
			}
		}
	}
	for(n=0;n<=i;n++)
	{
		printf("%s\n",arr[n]);
	}
	system("pause");
	return 0;
}