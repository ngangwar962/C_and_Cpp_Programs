#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	int n;
	cin>>n;
	int coins[n+1];
	for(i=1;i<=n;i++)
	cin>>coins[i];
	coins[0]=0;
	long int sum;
	sort(coins,coins+n+1);
	cout<<"enter the sum"<<"\n";
	cin>>sum;
	int coin_change[sum+1][n+1];
	for(i=0;i<=n;i++)
	coin_change[0][i]=1;
	for(i=0;i<=sum;i++)
	coin_change[i][0]=0;
	for(i=1;i<=sum;i++)
	{
		for(j=1;j<=n;j++)
		{
			int k=0;
			if(i>=coins[j])
			{
				k=coin_change[i-coins[j]][j];
			}
			coin_change[i][j]=k+coin_change[i][j-1];
		}
	}
	cout<<coin_change[sum][n]<<"\n";
	return 0;
}
