#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void my_copy(vector<int> &v1,vector<int> &v2)
{
	int i;
	vector<int>::iterator it;
	for(it=v1.begin();it!=v1.end();it++)
	{
		v2.push_back(*it);
	}
	return;
}
int main()
{
	int i,j,k;
	int n;
	cin>>n;
	vector<int> v1;
	int temp;
	for(i=0;i<n;i++)
	{
		cin>>temp;
		v1.push_back(temp);
	}
	vector<int> v2;
	my_copy(v1,v2);
	for(i=0;i<v1.size();i++)
	cout<<v1[i]<<" "<<v2[i]<<"\n";
	cout<<"\n";
	return 0;
}
