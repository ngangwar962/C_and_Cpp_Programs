#include<bits/stdc++.h>
using namespace std;
#define MAX 10000
bool visited[MAX]={0};
int level[MAX]={0};
int vertices;
void addedge(vector<int> adj[],int v1,int v2)
{
	adj[v1].push_back(v2);
	adj[v2].push_back(v1);
	return;
}
void printg(vector<int> adj[],int v)
{
	cout<<v;
	int i;
	for(i=0;i<adj[v].size();i++)
	{
		cout<<"->"<<adj[v][i];
	}
	cout<<"\n";
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
	visited[s]=true;
	level[s]=0;
	while(!q.empty())
	{
		int p=q.front();
		q.pop();
		vector<int>::iterator it;
		for(it=adj[p].begin();it!=adj[p].end();it++)
		{
			if(!visited[*it])
			{
				q.push(*it);
				visited[*it]=true;
				level[*it]=level[p]+1;
			}
		}
	}
	return;
}
int main()
{
	int i,j,k,edges;
	cin>>vertices;
	vector<int> adj[vertices];
	cin>>edges;
	int v1,v2;
	for(i=0;i<edges;i++)
	{
		cin>>v1>>v2;
		addedge(adj,v1,v2);
	}
	for(i=0;i<vertices;i++)
	{
		printg(adj,i);
	}
	bfs(adj,0);
	for(i=0;i<vertices;i++)
	{
		cout<<level[i]<<" ";
	}
	cout<<"\n";
	return 0;
}
