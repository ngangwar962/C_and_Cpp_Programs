#include<iostream>
#include<stdlib.h>
#include<math.h>
int a[100];
using namespace std;
void qs(int arr[],int start,int last);
void implementation(int arr[],int start,int last,int selected_j)
{
	int i,j,k;
	int temp=selected_j;
	for(i=start+1;i<=last;i++)
	{
		if(i==last)
		{
			swap(arr[i],arr[selected_j]);
		}
		if(arr[i]<arr[last])
		{
			swap(arr[i],arr[selected_j]);
			selected_j++;
		}
	}
	last=selected_j-1;
	if(abs(start-selected_j)>=1)
	qs(arr,start,last);
	if(abs(selected_j-last)>=1)
	qs(arr,selected_j+1,last);
}
void qs(int arr[],int start,int last)
{
	int i,j,k;
	int pivot=arr[last];
	for(j=start;j<=last;j++)
	{
		if(arr[j]>=pivot)
		{
			if(abs(start-j)>=1)
			qs(arr,start,j-1);
			if(abs(j-last)>=1)
			implementation(arr,j,last,j);
		}
		else if(j==last)
		{
			if(abs(start-j)>=1)
			qs(arr,start,last-1);
		}
	}
	return;
}
int main()
{
	int i,j,k;
	int n;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	qs(a,0,n-1);
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
