#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,num=0;
	scanf("%d",&n);
	num=n/100;
	n=n%100;
	printf("%d\n",num);
	num=0;
	num=n/50;
	n=n%50;
	printf("%d\n",num);
	num=0;
	num=n/20;
	n=n%20;
	printf("%d\n",num);
	num=0;
	num=n/10;
	n=n%10;
	printf("%d\n",num);
	num=0;
	num=n/5;
	n=n%5;
	printf("%d\n",num);
	num=0;
	printf("%d\n",n);
	system("pause");
	return 0;
}