#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int power(int a,int n)
{
	if(n==0)
	return 1;
	return pow(a,n/2)*power(a,n/2);
}
int power_even(int a,int n)
{
	if(n==0)
	return 3;
	return pow(a,n/2)*power_even(a,n/2);
}
int main()
{
	int i,j,k,l;
	int a,n;
	cin>>a>>n;
	int result;
	if(n%2)
	{
		result=power(a,n+1);
	}
	else
	{
		result=power_even(a,n);
	}
	cout<<result<<"\n";
	return 0;
}
