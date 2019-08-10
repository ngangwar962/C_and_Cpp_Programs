#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,l;
	vector<int> a1,a2;
	int n1;
	cin>>n1;
	int temp;
	for(i=0;i<n1;i++)
	{
		cin>>temp;
		a1.push_back(temp);
	}
	int left,right;
	cout<<"enter the left and right"<<"\n";
	cin>>left>>right;
	vector<int>::iterator it,it1;
	for(it=a1.begin();it!=a1.end();it++)
	{
		if((*it>=left)&&(*it<=right))
		{
			a2.push_back(*it);
		}
	}
	for(it1=a2.begin();it1!=a2.end();it1++)
	{
		cout<<*it1<<" ";
	}
	cout<<"\n";
	return 0;
}
