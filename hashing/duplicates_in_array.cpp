#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	map<long int,long int> m;
	int n;
	cin>>n;
	long int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		m[a[i]]++;
	}
	map<long int,long int>::iterator it;
	for(it=m.begin();it!=m.end();it++)
	{
		if(m[it->first]>1)
		{
			cout<<it->first<<" ";
		}
	}
	cout<<"\n";
	return 0;
}
