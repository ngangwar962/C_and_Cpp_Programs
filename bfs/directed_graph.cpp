#include<bits/stdc++.h>
#include<vector>
using namespace std;
void addedge(vector<pair<int,int> > adj[],int v1,int v2,int wt)
{
	adj[v1].push_back(make_pair(v2,wt));
	adj[v2].push_back(make_pair(v1,wt));
	return;
}
void printg(vector<pair<int,int> > adj[],int v)
{
	int i,j;
	for(i=0;i<v;i++)
	{
		cout<<i<<" ";
		vector<pair<int,int> >::iterator it;
		for(it=adj[i].begin();it!=adj[i].end();it++)
		cout<<it->first<<"--"<<it->second<<" ";
		cout<<"\n";
	}
	return;
}
int main()
{
	int i,j,k;
	int v,e,v2,v1;
	cin>>v;
	vector<pair<int,int> > adj[v];
	int n;
	cin>>n;
	int wt;
	for(i=0;i<n;i++)
	{
		cin>>v1>>v2>>wt;
		addedge(adj,v1,v2,wt);
	}
	printg(adj,v);
	return 0;
}
