#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,a[10];
	float f;
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	f=a[0]*28.9+a[1]*32.7+a[2]*45.6+a[3]*78+a[4]*35+a[5]*86.2+a[6]*27.8+a[7]*43+a[8]*56+a[9]*65;
	printf("%.1f",f);
	system("pause");
	return 0;
}