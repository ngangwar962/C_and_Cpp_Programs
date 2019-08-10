#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	int n;
	cin>>n;
	int a[n+1][n+1];
	int bell[n+1];
	for(i=0;i<=n;i++)
	{
	a[i][0]=1;
	a[0][i]=0;
	}
	bell[0]=1;
	for(i=1;i<=n;i++)
	{
		long temp=0;
		for(j=1;j<=i;j++)
		{
			if(i==j||j==1)
			a[i][j]=1;
			else
			{
				a[i][j]=a[i-1][j-1]+j*a[i-1][j];
			}
			temp+=a[i][j];
			cout<<a[i][j]<<" ";
		}
		bell[i]=temp;
		cout<<"\n";
	}
	cout<<bell[n]<<"\n";
	return 0;
}
