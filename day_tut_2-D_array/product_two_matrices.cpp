#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n1,m1,n2,m2;
	cin>>n1>>m1>>n2>>m2;
	if(m1!=n2)
	return 0;
	int a[n1][m1],b[n2][m2],c[n1][m2];
	cout<<"enter the entries of the first matrices"<<endl;
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
	int sum=0;
	for(i=0;i<n1;i++)
	{
		for(k=0;k<m2;k++)
		{
			sum=0;
			for(j=0;j<m1;j++)
			{
				sum=sum+a[i][j]*b[j][k];
			}
			c[i][k]=sum;
		}
	}
	for(i=0;i<n1;i++)
	{
		for(j=0;j<m2;j++)
		{
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
