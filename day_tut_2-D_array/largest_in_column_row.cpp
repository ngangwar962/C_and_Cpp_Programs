#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l,m,n;
	cin>>n>>m;
	int a[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		int rmax=0;
		for(j=0;j<n;j++)
		{
			if(a[i][j]>rmax)
			rmax=a[i][j];
		}
		cout<<rmax<<" ";
	}
	cout<<endl;
	for(i=0;i<n;i++)
	{
		int cmax=0;
		for(j=0;j<m;j++)
		{
			if(a[j][i]>cmax)
				cmax=a[j][i];
		}
		cout<<cmax<<" ";
	}
	cout<<endl;
	return 0;
}
