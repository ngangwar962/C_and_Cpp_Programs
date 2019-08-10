#include<iostream>
#include<stdlib.h>
using namespace std;
int n=4;
int maze[4][4]={{1,0,0,0},{1,1,0,0},{0,1,0,0},{0,1,1,1}};

int issafe(int x,int y)
{
	if((x>=0)&&(x<=n-1)&&(y>=0)&&(y<=n-1)&&(maze[x][y]==1))
	{
		maze[x][y]=-1;
		return 1;
	}
	return 0;
}
int solvemaze(int x,int y)
{
	if(x==n-1&&y==n-1)
	{
		cout<<"Yes"<<endl;
		exit(0);
	}
	if(issafe(x,y))
	{
		solvemaze(x+1,y);
		solvemaze(x,y+1);
	}
	return 0;
}
int main()
{
	int i,j,k;
	n=4;
	if(solvemaze(0,0))
	cout<<"Yes"<<endl;
	else
	cout<<"No"<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<maze[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
