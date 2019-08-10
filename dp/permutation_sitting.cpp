#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n>>k;
	int a[n+1][k+1]={0};
	for(i=0;i<=k;i++)
	a[0][i]=0;
	for(j=0;j<=n;j++)
	a[j][0]=1;
	a[0][0]=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=k;j++)
		{
			if(i>=j)
			{
				a[i][j]=j*a[i-1][j-1]+a[i-1][j];
				//cout<<a[i][j]<<" "<<i<<" "<<j<<"\n";
			}
		}
	}
	cout<<a[n][k]<<"\n";
	return 0;
}
