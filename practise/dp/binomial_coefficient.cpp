#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,n,r;
	cin>>n>>r;
	int a[n+1][r+1];
	for(i=0;i<=n;i++)
	{
		a[i][0]=1;
	}
	for(i=0;i<=r;i++)
	{
		a[0][i]=0;
	}
	a[0][0]=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=r;j++)
		{
			if(i==j)
			a[i][j]=1;
			if(j>i)
			a[i][j]=0;
			else
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
	cout<<a[n][r]<<"\n";
	return 0;
}
