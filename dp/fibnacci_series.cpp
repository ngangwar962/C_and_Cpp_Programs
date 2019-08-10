#include<iostream>
#include<bits/stdc++.h>
#define MAX 100000
using namespace std;
long fib[MAX];
int main()
{
	long int i,j,k,n;
	fib[0]=0;
	fib[1]=1;
	cin>>n;
	for(i=2;i<=n;i++)
	{
		fib[i]=fib[i-1]+fib[i-2];
	}
	cout<<fib[n]<<" ";
	return 0;
}
