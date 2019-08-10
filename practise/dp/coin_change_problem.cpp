#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	int n;
	cin>>n;
	int coins[n+1];
	coins[0]=0;
	for(i=1;i<=n;i++)
	cin>>coins[i];
	sort(coins,coins+n+1);
	int change;
	cin>>change;
	int a[change+1][n+1];
	for(i=0;i<=change;i++)
	a[i][0]=0;
	for(i=0;i<=n;i++)
	a[0][i]=1;
	for(i=1;i<=change;i++)
	{
		for(j=1;j<=n;j++)
		{
			int k=0;
			if(i>=coins[j])
			{
				k=a[i-coins[j]][j];
			}
			a[i][j]=k+a[i][j-1];
		}
	}
	cout<<a[change][n]<<"\n";
	return 0;
}
