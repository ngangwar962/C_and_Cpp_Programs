#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,n,r,p;
	cin>>n>>r>>p;
	int a[n+1][r+1];
	for(i=0;i<=r;i++)
	a[0][i]=0;
	for(i=0;i<=n;i++)
	a[i][0]=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=r;j++)
		{
			if(i<j)
			a[i][j]=0;
			else
			{
				a[i][j]=(a[i-1][j-1]%p+(a[i-1][j])%p)%p;
				if(a[i][j]<0)
				a[i][j]=a[i][j]+1000000007;
			}
		}
	}
	cout<<a[n][r]<<"\n";
	return 0;
}
