#include<stdio.h>
#include<stdlib.h>
int FBI(int n)
{
	if(n==1||n==2)
	{
		return 1;
	}
	else
	{
	   return FBI(n-1)+FBI(n-2);
	}
}
int main()
{
	int i,n,z;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		getchar();
		scanf("%d",&z);
		printf("%d",FBI(z));
		printf("\n");
	}
	system("pause");
	return 0;
}