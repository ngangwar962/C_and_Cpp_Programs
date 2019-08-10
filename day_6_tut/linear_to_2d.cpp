#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n,m;
	cin>>n>>m;
	int a[n*m];
	for(i=0;i<n*m;i++)
	cin>>a[i];
	int arr[n][m];
	int count=0;
	for(i=0;i<n*m;i++)
	{
		arr[i/m][i%m]=a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
