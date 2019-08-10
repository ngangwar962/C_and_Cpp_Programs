//non negative integers subset sum problem

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	int sum,m;
	cin>>sum>>m;
	int arr[m+1];
	int a[sum+1][m+1]={0};
	for(i=1;i<=m;i++)
	{
		cin>>arr[i];	
	}
	arr[0]=0;
	sort(arr+1,arr+m+1);
	for(i=0;i<m+1;i++)
	cout<<arr[i]<<" ";
	cout<<"\n";
	for(i=0;i<=sum;i++)
	a[i][0]=0;
	for(j=0;j<=m;j++)
	a[0][j]=1;
	for(i=1;i<=sum;i++)
	{
		for(j=1;j<=m;j++)
		{
			k=0;
			if(i>=arr[j])
			{
				k=a[i-arr[j]][j-1];
			}
			a[i][j]=k+a[i][j-1];
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	if(a[sum][m])
	cout<<"Yes "<<a[sum][m]<<"\n";
	else
	cout<<"No"<<"\n";
	
	/*for(i=0;i<m+1;i++)
	cout<<arr[i]<<" ";
	cout<<"\n";*/
	return 0;
}
