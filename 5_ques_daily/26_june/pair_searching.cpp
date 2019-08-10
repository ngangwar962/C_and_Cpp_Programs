#include<iostream>
#include<unordered_set>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,l;
	/*ios_base::sync_with_stdio(false);
	cin.tie(NULL);*/
	unordered_set<int> s;
	int n;
	cout<<"enter the number of elements"<<"\n";
	cin>>n;
	int a[n];
	cout<<"enter the elements of the array"<<"\n";
	for(i=0;i<n;i++)
	cin>>a[i];
	int sum;
	cout<<"enter the sum"<<"\n";
	cin>>sum;
	for(i=0;i<n;i++)
	{
		int complement=sum-a[i];
		if(s.find(complement)==s.end())
		{
			s.insert(a[i]);
		}
		else
		{
			cout<<a[i]<<" "<<complement<<"\n";
			return 0;
		}
	}
	return 0;
}
