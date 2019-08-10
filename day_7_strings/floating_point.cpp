#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,j,k,l;
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
	int count=1;
	while(str[i]!='\0')
	{
		if(str[i]>='0'&&str[i]<='9')
		{
			value2=value2+((str[i]-'0')/pow(10,count));
		}
		i++;
		count++;
	}
	cout<<value1+value2<<endl;
	return 0;
}
