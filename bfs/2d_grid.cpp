#include<bits/stdc++.h>
#define MAX 1000
using namespace std;
int mini=10000;
bool visited[MAX][MAX]={0};
int level[MAX][MAX];
int grid[MAX][MAX];
int check(int x,int y,int row,int col)
{
	if(x<0||y<0||x>row||y>col)
	return 0;
	else if(visited[x][y])
	return 0;
	else if(grid[x][y]!=0)
	return 0;
	else if((x==row||x==0||y==0||y==col)&&(grid[x][y]==0))
	return 1;
	else
	return 1;
}
void bfs(int x,int y,int row,int col)
{
	queue<pair<int,int> > q;
	q.push(make_pair(x,y));
	visited[x][y]=true;
	level[x][y]=0;
	pair<int,int> p;
	while(!q.empty())
	{
		p=q.front();
		q.pop();
		int x_cord=p.first;
		int y_cord=p.second;
		/*if(x_cord==0||y_cord==0||x_cord==row||y_cord==col)
		{
			visited[x_cord][y_cord]=true;
			level[x_cord][y_cord]=0;
			q.push(make_pair(x_cord,y_cord));
			return;
		}*/
		if(check(x_cord+1,y_cord,row,col))
		{
			visited[x_cord+1][y_cord]=true;
			level[x_cord+1][y_cord]=level[x_cord][y_cord]+1;
			q.push(make_pair(x_cord+1,y_cord));
		}
		if(check(x_cord-1,y_cord,row,col))
		{
			visited[x_cord-1][y_cord]=true;
			level[x_cord-1][y_cord]=level[x_cord][y_cord]+1;
			q.push(make_pair(x_cord-1,y_cord));
		}
		if(check(x_cord,y_cord+1,row,col))
		{
			visited[x_cord][y_cord+1]=true;
			level[x_cord][y_cord+1]=level[x_cord][y_cord]+1;
			q.push(make_pair(x_cord,y_cord+1));
		}
		if(check(x_cord,y_cord-1,row,col))
		{
			visited[x_cord][y_cord-1]=true;
			level[x_cord][y_cord-1]=level[x_cord][y_cord]+1;
			q.push(make_pair(x_cord,y_cord-1));
		}
	}
	return;
}
int main()
{
	int i,j,k;
	int n,m;
	cin>>n>>m;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>grid[i][j];
		}
	}
	int x_axis,y_axis;
	cin>>x_axis>>y_axis;
	bfs(x_axis,y_axis,n-1,m-1);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cout<<level[i][j]<<" ";
			if(i==0||j==0||i==n-1||j==m-1)
			{
			if((mini>level[i][j])&&(level[i][j]!=0))
			{
				mini=level[i][j];
			}
			}
		}
		cout<<"\n";
	}
	cout<<mini<<"\n";
	return 0;
}
