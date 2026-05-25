#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	long n;
	int i,a,c,e,d=0;
	scanf("%ld",&n);
	for(i=2;;i++)
	{
		for(a=1,e=0;a<=sqrt((double)(i));a++)
		{
			c=i%a;
			if(c==0&&a!=1&&a!=i)
			{
				e++;
			}
		}
		if(e==0)
		{
			d++;
		}
		if(d==n)
		{
			printf("%d",i);
			break;
		}
	}
	system("pause");
	return 0;
}