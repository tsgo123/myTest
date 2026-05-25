//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	int i,n;
//	scanf("%d",&n);
//	char arr[10],brr[10];
//	for(i=0;i<n;i+=1)
//	{
//		scanf("%s%s",arr,brr);
//		if(strcmp(arr,brr)==0)
//			printf("Tie\n");
//		else if(strcmp(arr,"Rock")==0&&strcmp(brr,"Scissors")==0||strcmp(arr,"Scissors")==0&&strcmp(brr,"Paper")==0||strcmp(arr,"Paper")==0&&strcmp(brr,"Rock")==0)
//		{
//			printf("Player1\n");
//		}
//		else
//		{
//			printf("Player2\n");
//		}
//	}
//	system("pause");
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	char arr[105],brr[105];
	for(i=0;i<n;i+=1)
	{
		scanf("%s%s",arr,brr);
		if(arr[0]=='R'&&brr[0]=='S'||arr[0]=='S'&&brr[0]=='P'||arr[0]=='P'&&brr[0]=='R')
		{
			printf("Player1\n");
		}
		else if(brr[0]=='R'&&arr[0]=='S'||brr[0]=='S'&&arr[0]=='P'||brr[0]=='P'&&arr[0]=='R')
		{
			printf("Player2\n");
		}
		else
		{
			printf("Tie\n");
		}
	}
	system("pause");
	return 0;
}