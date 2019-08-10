#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	int i,j,k;
	string str;
	cin>>str;
	int len=str.length();
	int flag=0;
	for(i=0;i<len;i++)
	{
		for(j=1;j<=len-i;j++)
		{
			string s(str.substr(i,j));
			reverse(s,s.end());
			if(find(str,s)==-1)
			{
				flag=1;
				cout<<"not a palindrome"<<endl;
				return 0;
			}
		}
	}
	if(flag==0)
			{
				cout<<"palindrome string"<<endl;
			}
	return 0;
}
