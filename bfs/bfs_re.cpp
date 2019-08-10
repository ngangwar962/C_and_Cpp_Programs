#include<bits/stdc++.h>
#define MAX 10000
using namespace std;
int vertices;
bool visited[MAX];
int level[MAX];
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
	visited[s]=true;
	level[s]=0;
	queue<int> q;
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
				level[*it]=level[p]+1;
				visited[*it]=true;
				q.push(*it);
			}
		}	
	}
	return;
}
int main()
{
	int i,j,k,v2,v1;
	cin>>vertices;
	int edges;
	cin>>edges;
	vector<int> adj[vertices];
	for(i=0;i<edges;i++)
	{
		cin>>v1>>v2;
		addedge(adj,v1,v2);	
	}
	bfs(adj,3);
	for(i=0;i<vertices;i++)
	{
		cout<<level[i]<<" ";
	}
	cout<<"\n";
	return 0;
}
