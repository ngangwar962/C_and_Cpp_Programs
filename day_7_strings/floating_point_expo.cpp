#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,j,k;
	char str[100];
	cin>>str;
	i=0;
	int value1=0;
	while(str[i]!='.')
	{
		if(str[i]>='0'&&str[i]<='9')
		{
			value1=value1*10+str[i]-'0';
		}
		i++;
	}
	i++;
	double value2=0;
	int count=0;
	while(str[i]!='e')
	{
		if(str[i]>='0'&&str[i]<='9')
		{
			value2=value2+((str[i]-'0')/(pow(10,count)));
		}
		count++;	
		i++;
	}
	i++;
	int flag=0;
	int value3=0;
	while(str[i]!='\0')
	{
		if((str[i]>='0'&&str[i]<='9')||(str[i]=='-'))
		{
			if(str[i]=='-')
			{
				i++;
				flag=1;
				continue;
			}
			else
			{
				value3=value3*10+str[i]-'0';
			}
		}
		i++;
	}
	if(flag==1)
	{
		cout<<value1+value2<<"*"<<"10^-"<<value3<<endl;
	}
	else
	{
		cout<<value1+value2<<"*"<<"10^"<<value3<<endl;
	}
	
}
