#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
	int i,j,k;
	vector<int> vec;
	int temp;
	int n;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>temp;
		vec.push_back(temp);
	}
	vector<int>::iterator it;
	for(it=vec.begin();it!=vec.end();it++)
	{
		if(*it<0)
		{
			vec.erase(it);
		}
	}
	cout<<"\n";
	for(it=vec.begin();it!=vec.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<"\n";
	return 0;
}
