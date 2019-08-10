#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int check(string str,int start,int last)
{
	if(start>=last)
	{
		return 1;
	}
	if(str[start]!=str[last])
	return 0;
	return check(str,start+1,last-1);
}
int main()
{
	int i,j,k;
	string str;
	cin>>str;
	int len=str.length()-1;
	//cout<<len<<"\n";
	if(check(str,0,len))
	{
	cout<<"Yes"<<"\n";
	}
	else
	{	
		cout<<"No"<<"\n";
	}
	return 0;
	
}
