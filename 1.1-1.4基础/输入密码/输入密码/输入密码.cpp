#include<stdio.h>
int main()
{
	int a;
	printf("ÇëÊäÈëÃÜÂë£º");
	scanf("%d",&a);
	if(a==119520)
	{
		printf("°®ÄãÅ·");
	}
	else
    {
		do
		{
		printf("ÃÜÂë´íÎó£¬ÇëÖØĞÂÊäÈë");
		scanf("%d",&a);
		}
	    while(a!=119520);
		printf("°®Äã");
	}
	return 0;
}