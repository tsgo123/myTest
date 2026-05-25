#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int n,i,m,arr[21]={0},t;
	char brr[21][21]={0},crr[21]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		getchar();
		scanf("%s %d",brr[i],&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(m=i+1;m<n;m++)
		{
			if(arr[i]<arr[m])
			{
				t=arr[i];
				arr[i]=arr[m];
				arr[m]=t;
				strcpy(crr,brr[i]);
				strcpy(brr[i],brr[m]);
				strcpy(brr[m],crr);
			}
			if(arr[i]==arr[m]&&strcmp(brr[m],brr[i])<0)
			{
				strcpy(crr,brr[i]);
				strcpy(brr[i],brr[m]);
				strcpy(brr[m],crr);
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s %d",brr[i],arr[i]);
		printf("\n");
	}
	system("pause");
	return 0;
}