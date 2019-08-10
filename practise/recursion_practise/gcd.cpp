#include<iostream>
using namespace std;
int gcd(int m,int n)
{
	if(n==0)
	return m;
	return gcd(n,m%n);
}
int main()
{
	int i,j,l,k;
	int m,n;
	cin>>m>>n;
	int value;
	if(m>n)
	{
		value=gcd(m,n);
	}
	else
	{
		value=gcd(n,m);
	}
	cout<<value<<"\n";
	return 0;
}
