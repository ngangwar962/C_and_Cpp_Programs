#include<bits/stdc++.h>
#define MAX 10000
using namespace std;
int vertices;
bool visited[MAX]={0};
void addedge(vector<int> adj[],int v1,int v2)
{
	adj[v1].push_back(v2);
	adj[v2].push_back(v1);
	return;
}
void printg(vector<int> adj[],int v)
{
	vector<int>::iterator it;
	cout<<v;
	for(it=adj[v].begin();it!=adj[v].end();it++)
	{
		cout<<"->"<<*it;
	}
	cout<<"\n";
	return;
}
void dfs(vector<int> adj[],int s)
{
	visited[s]=true;
	int i;
	for(i=0;i<adj[s].size();++i)
	{
		if(!visited[adj[s][i]])
		{
			dfs(adj,adj[s][i]);
		}	
	}
	return;
}
void dfs_stack(vector<int> adj[],int s,stack<int> st)
{
	int i;
	while(!st.empty())
	{
		int tp=st.top();
		vector<int>::iterator it;
		for(it=adj[tp].begin();it!=adj[tp].end();it++)
		{
			if(!visited[*it])
			{
				visited[*it]=true;
				st.push(*it);
				dfs_stack(adj,*it,st);
			}
		}
		cout<<st.top()<<"\n";
		st.pop();	
	}
	return;
}
int main()
{
	int i,j,k;
	cin>>vertices;
	vector<int> adj[vertices];
	stack<int> st;
	int edges,v1,v2;
	cin>>edges;
	for(i=0;i<edges;i++)
	{
		cin>>v1>>v2;
		addedge(adj,v1,v2);
	}
	for(i=0;i<vertices;i++)
	printg(adj,i);
	int no_of_connected_components=0;
	for(i=0;i<vertices;i++)
	{
		if(!visited[i])
		{
		visited[i]=true;
		st.push(i);
		dfs_stack(adj,i,st);
		no_of_connected_components++;
		}
	}
	cout<<"number of connected components "<<no_of_connected_components<<"\n";
	return 0;
}
