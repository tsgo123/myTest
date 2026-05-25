#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,n,len,a;
	char arr[30];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s",arr);
		getchar();
		len=strlen(arr);
		if(arr[0]<='z'&&arr[0]>='a')
		{
			arr[0]-=32;
		}
		for(a=1;a<len;a++)
		{
			if(arr[a]<='Z'&&arr[a]>='A')
			{
				arr[a]+=32;
			}
		}
		printf("%s\n",arr);
	}
	system("pause");
	return 0;
}