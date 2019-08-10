#include<bits/stdc++.h>
#include<vector>
using namespace std;
void addedge(vector<int> adj[],int v1,int v2)
{
	adj[v1].push_back(v2);
	adj[v2].push_back(v1);
	return;
}
void printg(vector<int> adj[],int v)
{
	int i,j;
	for(i=0;i<v;i++)
	{
		cout<<i<<" ";
		vector<int>::iterator it;
		for(it=adj[i].begin();it!=adj[i].end();it++)
		cout<<"->"<<*it;
		cout<<"\n";
	}
	return;
}
int main()
{
	int i,j,k;
	int v,e,v2,v1;
	cin>>v;
	vector<int> adj[v];
	int n;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>v1>>v2;
		addedge(adj,v1,v2);
	}
	printg(adj,v);
	return 0;
}
