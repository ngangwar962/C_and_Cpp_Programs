#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l,n;
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
	cout<<a[i][i]<<" ";
	cout<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i][n-1-i]<<" ";
	}
	cout<<endl;
	return 0;
}
