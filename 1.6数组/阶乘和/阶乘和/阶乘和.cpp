#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,len=1,n,b,a[40000]={1},sum[40000]={0},jen=0,c,d,f=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(b=0;b<len;b++)
		{
		  int s=a[b]*i+jen;
		  jen=s/10;
		  a[b]=s%10;
		}
		while(jen)
		{
			a[len]=jen%10;
			jen=jen/10;
			len++;
		}
		for(c=0;c<len;c++)
		{
			sum[c]+=a[c];
			sum[c+1]+=sum[c]/10;
			sum[c]%=10;
			if(c+1==len&&sum[c+1]!=0)
			{
				len++;
			}
		}
	}
	for(d=len-1;d>=0;d--)
	{
		if(sum[d]!=0&&f==0||f==1)
		{
			printf("%d",sum[d]);
			f=1;
		}
	}
	system("pause");
	return 0;
}