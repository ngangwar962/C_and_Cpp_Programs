#include<bits/stdc++.h>
using namespace std;
void combination(int arr[],int n,int r,int r_index,int data[],int n_index)
{
	int i;
	if(r_index==r)
	{
		for(i=0;i<r_index;i++)
		{
			cout<<data[i]<<" ";
		}
		cout<<"\n";
		return;
	}
	if(n_index>=n)
	{
		return;
	}
	combination(arr,n,r,r_index,data,n_index+1);
	data[r_index]=arr[n_index];
	combination(arr,n,r,r_index+1,data,n_index+1);
	return;
}
int main()
{
	int i,j,k,n;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	cout<<"enter the size of the subarray"<<"\n";
	cin>>k;
	int data[k];
	combination(arr,n,k,0,data,0);
	return 0;
}
