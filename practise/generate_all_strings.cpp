#include<iostream>
#include<string.h>
using namespace std;
void generate(char str[],int begin,int last)
{
	if(last<0)
	{
		cout<<str<<endl;
		return;
	}
	str[last]='0';
	generate(str,begin,last-1);
	str[last]='1';
	generate(str,begin,last-1);
}
int main()
{
	int i,j,k;
	char str[1000];
	cin>>str;
	int len=strlen(str)-1;
	generate(str,0,len);
	
}
