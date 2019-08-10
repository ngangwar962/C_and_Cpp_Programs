#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
#include<unordered_set>
using namespace std;
int main()
{
	string str;
	unordered_set<char> s;
	s.insert('a');
	s.insert('e');
	s.insert('i');
	s.insert('o');
	s.insert('u');
	getline(cin,str);
	int i=0;
	while(str[i]!='\0')
	{
		if(s.find(str[i])!=s.end())
		{
			str.erase(i,1);
		}
		i++;
	}
	cout<<str<<"\n";
	return 0;	
}
