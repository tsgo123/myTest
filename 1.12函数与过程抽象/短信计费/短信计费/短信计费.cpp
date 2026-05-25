#include<stdio.h>
#include<stdlib.h>
int A(int n)
{
	int a;
	if(n%70!=0)
	{
		a=n/70+1;
	}
	else
	{
		a=n/70;
	}
	return a;
}
int main() 
{
	int i,n,m;
	double c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		getchar();
		scanf("%d",&m);
		c+=A(m);
	}
	printf("%lf",c*0.1);
	system("pause");
	return 0;
}