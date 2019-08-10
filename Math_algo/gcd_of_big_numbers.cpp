#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000007
long int gcd(long int a,long int b)
{
	if(a==0)
	return b;
	return gcd(b%a,a);
}
int main()
{
	int i,j,k;
	string str;
	long int a;
	cin>>str>>a;
	int len=str.length();
	long int num=0;
	i=0;
	while(str[i]!='\0')
	{
		num=((num*10)%MAX+(str[i]-'0'))%MAX;
		if(num<0)
		num+=MAX;
		i++;	
	}
	long int temp=gcd(a,num);
	cout<<temp<<"\n";
	return 0;
}
