#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n;
	cin>>k;
	int combi[n+1][k+1];
	for(i=0;i<=k;i++)
	combi[0][i]=1;
	for(i=0;i<=n;i++)
	combi[i][0]=0;
	int bell[n+1];
	bell[0]=1;
	for(i=1;i<=n;i++)
	{
		int temp=0;
		for(j=1;j<=k;j++)
		{
			if(j==1)
			combi[i][j]=1;
			if(i==j)
			combi[i][i]=1;
			if(i<j)
			combi[i][j]=0;
			else
			combi[i][j]=combi[i-1][j-1]+j*combi[i-1][j];
			temp=temp+combi[i][j];
		}
		bell[i]=temp;
	}
	cout<<bell[n]<<"\n";
	return 0;
}
