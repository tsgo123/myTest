#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int FUZHI(char ch)
{
	int n;
	if(ch==' ')
	{
		n=0;
	}
	else if(ch!=' ')
	{
		n=ch-64;
	}
	return n;
}
int Swich_2(char ch,int arr[5])
{
	int n,a,b,c,d,e;
	n= FUZHI(ch);
	for(a=0;a<=1;a++)
	{
		for(b=0;b<=1;b++)
		{
			for(c=0;c<=1;c++)
			{
				for(d=0;d<=1;d++)
				{
					for(e=0;e<=1;e++)
					{
						if(a*2*2*2*2+b*2*2*2+c*2*2+d*2+e==n)
						{
							arr[0]=a;
							arr[1]=b;
							arr[2]=c;
							arr[3]=d;
							arr[4]=e;
						}
					}
				}
			}
		}
	}
	return 0;
}
int main()
{
	int n,m,i,j=0,k=0,arr[21][21]={0},crr[5]={0},len,z=0,flag=0,x,y;
	char brr[100]={0},ch=' ';
	scanf("%d%d",&n,&m);
	x=n;
	y=m;
	getchar();
	gets(brr);
	len=strlen(brr);
	while(z<len)
	{
      Swich_2(brr[z],crr);
	  for(i=0;i<5;i++)
	  {
		  arr[j][k]=crr[i];
		  if(flag==0)
		  {
			  k++;
			  if(k==m)
			  {
				  flag=1;
				  k=m-1;
				  j=x-n+1;
			  }
		  }
		  else if(flag==1)
		  {
			  j++;
			  if(j==n)
			  {
				  flag=2;
				  j=n-1;
				  k=m-2;
			  }
		  }
		  else if(flag==2)
		  {
			  k--;
			  if(k==y-m-1)
			  {
				  flag=3;
				  k=y-m;
				  j=n-2;
			  }
		  }
		  else if(flag==3)
		  {
			  j--;
			  if(j==x-n)
			  {
				  flag=0;
				  j=x-n+1;
				  k=y-m+1;
				  n--;
				  m--;
			  }
		  }
	  }
	  z++;
	}
	for(j=0;j<x;j++)
	{
		for(k=0;k<y;k++)
		{
			printf("%d",arr[j][k]);
		}
	}
	system("pause");
	return 0;
}