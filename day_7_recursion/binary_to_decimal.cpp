#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int b2d(char str[],int index,int exp)
{
	if(exp==0)
	{
		return str[index]-'0';
	}
	return (str[index]-'0')*pow(2,exp)+b2d(str,index+1,exp-1);
}
int main()
{
	char binary[100];
	cin>>binary;
	cout<<b2d(binary,0,strlen(binary)-1)<<endl;
	return 0;
}
