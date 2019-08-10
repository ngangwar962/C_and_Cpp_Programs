#include<iostream>
using namespace std;
int main()
{
	string str;
	getline(cin,str);
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]>='a'&&str[i]<='z')
		str[i]=str[i]-'a'+'A';
		i++;
	}
	cout<<str;
	return 0;
}
