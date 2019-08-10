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
	int m,n;
	cin>>m>>n;
	int rem;
	if(m>n)
	{
		rem=gcd(m,n);
	}
	else
	{
		rem=gcd(n,m);
	}
	cout<<rem<<endl;
	return 0;
}

