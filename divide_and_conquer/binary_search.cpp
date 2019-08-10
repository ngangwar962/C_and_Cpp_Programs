#include<iostream>
using namespace std;
int binary_search(int arr[],int start,int last,int key)
{
	int mid=(start+last)/2;
	if(arr[mid]==key)
	{
		cout<<"index= "<<mid<<endl;
		return 1;
	}
	if(arr[mid]>key)
	{
		binary_search(arr,start,mid-1,key);
	}
	else if(arr[mid]<key)
	{
		binary_search(arr,mid+1,last,key);
	}
	return 0;
}
int main()
{
	int i,j,k;
	int n;
	cout<<"enter the size of the array"<<endl;
	cin>>n;
	int arr[n];
	int key;
	cout<<"enter the value of the key"<<endl;
	cin>>key;
	for(i=0;i<n;i++)
	cin>>arr[i];
	binary_search(arr,0,n,key);
	for(i=0;i<n;i++)
	cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}
