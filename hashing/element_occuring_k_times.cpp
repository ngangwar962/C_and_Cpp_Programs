#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	int n;
	cout<<"enter size and the occurence number"<<"\n";
	cin>>n>>k;
	long int a[n];
	map<long int,long int> m;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		m[a[i]]++;
	}
	map<long int,long int>::iterator it;
	for(it=m.begin();it!=m.end();it++)
	{
		if(m[it->first]==k)
		{
			cout<<it->first<<" ";
		}
	}
	cout<<"\n";
	return 0;
}
