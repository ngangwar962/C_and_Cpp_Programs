#include<bits/stdc++.h>
#define INT_MAXX 10000
using namespace std;
int vertices;
int mincount=0;
int parent[1000];
int cost[5][5]={{INT_MAXX,2,INT_MAXX,6,INT_MAXX},{2,INT_MAXX,3,8,5},{INT_MAXX,3,INT_MAXX,INT_MAXX,7},{6,8,INT_MAXX,INT_MAXX,9},{INT_MAXX,5,7,9,INT_MAXX}};
int find(int i)
{
	while(parent[i]!=i)
	{
		i=parent[i];
	}
	return i;
}
void unionboth(int i,int j)
{
	int a=find(i);
	int b=find(j);
	parent[a]=b;
	return;
}
void kruskal()
{
	int i,j,k;
	for(i=0;i<vertices;i++)
	parent[i]=i;
	int edge_count=0;
	while(edge_count<vertices)
	{
		int flag=0;
		int mini=INT_MAXX,a=-1,b=-1;
		for(i=0;i<vertices;i++)
		{
			for(j=0;j<vertices;j++)
			{
				if((find(i)!=find(j))&&(cost[i][j]<mini))
				{
					flag=1;
					mini=cost[i][j];
					a=i;
					b=j;
				}
			}
		}
		if(flag==0)
		break;
		unionboth(a,b);
		cout<<a<<" "<<b<<"\n";
		edge_count++;
		//cout<<"selected= "<<mini<<"\n";
		mincount+=mini;
	}
}
int main()
{
	int i,j,k;
	cin>>vertices;
	kruskal();
	cout<<"min_count= "<<mincount<<"\n";
	/*for(i=0;i<vertices;i++)
	cout<<parent[i]<<" ";
	cout<<"\n";*/
	return 0;	
}
