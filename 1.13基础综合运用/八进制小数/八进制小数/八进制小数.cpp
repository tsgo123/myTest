#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	double m,s=0,z=1;
	int j,len;
	char arr[200]={0};
	gets(arr);
	m=atof(arr);
	len=strlen(arr);
	for(j=2;j<len;j++)
	{
		z*=8.0;
		s+=(arr[j]-'0')*1.0/z;
	}
	printf("%s [8] = %.45g [10]",arr,s);
	system("pause");
	return 0;
}