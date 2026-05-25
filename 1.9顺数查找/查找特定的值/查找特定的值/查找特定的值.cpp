#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,m,i,arr[10001]={0},flag=0;
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		if(arr[i]==m)
		{
			printf("%d",i+1);
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("-1");
	}
	system("pause");
	return 0;
}