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
	{
		return 0;
	}
	return check(str,start+1,last-1);
}
int main()
{
	int i,j,k;
	string str;
	cin>>str;
	int len=str.length();
	int maxi=0;
	int flag=0;
	for(i=0;i<len;i++)
	{
		for(j=1;j<=len-i;j++)
		{
			string st=str.substr(i,j);
			if(check(st,0,j-1)&&(j!=1))
			{
				flag=1;
				if(j>maxi)
				{
					maxi=j;
				}
			}
		}
	}
	if(flag==0)
	{
	cout<<"no palindrome found other than length 1"<<"\n";
	}
	else
	{
		cout<<"maximum length string is "<<maxi<<"\n";
	}
	return 0;
}
