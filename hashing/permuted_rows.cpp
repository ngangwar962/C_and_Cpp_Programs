#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	int rows,col;
	cin>>rows>>col;
	int a[rows][col];
	int a1[col];
	for(i=0;i<col;i++)
	cin>>a1[i];
	map<int,int> m[rows];
	int flag=0;
	int count=0;
	for(i=0;i<rows;i++)
	{
		flag=0;
		for(j=0;j<col;j++)
		{	
			cin>>a[i][j];
			m[i][a[i][j]]++;	
		}
		for(j=0;j<col;j++)
		{
			if(m[i].find(a1[j])==m[i].end())
			{
				flag=1;
			}
		}
		if(flag==0)
		count++;
	}
	cout<<count<<"\n";
	return 0;
}
