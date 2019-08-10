#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n;
	int pair[n+1];
	pair[0]=1;
	pair[1]=1;
	for(i=2;i<=n;i++)
	pair[i]=pair[i-1]+(i-1)*pair[i-2];
	cout<<pair[n]<<"\n";
	return 0;
}
