#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	int n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	map<int,int> m;
	int maxi=0;
	int index_x=0,index_y=0;
	for(i=0;i<n;i++)
	{
		if(m.find(a[i])==m.end())
		{
			m[a[i]]=i;
		}
		else
		{
			int temp=i-m[a[i]];
			if(temp>maxi)
			{
			maxi=temp;
			index_x=m[a[i]];
			index_y=i;
			}
		}
	}
	cout<<maxi<<"\n";
	cout<<index_x<<" "<<index_y<<"\n";
	return 0;
}
