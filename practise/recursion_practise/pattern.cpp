#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	int n;
	cin>>n;
	int a[n][n];
	int count=1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			a[i][j]=count++;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
