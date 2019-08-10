#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,l,n1,n2;
	cout<<"enter the size of the first array"<<"\n";
	cin>>n1;
	int a11[n1];
	int temp;
	cout<<"enter the elements of the first array"<<"\n";
	for(i=0;i<n1;i++)
	{
		cin>>a11[i];
	}
	cout<<"enter the size of the second array"<<"\n";
	cin>>n2;
	int a12[n2];
	cout<<"enter the elements of the second array"<<"\n";
	for(j=0;j<n2;j++)
	{
		cin>>a12[j];
	}
	std::sort(a11,a11+n1);
	std::sort(a12,a12+n2);
	vector<int> v(n1+n2);
	for(i=0;i<n1;i++)
	cout<<a11[i]<<" ";
	cout<<"\n";
	for(j=0;j<n2;j++)
	cout<<a12[j]<<" ";
	cout<<"\n";
	std::vector<int>::iterator it,st;
	it=set_union(a11,a11+n1,a12,a12+n2,v.begin());
	for(st=v.begin();st!=it;st++)
	{
		cout<<*st<<" ";
	}
	cout<<"\n";
	it=set_intersection(a11,a11+n1,a12,a12+n2,v.begin());
	for(st=v.begin();st!=it;st++)
	{
		cout<<*st<<" ";
	}
	cout<<"\n";
	return 0;
}
