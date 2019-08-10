#include<iostream>
using namespace std;
int main()
{
	int i,k,j,l,n,m;
	cin>>n>>m;
	if(n!=m)
	{
		cout<<"transpose of such a matrix is not possible"<<endl;
		return 0;
	}
	int a[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"before"<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			int temp;
			temp=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=temp;
		}
	}
	cout<<"matrix after"<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
