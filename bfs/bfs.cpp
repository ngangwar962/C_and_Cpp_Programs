#include<bits/stdc++.h>
#define MAX 10000
using namespace std;
int vertices;
int level[MAX];
bool visited[MAX];
void addedge(vector<int> adj[],int v1,int v2)
{
	adj[v1].push_back(v2);
	adj[v2].push_back(v1);
	return;
}
void bfs(vector<int> adj[],int s)
{
	int i;
	for(i=1;i<=vertices;i++)
	{
	level[i]=-1;
	visited[i]=0;
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
				level[*it]=level[p]+1;
				visited[*it]=true;
				q.push(*it);
			}
		}
	}
}
int main()
{
	int i,j,k,n,v1,v2;
	cin>>vertices;
	vector<int> adj[vertices];
	cout<<"enter the number of edges"<<"\n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>v1>>v2;
		addedge(adj,v1,v2);
	}
	bfs(adj,1);
	for(i=1;i<=vertices;i++)
	{
		cout<<level[i]<<" ";
	}
	cout<<"\n";
	return 0;
}
