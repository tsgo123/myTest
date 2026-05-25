#include<stdio.h>
#include<math.h>
int main()
{
	float x1,x2,x3,y1,y2,y3,a,b,c,p,s;
	scanf("%f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3);
	a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	b=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
	c=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
	p=(a+b+c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("%.2f",s);
	return 0;
}
