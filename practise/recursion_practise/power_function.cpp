#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int power(int a,int n)
{
	if(n==0)
	return 1;
	return a*power(a,n-1);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int i,j,k,l;
	int a,n;
	cin>>a>>n;
	int result=power(a,n);
	cout<<result<<"\n";
	return 0;
}
