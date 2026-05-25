#include<stdio.h>
#include<stdlib.h>
int Sent_apple(int m,int n)
{
	if(m==1||m==0||n==1)
	{
		return 1;
	}
	else if(m<n)
	{
		return Sent_apple(m,m);
	}
	else
	{
		return Sent_apple(m,n-1)+Sent_apple(m-n,n);
	}
}
int main()
{
	int z,n,m,i;
	scanf("%d",&z);
	for(i=1;i<=z;i++)
	{
		getchar();
		scanf("%d%d",&m,&n);
		printf("%d\n",Sent_apple(m,n));
	}
	system("pause");
	return 0;
}