#include<bits/stdc++.h>
using namespace std;
void selecting(int a[],int n,int r,int index,int data[],int i)
{
	if(index==r)
	{
		for(i=0;i<r;i++)
		cout<<data[i]<<" ";
		cout<<"\n";
		return;
	}
	if(i>=n)
	return;
	data[index]=a[i];
	selecting(a,n,r,index+1,data,i+1);
	selecting(a,n,r,index,data,i+1);
	return;
}
int main()
{
	int i,j,k,n,r;
	cin>>n>>r;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	int data[r];
	selecting(a,n,r,0,data,0);
	return 0;
}
