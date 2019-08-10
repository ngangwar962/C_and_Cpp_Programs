#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	string str;
	cin>>str;
	int len=str.length();
	for(i=0;i<len;i++)
	{
		for(j=1;j<=len-i;j++)
		{
			string st=str.substr(i,j);
			cout<<st<<"\n";
		}
	}
	return 0;
}
