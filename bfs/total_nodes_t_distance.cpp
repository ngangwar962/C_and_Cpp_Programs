#include<bits/stdc++.h>
#define MAX 10000
using namespace std;
static int min_count=0;
int vertices;
int level[MAX];
bool visited[MAX];
void addedge(vector<int> adj[],int v1,int v2)
{
	adj[v1].push_back(v2);
	adj[v2].push_back(v1);
	return;
}
int bfs(vector<int> adj[],int s,int t)
{
	queue<int> q;
	int i;
	for(i=0;i<vertices;i++)
	{
		level[i]=0;
		visited[i]=false;
	}
	visited[s]=true;
	level[s]=0;
	cout<<s<<"->";
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
	int count=0;
	for(i=0;i<vertices;i++)
	{
		cout<<level[i]<<" ";
		if(level[i]==t)
		{
			count++;
		}
	}
	cout<<"\n";
	return count;
}
int main()
{
	int i,j,k,v1,v2;
	int edges;
	cin>>vertices;
	cin>>edges;
	vector<int> adj[vertices];
	for(i=0;i<edges;i++)
	{
		cin>>v1>>v2;
		addedge(adj,v1,v2);
	}
	int total=0,t;
	cin>>t;
	for(i=0;i<vertices;i++)
	{
		int res=bfs(adj,i,t);
		total=total+res;
	}
	cout<<total<<"\n";
	return 0;
}
