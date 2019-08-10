#include<bits/stdc++.h>
#include<iostream>
#include<unordered_set>
using namespace std;
bool check(int complement,unordered_set<int> s)
{
	if(s.find(complement)!=s.end())
	{
		return true;
	}
	return false;
}
int main()
{
	unordered_set<int> s1;
	int i,j,k,l;
	int n;
	cout<<"enter the size of the array"<<"\n";
	cin>>n;
	int a[n];
	int flag=0;
	cout<<"enter the elements of the array"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int sum;
	cin>>sum;
	for(i=0;i<n;i++)
	{
		int complement=sum-a[i];
		if(check(complement,s1))
		{
			cout<<a[i]<<" "<<complement<<"\n";
			flag=1;
			break;
		}
		s1.insert(a[i]);
	}
	if(flag==0)
	{
		cout<<"-1"<<"\n";
		return 0;
	}
	return 0;
}
