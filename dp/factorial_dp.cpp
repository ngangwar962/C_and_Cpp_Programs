#include<iostream>
#include<bits/stdc++.h>
#define MAX 1000000
using namespace std;
int main()
{
	int i,j,k;
	int fact[MAX];
	fact[0]=0;
	fact[1]=1;
	int n;
	cin>>n;
	for(i=2;i<=n;i++)
	{
		fact[i]=(fact[i-1]+fact[i-2])%1000000007;
		if(fact[i]<0)
		fact[i]=fact[i]+1000000007;
	}
	cout<<fact[n]<<" ";
	return 0;
}
