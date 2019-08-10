#include<bits/stdc++.h>
#include<unordered_set>
#include<iostream>
//typedef unordered_set<int> s;
using namespace std;
int main()
{
	long int i,j,k,l,n;
	cin>>n;
	long int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int flag=0;
	unordered_set<int> s;
	for(i=0;i<n;i++)
	{
		if(s.find(arr[i])==s.end())
		{
			s.insert(arr[i]);
		}
		else
		{
			flag=1;
		}
	}
	if(flag==1)
	{
		cout<<"ugly"<<"\n";
		return 0;
	}
	flag=0;
	for(i=1;i<n;i++)
	{
		if(arr[i-1]>arr[i])
		flag=1;
	}
	if(flag==0)
	{
		cout<<"ugly"<<"\n";
		return 0;
	}
	for(i=0;i<n;i++)
	{
		if(!(arr[i]>0&&arr[i]<=n))
		{
			cout<<"ugly"<<"\n";
			return 0;
		}
	}
	cout<<"beautiful"<<"\n";
	return 1;
}
