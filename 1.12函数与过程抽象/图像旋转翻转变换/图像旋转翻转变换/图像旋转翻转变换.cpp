#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int arr1[110][110]={0},arr2[110][110]={0};
void PING(int arr[110][110])
{
	int i,j;
	for(i=0;i<110;i++)
	{
		for(j=0;j<110;j++)
		{
			arr[i][j]=0;
		}
	}
}
void Switch(char a, int n,int m)
{
	int i,j;
    switch(a)
     {
	case 'A':	for(i=0;i<m;i++)
	            {
		            for(j=0;j<n;j++)
		               {
			               arr2[i][j]=arr1[n-j-1][i];
		               }
                }
				break;
	case 'B':	for(i=0;i<m;i++)
	            {
		           for(j=0;j<n;j++)
		              {
			              arr2[m-i-1][n-j-1]=arr1[n-j-1][i];
		              }
	            }
				break;
	case 'C':  for(i=0;i<n;i++)
			   {
				   for(j=0;j<m;j++)
				   {
					   arr2[i][j]=arr1[i][m-j-1];
				   }
			   }
			   break;
	case 'D':for(i=0;i<n;i++)
			   {
				   for(j=0;j<m;j++)
				   {
					   arr2[i][j]=arr1[n-i-1][j];
				   }
			   }
			   break;
   }
}
int main()
{
	int i,j,n,m,len,z,t;
	char brr[110]={0};
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	getchar();
	gets(brr);
	len=strlen(brr);
	for(z=0;z<len;z++)
	{
		 PING(arr2);
		Switch(brr[z],n,m);
		 PING(arr1);
		 if(brr[z]=='A'||brr[z]=='B')
		 {
			 t=n;
			 n=m;
			 m=t;
		 }
		 for(i=0;i<n;i++)
		 {
			 for(j=0;j<m;j++)
			 {
				 arr1[i][j]=arr2[i][j];
			 }
		 }
	}
	for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				printf("%d ",arr1[i][j]);
			}
			printf("\n");
		}	
	system("pause");
	return 0;
}