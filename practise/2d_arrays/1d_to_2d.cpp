#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l;
	int n,m;
	cin>>n>>m;
	int a[n*m];
	int array_2d[n][m];
	for(i=0;i<n*m;i++)
	{
		cin>>a[i];
		array_2d[i/m][i%m]=a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cout<<array_2d[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
