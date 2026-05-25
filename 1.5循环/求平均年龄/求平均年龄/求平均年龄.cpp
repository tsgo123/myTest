#include<stdio.h>
int main()
{
	int n;
	float a,sum=0;
	scanf("%d\n",&n);
	for( int i=1;i<=n;i++)
	{
		scanf("%f\n",&a);
		sum=sum+a;
	    
	}
	
	
	printf("%.2f",sum/n);
	return 0;
}