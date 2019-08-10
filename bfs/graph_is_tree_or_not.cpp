#include<bits/stdc++.h>
using namespace std;
static int degree_count=0;
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
		cout<<i;
		vector<int>::iterator it;
		for(it=adj[i].begin();it!=adj[i].end();it++)
		{
			degree_count++;
			cout<<"->"<<*it;
		}
		cout<<"\n";
	}
	return;
}
int main()
{
	int v;
	cout<<"enter the count of vertices"<<"\n";
	cin>>v;
	vector<int> adj[v];
	int n;
	cout<<"enter the count of edges"<<"\n";
	cin>>n;
	int v1,v2,i;
	for(i=0;i<n;i++)
	{
		cin>>v1>>v2;
		addedge(adj,v1,v2);
	}
	printg(adj,v);
	int edges=degree_count/2;
	if(edges==v-1)
	{
		cout<<"Yes graph is tree"<<"\n";
	}
	else
	{
		cout<<"No it is not a tree"<<"\n";
	}
	return 0;
}
