#include<bits/stdc++.h>
using namespace std;
#define MAX 10000
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
	q.push(s);
	level[s]=0;
	visited[s]=true;
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
}
int main()
{
	int i,j,k;
	cin>>vertices;
	vector<int> adj[vertices];
	int edges;
	cin>>edges;
	int v1,v2;
	for(i=0;i<edges;i++)
	{
		cin>>v1>>v2;
		addedge(adj,v1,v2);	
	}
	bfs(adj,0);
	for(i=0;i<vertices;i++)
	{
		cout<<level[i]<<" ";
	}
	cout<<"\n";
	return 0;
}
