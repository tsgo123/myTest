#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,l,m,arr[10200]={0},c,d,e,f=0;
	scanf("%d%d",&l,&m);
	for(i=0;i<m;i++)
	{
		scanf("%d%d",&c,&d);
		for(e=c;e<=d;e++)
		{
			arr[e]=1;
		}
	}
	for(i=0;i<=l;i++)
	{
		if(arr[i]==0)
		{
			f++;
		}
	}
	printf("%d",f);
	system("pause");
	return 0;
}