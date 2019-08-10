#include<bits/stdc++.h>
#define MAX 1000
using namespace std;
static int county=0;
void subset_sum(int arr[],int n,int r,int r_index,int data[],int n_index,int sum)
{
	int i;
	if(r_index==r)
	{
		long int sums=0;
		for(i=0;i<r_index;i++)
		{
			sums+=data[i];
		}
		if(sums==sum)
		county++;
		return;
	}
	if(n_index>=n)
	return;
	subset_sum(arr,n,r,r_index,data,n_index+1,sum);
	data[r_index]=arr[n_index];
	subset_sum(arr,n,r,r_index+1,data,n_index+1,sum);
	return;
}
int main()
{
	int i,j,k,n,r;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	cout<<"enter the value of r"<<"\n";
	cin>>r;
	long int sum;
	cout<<"Enter the sum"<<"\n";
	cin>>sum;
	int data[r];
	subset_sum(arr,n,r,0,data,0,sum);
	cout<<county<<"\n";
	return 0;
}
