#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int b2d(char str[],int expo,int begin)
{
	if(expo<0)
	return 0;
	return (str[begin]-'0')*pow(2,expo)+b2d(str,expo-1,begin+1);
}
int main()
{
	int i,j,k;
	char str[200];
	cin>>str;
	int len=strlen(str);
	cout<<b2d(str,len-1,0);
	return 0;
}
