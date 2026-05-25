#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
char SWICH(char a)
{
	int b=0;
	if(a=='A')
		return b+10+'0';
	else if(a=='B')
		return b+11+'0';
	else if(a=='C')
		return b+12+'0';
	else if(a=='C')
		return b+13+'0';
	else if(a=='D')
		return b+14+'0';
	else if(a=='E')
		return b+15+'0';
	else if(a=='F')
		return b+16+'0';
	else if(a=='G')
		return b+17+'0';
	else if(a=='H')
		return b+18+'0';
	else if(a=='I')
		return b+19+'0';
	else if(a=='J')
		return b+20+'0';
	else if(a=='K')
		return b+21+'0';
	else if(a=='L')
		return b+22+'0';
	else if(a=='M')
		return b+23+'0';
	else if(a=='N')
		return b+24+'0';
	else if(a=='O')
		return b+25+'0';
	else if(a=='P')
		return b+26+'0';
	else if(a=='Q')
		return b+27+'0';
	else if(a=='R')
		return b+28+'0';
	else if(a=='S')
		return b+29+'0';
	else if(a=='T')
		return b+30+'0';
	else if(a=='U')
		return b+31+'0';
	else if(a=='V')
		return b+32+'0';
	else if(a=='W')
		return b+33+'0';
	else if(a=='X')
		return b+34+'0';
	else if(a=='Y')
		return b+35+'0';
	else if(a=='Z')
		return b+36+'0';
	else
		return a;
}
int main()
{
	int num,n,m,sum=0,i,j=0,z,flag=0,x,y;
	char crr[61][3]={0},drr[61][3]={0},brr[61][51]={0},arr[61][100]={0},ch;
	scanf("%d",&num);
	for(j=0;j<num;j++)
	{
		getchar();
		x=0;
		y=0;
		flag=0;
		i=0;
		sum=0;
		while(scanf("%c",&ch)&&ch!='\n')
		{
			if(ch==','&&flag==0)
			{
				flag=1;
				n=atoi(crr[j]);
			}
			else if(ch==','&&flag==1)
				flag=2;
			else if(flag==0)
			{
				crr[j][x]=ch;
				x++;
			}
			else if(flag==1)
			{
				brr[j][i]=ch;
				i++;
			}
			else if(flag==2)
			{
				drr[j][y]=ch;
				y++;
			}
		}
		m=atoi(drr[j]);
		for(z=0;z<i;z++)
			sum+=(SWICH(brr[j][z])-'0')*pow(n*1.0,i-z-1);
		z=0;
		do
		{
			if(sum%m<10)
				arr[j][z++]=sum%m+'0';
			else
				arr[j][z++]=sum%m-'0'+'A';
			sum/=m;
		}while(sum!=0);
	system("pause");
	return 0;
}
