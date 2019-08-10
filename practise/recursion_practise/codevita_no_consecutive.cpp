#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void permute(int arr[],int start,int last,int count)
{
	int i;
	if(start==last)
	{
		for(i=0;i<count;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
		return;
	}
	for(i=start;i<last;i++)
	{
		swap(arr[start],arr[i]);
		permute(arr,start+1,last,count);
		swap(arr[start],arr[i]);
	}
	return;
}
int main()
{
	int i,j,k,l;
	int num;
	cin>>num;
	int count=0;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		count++;
	}
	int arr[count];
	for(i=0;i<count;i++)
	{
		arr[i]=i+1;
		//cout<<arr[i]<<" ";
	}
	permute(arr,0,count,count);
	return 0;
}
