#include<iostream>
#include<string.h>
using namespace std;
int palindrome(char *str,int begin,int last)
{
	if(begin>=last)
	return 1;
	if(str[begin]!=str[last])
	{
		return 0;
	}
	return palindrome(str,begin+1,last-1);
	
}
int main()
{
	int i,j,k;
	char str[200];
	cin>>str;
	int len=strlen(str);
	if(palindrome(str,0,len-1))
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	return 0;
	
}
