#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	double a,m;
	int i,len,n=0;
	scanf("%lf",&a);
	char brr[510],crr[510];
	scanf("%s%s",brr,crr);
	len=strlen(brr);
	for(i=0;i<len;i++)
	{
		if(brr[i]==crr[i])
		{
			n++;
		}
	}
	m=(double)(n)/len;
	if(m>a)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	system("pause");
	return 0;
}