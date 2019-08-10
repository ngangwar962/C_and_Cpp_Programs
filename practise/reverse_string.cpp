#include<iostream>
#include<string.h>
using namespace std;
void reverse_string(char *str,int begin,int last)
{
	if(begin>=last)
	{
		return;
	}
	char temp;
	temp=str[begin];
	str[begin]=str[last];
	str[last]=temp;
	reverse_string(str,begin+1,last-1);
}
int main()
{
	int i,j,k;
	int n;
	char str[100];
	cin>>str;
	reverse_string(str,0,strlen(str)-1);
	cout<<str<<endl;
	return 0;
}
