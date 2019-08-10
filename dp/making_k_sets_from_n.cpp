#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n>>k;
	int a[n+1][k+1];
	for(i=0;i<=k;i++)
	a[0][i]=0;
	for(j=0;j<=n;j++)
	a[j][0]=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=k;j++)
		{
			if(i==j||j==1)
				a[i][j]=1;
			else
			{
				a[i][j]=a[i-1][j-1]+j*a[i-1][j];
			}
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<a[n][k];
	cout<<"\n";
	return 0;
}
