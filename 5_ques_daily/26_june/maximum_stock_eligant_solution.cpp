#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,l;
	int n;
	cin>>n;
	vector<pair<long long,long long> > stock(n);
	pair<long long,long long> p;
	long long int a[n];
	long long int dollars,count=0;
	for(i=0;i<n;i++)
	cin>>a[i];
	cin>>dollars;
	for(i=0;i<n;i++)
	{
		p=make_pair(a[i],(i+1));
		stock[i]=p;
	}
	sort(stock.begin(),stock.end());//sorts in increasing order
	/*for(i=0;i<n;i++)
	{
		cout<<stock[i].first<<" "<<stock[i].second<<"\n";
	}
	cout<<dollars<<"\n";*/
	i=0;
	while(i<n)
	{
		
		if((stock[i].first*stock[i].second)<dollars)
		{
			dollars=dollars-(stock[i].first*stock[i].second);
			count+=stock[i].second;
			//cout<<count<<"\n";
		}
		else
		{
			break;
		}
		i++;
	}
	//cout<<count<<"\n";
	if(i<n&&dollars!=0)
	{
		count=count+(dollars/stock[i].first);
		dollars=dollars-(dollars/stock[i].first)*stock[i].first;
		i++;	
	}
	cout<<count<<"\n";
}
