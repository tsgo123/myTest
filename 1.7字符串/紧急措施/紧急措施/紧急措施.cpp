#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,n,len,m,z=0;
	char arr[51]={},brr[51]={},crr[51]={},drr[51]={};
	gets(arr);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s %s %s",brr,crr,drr);
		if(strcmp(arr,drr)==0)
		{
			z++;
			printf("%s ",brr);
			len=strlen(crr);
			for(m=0;m<len;m++)
			{
				if(crr[m]<='Z'&&crr[m]>='A')
				{
					crr[m]+=32;
				}
				else if(crr[m]<='z'&&crr[m]>='a')
				{
					crr[m]-=32;
				}
				printf("%c",crr[m]);
			}
			printf("\n");
		}
	}
	if(z==0)
	{
		printf("empty");
	}
	system("pause");
	return 0;
}