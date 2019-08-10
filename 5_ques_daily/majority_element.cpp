#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	int n;
	cin>>n;
	map<int,int> m;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	{
		if(m.find(a[i])==m.end())
		{
			m[a[i]]=1;
		}
		else
		{
			m[a[i]]++;
		}
	}
	int maxi=0;
	int number;
	int flag=0;
	map<int,int>::iterator it;
	for(it=m.begin();it!=m.end();it++)
	{
		if(it->second>=(n/2))
		{
			flag=1;
			maxi=it->second;
			number=it->first;
		}
	}
	if(flag==1)
	cout<<number<<" no of times "<<maxi<<"\n";
	else
	cout<<"-1"<<"\n";
	return 0;
}
