#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main()
{
	long int i,j,k;
	string str;
	cin>>str;
	unordered_map<char,int> m;
	i=0;
	while(str[i]!='\0')
	{
		if(m.find(str[i])!=m.end())
		{
			m[str[i]]++;
		}
		else
		{
			m[str[i]]=1;
		}
		i++;
	}
	unordered_map<char,int>::iterator it;
	for(it=m.begin();it!=m.end();it++)
	{
		if(m[it->first]>1)
		cout<<it->first;
	}
	cout<<"\n";
	return 0;
}
