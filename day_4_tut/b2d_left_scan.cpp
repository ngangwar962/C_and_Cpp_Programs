#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int b2d(char *str,int exp,int last)
{
	if(exp<0)
	return 0;
	return (str[last]-'0')*pow(2,exp)+b2d(str,exp-1,last+1);
}
int main()
{
	char str[50];
	cin>>str;
	cout<<"decimal equivalent is "<<b2d(str,strlen(str)-1,0)<<endl;
	return 0;
}
