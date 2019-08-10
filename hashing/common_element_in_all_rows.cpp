#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	int rows,col;
	cin>>rows>>col;
	int a[rows][col];
	map<int,int> m[rows];
	for(i=0;i<rows;i++)
	{
		for(j=0;j<col;j++)
		{
			cin>>a[i][j];
			m[i][a[i][j]]++;
			if(i==rows-1)
			{
				if((m[0].find(m[i][a[i][j]])!=m[i].end())&&(m[1].find(m[i][a[i][j]])!=m[1].end())&&(m[0][a[i][j]]!=0)&&(m[1][a[i][j]]!=0))
				{
					cout<<a[i][j]<<" ";
					m[0][a[i][j]]--;
					m[1][a[i][j]]--;
				}
			}
		}
	}
	cout<<"\n";
	return 0;
}
