#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
#include<unordered_set>
using namespace std;
int main()
{
	int i,j,k,l;
	unordered_set<string> pre;
	unordered_set<string> suf;
	cout<<"enter first prefix one and then suffix one"<<"\n";
	string str1,str2;
	cin>>str1>>str2;
	int len1=str1.length();
	int len2=str2.length();
	for(i=len1;i>=1;i--)
	{
		string pr=str1.substr(0,i);
		//cout<<pr<<"\n";
		pre.insert(pr);
	}
	i=1;
	for(j=len2-1;j>=0;j--)
	{
		string su=str2.substr(j,i);
		//cout<<su<<"\n";
		suf.insert(su);
		i++;
	}
	unordered_set<string>::iterator it;
	for(it=suf.begin();it!=suf.end();it++)
	{
		if(pre.find(*it)!=pre.end())
		{
			cout<<"found "<<(*it)<<"\n";
			return 0;
		}
	}
	cout<<"not found"<<"\n";
	return 0;
}
