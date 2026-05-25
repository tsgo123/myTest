#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,n,len1,len2,num=0,max=0,j,k;
	char arr[520],brr[520],s1[260],s2[260];
	scanf("%s %s",s1,s2);
	strcpy(arr,s1);
	strcpy(brr,s2);
	strcat(arr,s1);
	strcat(brr,s2);
	len1=strlen(arr);
	len2=strlen(brr);
	for(i=0;i<len1;i++)
	{
		for(n=0;n<len2;n++)
		{
			if(arr[i]==brr[n])
			{
				j=i;
				k=n;
				while(arr[j]==brr[k]&&j<len1&&k<len2)
				{
					num++;
					j++;
					k++;
				}
				if(num>max)
				{
					max=num;
				}
				num=0;
			}
		}
	}
	if(max>len2/2)
	{
		max=len2/2;
	}
	if(max>len1/2)
	{
		max=len1/2;
	}
	printf("%d",max);
	system("pause");
	return 0;
}

