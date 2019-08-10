#include<bits/stdc++.h>
using namespace std;
void combination(int a[],int n,int r,int index,int data[],int i)
{
	int j;
	if(index==r)
	{
		for(j=0;j<r;j++)
		{
			cout<<data[j]<<" ";
		}
		cout<<"\n";
		return;
	}
	if(i>=n)
	return;
	data[index]=a[i];
	combination(a,n,r,index+1,data,i+1);
	combination(a,n,r,index,data,i+1);
	return;
}
int main()
{
	int i,j,k;
	int sum,n;
	cout<<"enter the size of array and k"<<"\n";
	cin>>n>>k;
	int data[k];
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	combination(a,n,k,0,data,0);
	return 0;
}
