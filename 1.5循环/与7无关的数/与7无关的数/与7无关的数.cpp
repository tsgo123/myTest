#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,a,b,c,sum=0,d;
	scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
	   d=i;
	   for(a=1,c=0;d!=0;a++)
	   {
		   b=d%10;
           d=d/10;
		   if(b==7)
		   {
			   c++;
		   }
	   }
	   if(i%7!=0&&c==0)
	   {
		   sum+=i*i;
	   }
   }
   printf("%d",sum);
   system("pause");
   return 0;
}

