#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char haab[20][10]={"pop","no","zip","zotz","tzec","xul","yoxkin","mol","chen","yax","zac","ceh","mac","kankin","muan","pax","koyab","cumhu","uayet"};
	char holly[20][10]={"imix","ik","akbal","kan","chicchan","cimi","manik","lamat","muluk","ok","chuen","eb","ben","ix","mem","cib","caban","eznab","canac","ahau"};
	int n,i,j,k,m,day,year,z;
	char arr[10]={0};
	char brr[20]={0};
	scanf("%d",&n);
	printf("%d\n",n);
	for(i=1;i<=n;i++)
	{
		getchar();
		scanf("%d. %s %d",&k,arr,&m);
		for(j=0;j<20;j++)
		{
			if(strcmp(arr,haab[j])==0)
			{
				for(z=0;z<j;z++)
				{
					if(z!=19)
					{
					  k+=20;
					}
					else
					{
						k+=5;
					}
				}
				year=((m)*365+k)/260;
				day=(((m)*365+k)%260)%13+1;
				strcpy(brr,holly[(((m)*365+k)%260)%20]);
				printf("%d %s %d\n",day,brr,year);
			}
		}
	}
	system("pause");
	return 0;
}