#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
int main()
{
	int i,j,k;
	unordered_set<string> set;
	queue<pair<string,int> > q;
	int min_count=0;
	string str,destination;
	cin>>str;
	destination=str;
	sort(destination.begin(),destination.end());
	q.push(make_pair(str,0));
	pair<string,int> p;
	int len=str.length();
	set.insert(str);
	while(!q.empty())
	{
		p=q.front();
		q.pop();
		string s=p.first;
		string r;
		for(i=2;i<=len;i++)
		{
			r=s;
			reverse(r.begin(),r.begin()+i);
			if(r==destination)
			{
				cout<<"finally "<<p.second+1<<"\n";
				return 0;
			}
			if(set.find(r)==set.end())
			{
			cout<<r<<" "<<destination<<"\n";
			q.push(make_pair(r,p.second+1));
			}
		}
	}
	return 0;
}
