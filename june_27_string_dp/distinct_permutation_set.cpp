#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
unordered_set<string> s;
void permutation(string str,int start,int last)
{
	int i;
	if(start==last)
	{
		s.insert(str);
		cout<<str<<"\n";
		return;
	}
	for(i=start;i<last;i++)
	{
		if((str[start]!=str[i])||(i==start))
		{
		swap(str[start],str[i]);
		permutation(str,start+1,last);
		swap(str[start],str[i]);
		}
	}
	return;
}
int main()
{
	int i,j,k,l;
	string str;
	cin>>str;
	int len=str.length();
	permutation(str,0,len);
	cout<<s.size()<<"\n";
	return 0;
}
