#include<iostream>
#include<string.h>
using namespace std;
void generate(char str[],int begin,int last)
{
	if(begin>last)
	{
		cout<<str<<endl;
		return;
	}
	str[begin]='0';
	generate(str,begin+1,last);
	str[begin]='1';
	generate(str,begin+1,last);
}
int main()
{
	int i,j,k;
	char str[200];
	cin>>str;
	int len=strlen(str)-1;
	generate(str,0,len);
	return 0;
}
