#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int n,i,m[40000]={0},d,a,c,e=0,f,g,h=0;
	scanf("%d",&n);
	d=n-1;
	if(n==0)
	{
		printf("1");
	
		system("pause");
		return 0;
	}
	else
	{
	for(i=0;n!=0;i++)
	{
		a=n%10;
		m[i]=a;
		n/=10;
		e++;
	}
	n=d+1;
	for(i=0;i<n-1;i++,d--)
	{
		for(c=0;c<e;c++)
		{
			m[c]*=d;
		}
		for(c=0;c<e;c++)
		{
			if(m[c]>=10)
			{
				f=m[c]/10;
				g=m[c]%10;
				m[c]=g;
				m[c+1]+=f;
				if(c+1>=e)
				{
					e++;
				}
			}
		}
	}
	for(c=e+10;c>=0;c--)
	{
		if(m[c]!=0&&h==0||h==1)
		{
			printf("%d",m[c]);
			h=1;
		}
	}
	system("pause");
	return 0;
	}
}