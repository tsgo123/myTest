#include<stdio.h>
#include<stdlib.h>
struct A
{
	char name[210][10];
	float tem[210];
	int arr[210];
}B[210];
int main()
{
	int n,i,z=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		getchar();
		scanf("%s %f %d",&B[i].name[i],&B[i].tem[i],&B[i].arr[i]);
		if(B[i].tem[i]>=37.5&&B[i].arr[i]==1)
		{
			printf("%s",B[i].name[i]);
			z++;
			printf("\n");
		}
	}
	printf("%d",z);
	system("pause");
	return 0;
}