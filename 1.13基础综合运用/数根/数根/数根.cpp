#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int SUM(char arr[1010])
{
	int i,len,sum=0;
	len=strlen(arr);
	for(i=0;i<len;i++)
		sum+=arr[i]-'0';
	return sum;
}
int main()
{
	char arr[1010]={0};
	int len,i,sum=0;
	gets(arr);
	while(SUM(arr)>=10)
	{
		sum=SUM(arr);
		len=strlen(arr);
		for(i=0;i<len;i++)
			arr[i]=0;
		for(i=0;sum!=0;i++)
		{
			arr[i]=sum%10+'0';
			sum/=10;
		}
	}
	printf("%d",SUM(arr));
	system("pause");
	return 0;
}