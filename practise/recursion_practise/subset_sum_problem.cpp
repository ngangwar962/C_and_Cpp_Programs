#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	int n,sum;
	cin>>sum>>n;
	int subset[sum+1][n+1];
	int a[n+1];
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	a[0]=0;
	sort(a,a+n+1);
	/*for(i=0;i<=n;i++)
	cout<<a[i]<<" ";
	cout<<"\n";*/
	for(i=0;i<=n;i++)
	subset[0][i]=1;
	for(i=0;i<=sum;i++)
	subset[i][0]=0;
	subset[0][0]=1;
	for(i=1;i<=sum;i++)
	{
		for(j=1;j<=n;j++)
		{
			int k=0;
			if(i>=a[j])
			{
				k=subset[i-a[j]][j-1];	
			}
			subset[i][j]=subset[i][j-1]+k;
		}
	}
	cout<<subset[sum][n]<<"\n";
	return 0;
}
