#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	int n;
	cin>>n>>k;
	map<long int,long int> m;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		m[a[i]]++;
	}
	int max=0;
	int element=0;
	map<long int,long int>::iterator it;
	for(it=m.begin();it!=m.end();it++)
	{
		if(m[it->first]>max)
		{
			max=m[it->first];
			element=it->first;
		}
	}
	cout<<element<<"\n";
	return 0;
}
