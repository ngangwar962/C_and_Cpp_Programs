#include<bits/stdc++.h>
#define MAX 1000
using namespace std;
bool visited[MAX];
int level[MAX];
int vertices;
void addedge(vector<int> adj[],int v1,int v2)
{
	adj[v1].push_back(v2);
	adj[v2].push_back(v1);
	return;
}
void bfs(vector<int> adj[],int s)
{
	int i;
	for(i=0;i<vertices;i++)
	{
		visited[i]=0;
		level[i]=-1;
	}
	queue<int> q;
	level[s]=0;
	visited[s]=true;
	q.push(s);
	while(!q.empty())
	{
		int p=q.front();
		q.pop();
		vector<int>::iterator it;
		for(it=adj[p].begin();it!=adj[p].end();it++)
		{
			if(!visited[*it])
			{
				visited[*it]=true;
				level[*it]=level[p]+1;
				q.push(*it);
			}
		}
	}
	return;
}
int main()
{
	int i,j,k,edges,v1,v2;
	cin>>vertices>>edges;
	vector<int> adj[vertices];
	for(i=0;i<edges;i++)
	{
		cin>>v1>>v2;
		addedge(adj,v1,v2);
	}
	bfs(adj,3);
	int count=0;
	for(i=0;i<vertices;i++)
	{
		if(visited[i]==0&&level[i]==-1)
		{
			count++;
		}
		cout<<level[i]<<" ";
	}
	cout<<"\n";
	cout<<"number of unreachable nodes are "<<count<<"\n";
}
