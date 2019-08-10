#include<iostream>
#include<string.h>
#include<vector>
#include<map>
#include<unordered_set>
using namespace std;
int main()
{
	int i,j,k,l;
	map<string,int> m;
	string str;
	unordered_set<string> s;
	cin>>str;
	int len=str.length();
	cin>>k;
	string st="";
	vector<pair<string,int> > vec(100);
	pair<string,int> p;
	int condemn=0;
	map<string,int>::iterator it;
	for(i=0;i<len;i=i+k)
	{
		for(j=0;j<k;j++)
		{
			st+=str[i+j];
		}
		p=make_pair(st,0);
		vec[condemn++]=p;
		it=m.find(st);
		if(it==m.end())
		{
			m[st]=1;
		}
		else
		{
			m[st]++;
		}
		s.insert(st);
		st="";
	}	
	for(it=m.begin();it!=m.end();it++)
	{
		if(m.size()==2&&it->second==1)
		{
			cout<<"true"<<"\n";
			return 0;
		}
	}
	cout<<"false"<<"\n";
	
	return 0;
}
