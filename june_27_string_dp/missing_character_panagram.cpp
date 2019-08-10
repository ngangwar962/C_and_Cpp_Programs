#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,l;
	string str;
	getline(cin,str);
	i=0;
	int count[26]={0};
	while(str[i]!='\0')
	{
		count[str[i]-'a']++;
		i++;
	}
	for(i=0;i<26;i++)
	{
		if(count[i]==0)
		{
			char temp='a'+i;
			cout<<temp<<" ";
		}
	}
	cout<<"\n";
	return 0;
}
