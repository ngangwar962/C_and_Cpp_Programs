#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,j,k,l;
	char str[1000];
	int len=strlen(str);
	cin>>str;
	i=0;
	while(str[i]!='\0')
	{
		if(str[i]>='a'&&str[i]<='z')
		{
			str[i]=str[i]-(32);
		}
		i++;
	}
	cout<<str<<endl;
	return 0;
}
