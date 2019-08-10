#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
int main()
{
	int i,j,k;
	string str;
	cin>>str;
	int len=str.length();
	string pattern;
	cin>>pattern;
	unordered_set<string> set;
	set.insert(pattern);
	for(i=0;i<len;i++)
	{
		for(j=1;j+i<=len;j++)
		{
			string s=str.substr(i,j);
			if(set.find(s)!=set.end())
			{
				cout<<i<<"\n";
				return 0;
			}
			else
			{
				set.insert(s);
			}
		}
	}
	cout<<"not found \n";
	return 0;
}
