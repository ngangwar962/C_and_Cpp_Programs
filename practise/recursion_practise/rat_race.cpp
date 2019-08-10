#include<bits/stdc++.h>
using namespace std;
int n;
int coordinate(int a[n][n],int i,int j)
{
	if(i<0||i>n-1||j<0||j>n-1)
	{
		return 0;
	}
}
int main()
{
	int i,j,k;
	cin>>n;
	int a[n][n]={{1,0,0,0},{0,1,0,0},{0,1,1,0},{0,0,1,1}};
	/*for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}*/
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	coordinate(a,0,0);
	return 0;
}
