#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,m[100]={1},a,c,flag=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(a=0;a<100;a++)
		{
			m[a]*=2;
		}
		for(c=0;c<n;c++)
		{
			if(m[c]>=10)
			{
				m[c]-=10;
				m[c+1]+=1;
			}
		}
	}
	for(i=99;i>=0;i--)
	{
		if(m[i]!=0)
			flag=1;
		if(flag==1)
			printf("%d",m[i]);
	}
	system("pause");
	return 0;
}