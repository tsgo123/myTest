#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	float x,y,sum=0;
	int i,n;
	scanf("%f %d",&x,&n);
	for(i=1;i<=n;i++)
	{
     y=(pow)((float)(x),i);
	 sum=sum+y;
	}
	printf("%.2f",sum+1);
	system("pause");
	return 0;
}