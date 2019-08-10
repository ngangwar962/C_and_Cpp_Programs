#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l;
	int n;
	cin>>n>>k;
	int partition[n+1][k+1];
	for(i=0;i<=n;i++)
	{
		partition[i][0]=0;
		partition[0][i]=0;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=k;j++)
		{
			if((i>0&&j==1)||(i==j))
			{
				partition[i][j]=1;
			}
			else
			{
				partition[i][j]=partition[i-1][j-1]+j*partition[i-1][j];
			}
		}
	}
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=k;j++)
		{
			cout<<partition[i][j]<<" ";
		}
		cout<<"\n";
	}
	//cout<<partition[n][k]<<"\n";
	return 0;
}
