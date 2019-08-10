#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
	int i,j,k;
	vector<int> vec;
	int n;
	cin>>n;
	vec.push_back(n);
	cin>>n;
	vec.push_back(n);
	cin>>n;
	vec.push_back(n);
	vector<int>::iterator it;
	for(it=vec.begin();it!=vec.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<"\n";
	vec.pop_back();
	for(it=vec.begin();it!=vec.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<"\n";
	vec.insert(vec.begin(),-10);
	for(it=vec.begin();it!=vec.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<"\n";
	vec.erase(vec.begin());
	for(it=vec.begin();it!=vec.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<"\n";
	return 0;
}
