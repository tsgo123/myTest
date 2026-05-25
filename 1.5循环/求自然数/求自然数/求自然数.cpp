#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c;
	for(a=0;a<=6;a++)
	{
		for(b=0;b<=6;b++)
		{
			for(c=0;c<=6;c++)
			{
				if(a*49+b*7+c==c*81+b*9+a&&a!=0)
				{
					printf("%d\n",a*49+b*7+c);
					printf("%d%d%d\n",a,b,c);
					printf("%d%d%d",c,b,a);break;
				}
			}
		}
	}
	system("pause");
	return 0;
}