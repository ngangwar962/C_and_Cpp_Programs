#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	map<string,int> m;
	string str;
	getline(cin,str);
	cout<<str<<"\n";
	i=0;
	string st;
	while(str[i]!='\0')
	{
		if(str[i]==' ')
		{
			m[st]++;
			st="";
			i++;
		}
		st+=str[i];
		i++;
	}
	m[st]++;
	map<string,int>::iterator it;
	int maxi=0;
	for(it=m.begin();it!=m.end();it++)
	{
		if(m[it->first]>maxi)
		maxi=m[it->first];
	}
	cout<<maxi<<"\n";
	return 0;
}
