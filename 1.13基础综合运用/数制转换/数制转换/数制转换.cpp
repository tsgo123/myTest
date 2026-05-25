#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
char ZIMU_SHUZI(char a)
{
	int b;
	if(a=='a'||a=='A')
	{
		b=10+'0';
		return b;
	}
	else if(a=='b'||a=='B')
	{
		b=11+'0';
		return b;
	}
	else if(a=='c'||a=='C')
	{
		b=12+'0';
		return b;
	}
	else if(a=='d'||a=='D')
	{
		b=13+'0';
		return b;
	}
	else if(a=='e'||a=='E')
	{
		b=14+'0';
		return b;
	}
	else if(a=='f'||a=='F')
	{
		b=15+'0';
		return b;
	}
	else
	{
	return a;
	}
}
int SHIJINZHI(char arr[110],int a)
{
	int len=strlen(arr);
	int i,sum=0;
	for(i=len-1;i>=0;i--)
	{
		sum+=(ZIMU_SHUZI(arr[i])-'0')*pow((double)(a),len-i-1);
	}
	return sum;
}
int main()
{
	char arr[110]={0},crr[110]={0};
	int i,a,b,sum=0,brr[110]={0},count=0;
	scanf("%d %s %d",&a,arr,&b);
	sum=SHIJINZHI(arr,a);
    do
	{
		if(sum%b<10)
		{
		  crr[count++]=sum%b+'0';
		}
		else if(sum%b>=10)
		{
			crr[count++]=sum%b-10+'A';
		}
		sum/=b;
	}while(sum!=0);
	for(i=count-1;i>=0;i--)
	{
		printf("%c",crr[i]);
	}
	system("pause");
	return 0;
}
