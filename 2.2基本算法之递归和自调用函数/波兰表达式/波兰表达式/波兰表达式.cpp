#include<stdio.h>
#include<stdlib.h>
double E()
{
	char str[1000];
	scanf("%s",str);
	if(str[0]>='0'&&str[0]<='9')
	{
		return atof(str);
	}
	else
	{
		switch(str[0])
		{
	     	case '+':return E()+E();
			case '-':return E()-E();
			case '*':return E()*E();
			case '/':return E()/E();
		}
	}
}
int main()
{
	printf("%f",E());
	system("pause");
	return 0;
}