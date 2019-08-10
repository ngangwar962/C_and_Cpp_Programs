#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	int n;
	cin>>n;
	int a[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			cout<<a[i][j]<<" ";
		}
	}
	cout<<"\n";
	for(i=0;i<n;i++)
	{
		cout<<a[n-1-i][i]<<" ";
	}
	cout<<"\n";
}
