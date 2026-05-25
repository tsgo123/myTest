#include<stdio.h>
int main()
{
	float n;
	scanf("%f",&n);
	if(n>=0)
	{
		printf("%.2f",n);
	}
	if(n<0)
	{
		printf("%.2f",-n);
	}
	
	return 0;
}