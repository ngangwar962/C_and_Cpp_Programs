#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long int GCD(long int a,long int b)
{
	if(a==0)
	return b;
	return GCD(b%a,a);
}
int main()
{
	int i,j,k;
	int n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	long int ans=a[0];
	for(i=1;i<n;i++)
	{
		ans=((ans*a[i])/(GCD(a[i],ans)));
	}
	cout<<ans<<"\n";
	return 0;
}
