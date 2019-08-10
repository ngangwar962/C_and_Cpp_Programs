#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	int n;
	cin>>n;
	int a[n+1];
	a[0]=0;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int sum;
	cin>>sum;
	int subset[sum+1][n+1];
	for(i=0;i<=n;i++)
	subset[0][i]=1;
	for(j=0;j<=sum;j++)
	subset[j][0]=0;
	for(i=1;i<=sum;i++)
	{
		for(j=1;j<=n;j++)
		{
			int k=0;
			if(i>=a[j])
			{
				k=subset[i-a[j]][j-1];
			}
			subset[i][j]=k+subset[i][j-1];
		}
	}
	cout<<subset[sum][n]<<"\n";
	return 0;
}
