#include<stdio.h>
#include<string.h>
#define A 30
void E(int *arr)
{
	int len=strlen(arr);
	int i;
	for(i=0;i<len;i++)
	{
		printf("%d",*arr+i);
	}
}
int main()
{
	int arr[10]={1,1,1,1,1,1,0,1,1,0};
	float b,c;
	E(arr);
		return 0;
}