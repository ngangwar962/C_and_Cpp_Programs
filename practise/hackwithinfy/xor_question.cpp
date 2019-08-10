#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n;
	int a[n];
	int temp=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		temp=temp^a[i];
	}
	int b[n-1];
	int temp2=0;
	for(i=0;i<n-1;i++)
	{
		cin>>b[i];
		temp=temp^b[i];
		temp2=temp2^b[i];
	}
	cout<<temp<<"\n";
	int temp3=0;
	int c[n-2];
	for(i=0;i<n-2;i++)
	{
		cin>>c[i];
		temp2=temp2^c[i];
		temp3=temp3^c[i];
	}
	cout<<temp2<<"\n";
	int d[n-3];
	for(i=0;i<n-3;i++)
	{
		cin>>d[i];
		temp3=temp3^d[i];
	}
	cout<<temp3<<"\n";
	return 0;
}
