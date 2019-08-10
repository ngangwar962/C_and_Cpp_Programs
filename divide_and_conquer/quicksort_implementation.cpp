#include<iostream>
using namespace std;
void quicksort(int arr[],int left,int right)
{
	int pivot=right;
	int i,j,k;
	if(right-left<=0||left<0||right<0)
	return;
	cout<<"pivot= "<<arr[pivot]<<endl;
	for(i=0;i<=right;i++)
	{
		if(i==pivot)
		{
			swap(arr[i],arr[j]);
			quicksort(arr,left,j-1);
			quicksort(arr,j+1,right);
		}
		else if(arr[i]<arr[pivot])
		{
			swap(arr[j],arr[i]);
			j++;
		}
		else if(j==pivot)
		{
			quicksort(arr,left,j-1);
		}
	}
}
int main()
{
	int i,j,k;
	int n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	quicksort(a,0,n-1);
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
