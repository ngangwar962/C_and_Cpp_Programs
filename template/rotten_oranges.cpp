#include<iostream>
#include<queue>
#define MAX 100
using namespace std;
queue<pair<int,int> > q;
int n=3,m=5;
int a[3][5]={{2,1,0,2,1},{1,0,2,2,1},{1,2,0,2,1}};
void check_neighbour(int i,int j)
{
	cout<<i<<" "<<j<<endl;
	if(i<0||i>n||a[i][j]!=1||j<0||j>m)
	return;
	a[i][j]=2;
	cout<<i<<" "<<j<<endl;
	q.push(make_pair(i,j));
	return;
}
int main()
{
	
	int i,j,k,l;
	n=3;
	m=5;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i][j]==2)
			{
				cout<<"2's count "<<i<<" "<<j<<endl;
				q.push(make_pair(i,j));
			}
		}
	}
	q.push(make_pair(-1,-1));
	int count=0;
	while(!q.empty())
	{
		while((q.front().first!=-1)&&(q.front().second!=-1))
		{
				//check_neighbour(q.front().first,q.front().second);
				i=q.front().first;
				j=q.front().second;
				check_neighbour(i-1,j);
				check_neighbour(i+1,j);
				check_neighbour(i,j-1);
				check_neighbour(i,j+1);
				q.pop();
		}
		q.pop();
		count++;
		if(q.empty())
		{
			break;
		}
		q.push(make_pair(-1,-1));
	}
	cout<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i][j]==1)
			{
				cout<<i<<" "<<j<<endl;
				cout<<"not possible"<<endl;
				return 0;
			}		
		}
	}
	cout<<"time is "<<count<<endl;
	return 0;
}
