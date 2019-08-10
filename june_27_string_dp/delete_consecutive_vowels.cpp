#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
int main()
{
	unordered_set<char> s;
	s.insert('a');
	s.insert('e');
	s.insert('i');
	s.insert('o');
	s.insert('u');
	int i,j,k,l;
	string str;
	getline(cin,str);
	//cout<<str<<"\n";
	int len=str.length();
	//cout<<len<<"\n";
	if(len==1)
	{
		cout<<str;
		return 0;
	}
	i=1;
	cout<<str[0];
	while(str[i]!='\0')
	{
		if(s.find(str[i])==s.end())
		{
			cout<<str[i];
			i++;
		}
		else
		{
			if(s.find(str[i-1])!=s.end())
			{
				i++;
			}
			else
			{
				cout<<str[i];
				i++;
			}
		}
	}
	cout<<"\n";
	return 0;
}
