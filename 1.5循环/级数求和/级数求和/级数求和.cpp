#include<stdio.h>
#include<stdlib.h>
int main()
{
	int k,n;
	double sn=0;
	scanf("%d",&k);
	for(n=1;;n++)
	{
		sn=sn+1.0/n;
		if(sn-k>0)
		{
			printf("%d",n);break;
		}
	}
	system("pause");
	return 0;
}