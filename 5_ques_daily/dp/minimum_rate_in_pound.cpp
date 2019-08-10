#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,n;
	map<long int,long int> m;
	cin>>n;
	for(i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		m[temp]++;
	}
	map<long int,long int>::iterator it;
	int count=0;
	for(it=m.begin();it!=m.end();it++)
	{
		if(m[it->first]==1)
		count++;
	}
	cout<<count<<"\n";
	return 0;
}
