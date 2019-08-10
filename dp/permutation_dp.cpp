#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l;
	int n;
	cin>>n>>k;
	int c[n+1][k+1];
	for(i=0;i<=n;i++)
	{
		c[i][0]=1;
	}
	for(j=0;j<=k;j++)
	{
		c[0][j]=0;
	}
	c[0][0]=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=k;j++)
		{
			c[i][j]=c[i-1][j]+j*c[i-1][j-1];
		}
	}
	cout<<c[n][k]<<"\n";
	return 0;
}
