#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	string str;
	getline(cin,str);
	i=0;
	map<string,int> m;
	string st="";
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
	for(it=m.begin();it!=m.end();it++)
	{
		cout<<it->first<<" "<<m[it->first]<<"\n";
	}
	return 0;
}
