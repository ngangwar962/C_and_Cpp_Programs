#include<iostream>
using namespace std;
int starting=-1,ending=-1,n,times;
void binary_search(int arr[],int start,int end,int key)
{
	int mid;
	if(start>end)
	return;
	if((start+end)%2==0)
	{
		mid=(start+end)/2;
	}
	else
	{
		mid=(start+end+1)/2;	
	}
	if(arr[mid]==key)
	{
		if(mid==0)
		{
			starting=0;
			if(ending==-1)
			binary_search(arr,mid+1,end,key);
		}
		else if(mid==n-1)
		{
			ending=n-1;
			if(starting==-1)
			binary_search(arr,start,mid-1,key);
		}
		else if(arr[mid+1]!=key)
		{
			ending=mid;
		}
		else if(arr[mid-1]!=key)
		{
			starting=mid;
		}
		else
		{
			if(starting==-1)
			binary_search(arr,start,mid-1,key);
			if(ending==-1)
			binary_search(arr,mid+1,end,key);
		}
	}
	else if(arr[mid]>key)
	{
		binary_search(arr,start,mid-1,key);
	}
	else if(arr[mid]<key)
	{
		binary_search(arr,mid+1,end,key);
	}
	return;
}
int main()
{
	int i,j,k,value;
	cout<<"enter the size of the array"<<endl;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	cout<<"enter the value to search into the array"<<endl;
	cin>>value;
	cout<<"enter the number of times coming"<<endl;
	cin>>times;
	binary_search(arr,0,n,value);
	cout<<ending<<starting<<endl;
	if(times==(ending-starting+1))
	{
		cout<<ending-starting<<"YES"<<endl;
	}
	else 
	{
		cout<<"NO"<<endl;
	}
	return 0;
}
