#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int i,j,k;
	long int a,m,b;
	cin>>a>>m;
	string str;
	cin>>str;
	i=0;
	long int num=0;
	while(str[i]!='\0')
	{
		num=((num*10)%m+(str[i]-'0')%m)%m;
		if(num<0)
		num=num+m;
		i++;
	}
	cout<<num<<"\n";
	b=num;
	long int prod=0;
	while(b)
	{
		if(b&1)
		{
			prod=(prod+a)%m;
		}
		a=(2*a)%m;
		b=b>>1;
	}
	cout<<prod<<"\n";
	return 0;
}
