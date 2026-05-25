#include<stdio.h>
int main()
{
	int a,c,d,s;
	char b;
	scanf("%d %c",&a,&b);
	c=a%500;
	d=(a-1000)/500;
	if(b=='y'&&a<=1000)
	{
		printf("13");
	}
	if(b=='y'&&c==0&&a>1000)
	{
		s=8+d*4+5;
		printf("%d",s);
	}
	if(b=='y'&&c!=0&&a>1000)
	{	
		s=8+d*4+9;
	printf("%d",s);
	}
	if(b=='n'&&a<=1000)
	{
		printf("8");
	}
	if(b=='n'&&a>1000&&c==0)
	{
		s=8+d*4;
		printf("%d",s);
	}
	if(b=='n'&&a>1000&&c!=0)
	{	
		s=8+d*4+4;
	printf("%d",s);
	}
	return 0;
}