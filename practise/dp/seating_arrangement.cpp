#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n>>k;
	int a[n+1][k+1];
	for(i=0;i<=k;i++)
	a[0][i]=0;
	for(i=0;i<=n;i++)
	a[i][0]=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=k;j++)
		{
			if(i<j)
			{
				a[i][j]=0;
			}
			else
			{
				a[i][j]=a[i-1][j]+j*a[i-1][j-1];
			}
		}
	}
	cout<<a[n][k]<<"\n";
	return 0;
}
