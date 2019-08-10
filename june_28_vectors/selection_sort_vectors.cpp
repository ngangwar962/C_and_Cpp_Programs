#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,l;
	vector<int> a;
	int n;
	cin>>n;
	int temp;
	for(i=0;i<n;i++)
	{
		cin>>temp;
		a.push_back(temp);
	}
	vector<int>::iterator it;
	for(it=a.begin();it!=a.end();it++)
	{
		if(it!=min_element(it,a.end()))
		{
			swap(*it,*min_element(it,a.end()));
		}
	}
	for(i=0;i<a.size();i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	return 0;
}
