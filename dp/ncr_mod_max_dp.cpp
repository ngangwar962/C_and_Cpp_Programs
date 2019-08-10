#include<iostream>
#define MAX 1000000007
using namespace std;
int main()
{
	long int i,j,k;
	long int n;
	cin>>n>>k;
	long long c[n+1][k+1];
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
			long long temp=(c[i-1][j-1]%MAX+c[i-1][j]%MAX)%MAX;
			if(temp<0)
			{
				c[i][j]=temp+MAX;
			}
			else
			{
				c[i][j]=temp;
			}
		}
	}
	cout<<c[n][k]<<"\n";
	return 0;
}
