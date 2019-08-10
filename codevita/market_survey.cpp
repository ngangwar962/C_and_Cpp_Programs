#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,n,m;
	cin>>n>>m;
	map<int,int> mp[m+1];
	vector<pair<int,int> > vec;
	pair<int,int> pr;
	map<int,map<int,int> > question;
	for(i=0;i<n;i++)
	{
		for(j=0;j<5;j++)
		{
			question[i][j];
		}
	}
	int count=0;
	map<int,int> latest_key;
	for(k=0;k<=m;k++)
	{
		long int temp;
		for(i=0;i<n;i++)
		{
			cin>>temp;
			mp[k][i]=temp;
			question[i][mp[k][i]]++;
		}
		count=0;
		if(k!=0)
		{
			for(j=0;j<n;j++)
			{
				if(mp[k][j]==latest_key[j])
				  count++;
			}
			vec.push_back(make_pair(k,count));
		}
		for(i=0;i<n;i++)
		{
			int max1=0;
			int max2=0;
			int index1=0,index2=0;
			for(j=0;j<5;j++)
			{
				if(question[i][j]>max1&&question[i][j]>max2)
				{
					index2=index1;
					index1=j;
					max2=max1;
					max1=question[i][j];
				}
				else if((question[i][j]>max2)&&(question[i][j]<=max1))
				{
					index2=j;
					max2=question[i][j];
				}
			}
			if(max1==max2)
			{
				latest_key[i]=mp[k][i];
			}
			else
			{
				latest_key[i]=index1;
			}
		}
		for(j=0;j<n;j++)
		{
				cout<<latest_key[j]<<" ";
		}
		cout<<"\n";
	}
	for(i=0;i<vec.size();i++)
	{
		pr=vec[i];
		cout<<pr.first<<" "<<pr.second<<"\n";
	}
	vector<pair<int,int> >::iterator it;
	int maxx=0;
	int maxx_index=0;
	for(it=vec.begin();it!=vec.end();it++)
	{
		if(it->second>maxx)
		{
			maxx=it->second;
			maxx_index=it->first;
		}
	}
	count=0;
	for(i=0;i<n;i++)
	{
		if(mp[maxx_index][i]==latest_key[i])
		count++;
	}
	cout<<maxx_index<<" "<<count<<"\n";
	return 0;
}
