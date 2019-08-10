#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,l;
	string str;
	cin>>str;
	int len=str.length();
	int count=0;
	for(i=0;i<len;i++)
	{
		for(j=1;j+i<=len;j++)
		{
			string st=str.substr(i,j);
			if(str.find(st)==i)
				count++;
		}
	}
	cout<<count<<"\n";
	return 0;
}
