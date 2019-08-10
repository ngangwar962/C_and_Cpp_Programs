#include<iostream>
#include<bits/stdc++.h>
#define MAX 1000000007
using namespace std;
int main()
{
	long int i,j,k,n,r,p;
	cin>>n>>r;
	p=MAX;
	long int a[n+1][r+1];
	for(i=0;i<=r;i++)
	a[0][i]=0;
	for(j=0;j<=n;j++)
	a[j][0]=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=r;j++)
		{
			a[i][j]=((a[i-1][j-1]%p)+(a[i-1][j])%p)%p;
			if(a[i][j]<0)
			a[i][j]+=p;
		}
	}
	cout<<a[n][r]<<"\n";
	return 0;
}
