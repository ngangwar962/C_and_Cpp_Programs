#include<iostream>
#define MAX 10000
using namespace std;
int r,c;
char layout[MAX][MAX];
int values[MAX][MAX];
int x1,y1,x2,y2,x3,y3,c1,c2;
int distances[MAX][MAX]={0};
int movement(int x,int y)
{
	if(x<1||x>r||y<1||y>c||values[x][y]==1||values[x][y]==0)
	return 0;
	if(layout[x][y]=='M'||((layout[x][y]=='G')&&(((x!=x1)&&(y!=y1))||((x!=x2)&&(y!=y2))||((x!=x3)&&(y!=y3)))))
	{
	      values[x][y]=1;      
	}
	else if(layout[x][y]=='W')
        {
	      values[x][y]=0;
	      return 0;
	}
	//cout<<x<<" "<<values[x][y]<<" "<<values[x][y]<<" "<<y<<endl;
	/*movement(x+1,y);
	movement(x,y+1);
	movement(x-1,y);
	movement(x,y-1);*/
	return movement(x+1,y)+movement(x,y+1)+movement(x-1,y)+movement(x,y-1)+1;
}
int movement_specific(int x,int y)
{
	if(x<1||x>r||y<1||y>c||values[x][y]==-1||values[x][y]==0)
	return 0;
	if((x==c1)&&(y==c2))
	{
		return 0;
	}
	return movement_specific(x+1,y)+movement_specific(x,y-1)+movement_specific(x-1,y)+movement_specific(x,y-1)+1;
}
int main()
{
	cin>>r>>c;
	int i,j,k;
	cin>>x1>>y1>>x2>>y2>>x3>>y3>>c1>>c2;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>layout[i+1][j+1];
			values[i+1][j+1]=-1;
			if(layout[i+1][j+1]=='W')
			values[i+1][j+1]=0;
		}
	}
	values[x1][y1]=0;
	values[x2][y2]=0;
	values[x3][y3]=0;
	movement(c1,c2);
	cout<<"after visiting"<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<values[i+1][j+1]<<" ";
		}
		cout<<endl;
	}
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			if((!(((i!=x1)&&(j!=y1))||((i!=x2)&&(j!=y2))||((i!=x3)&&(j!=y3))))&&(layout[i][j]=='G'))
			distances[i][j]=movement_specific(i,j);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<distances[i+1][j+1]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
