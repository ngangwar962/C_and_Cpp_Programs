#include<vector>
#include<algorithm>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,l;
	vector<int> a;
	int n;
	cin>>n;
	for(i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		a.push_back(temp);
	}
	cout<<a.size()<<"\n";
	for(i=0;i<a.size();i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	reverse(a.begin(),a.end());
	for(i=0;i<a.size();i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	cout<<*min_element(a.begin(),a.end())<<"\n";
	cout<<*max_element(a.begin(),a.end())<<"\n";
	cout<<accumulate(a.begin(),a.end(),0)<<"\n";
	cout<<"\n";
	return 0;
}
