#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l,n1,m1,n2,m2;
	cin>>n1>>m1>>n2>>m2;
	if((n1!=n2)||(m1!=m2))
	return 0;
	int a[n1][m1];
	int b[n2][m2];
	for(i=0;i<n1;i++)
	{
		for(j=0;j<m1;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"enter the entries of the second matrices"<<endl;
	for(i=0;i<n2;i++)
	{
		for(j=0;j<m2;j++)
		{
			cin>>b[i][j];
		}
	}
	int c[n1][m1];
	for(i=0;i<n1;i++)
	{
		for(j=0;j<m1;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<n1;i++)
	{
		for(j=0;j<m1;j++)
		{
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
