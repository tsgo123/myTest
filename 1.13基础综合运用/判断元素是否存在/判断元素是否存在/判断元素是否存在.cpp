#include<stdio.h>
#include<stdlib.h>
 int E(int n,int m)
 {
	if(n>m)
		return 0;
	else if(n==m)
		return 1;
	else
	{
		if((m-1)%6==0)
		{
			if(E(n,(m-1)/2)!=0)
			{
				m=(m-1)/2;
				return E(n,m);
			}
			else
			{
				m=(m-1)/3;
				return E(n,m);
			}
		}
		else if((m-1)%2==0)
		{
			m=(m-1)/2;
			return E(n,m);
		}
		else if((m-1)%3==0)
		{
			m=(m-1)/3;
			return E(n,m);
		}
		else
			return 0;
	}
 }
int main()
{
	int n,m;
	scanf("%d,%d",&n,&m);
	if(E(n,m)==1)
		printf("YES");
	else
		printf("NO");
	system("pause");
	return 0;
}