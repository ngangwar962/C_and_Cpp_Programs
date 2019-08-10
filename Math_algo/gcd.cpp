#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long int gcd(long int a,long int b)
{
	if(a==0)
	return b;
	return gcd(b%a,a);
}
int main()
{
	long int i,j,k;
	long int a,b;
	cin>>a>>b;
	long val=gcd(a,b);
	cout<<val<<" ";
	return 0;
}
