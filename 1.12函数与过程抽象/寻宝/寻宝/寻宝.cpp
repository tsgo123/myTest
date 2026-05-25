#include<stdio.h>
#include<stdlib.h>
int arr[11000][110]={0};
int brr[11000][110]={0};
int crr[110]={0};
int main()
{
	int i,j,n,m,x=0,y=0,z,sum=0,t=0,b=0,h=0,k=0,zz=0;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		getchar();
		for(j=0;j<m;j++)
		{
			scanf("%d%d",&arr[i][j],&brr[i][j]);	
		}
	}
	getchar();
	scanf("%d",&z);	
	for(i=0;i<n;i++)
	{
			sum+=brr[i][z];
			t=brr[i][z];
			b=z;
			h=0;
			k=z;
			while(t)
			{
				if(arr[i][b]==1)
				{
					crr[h]=b;
					h++;
				}
				b++;
				if(b==m)
				{
					b=0;
				}
				if(k==b)
				{
					break;
				}
			}
			if(t%h==0)
			{
               b=crr[h-1];
			}
			else
			{
			  b=crr[t%h-1];
			}
			for(zz=0;zz<110;zz++)
			{
				crr[zz]=0;
			}
		    z=b;
	}
	printf("%d\n",sum%20123);
	system("pause");
	return 0;
}