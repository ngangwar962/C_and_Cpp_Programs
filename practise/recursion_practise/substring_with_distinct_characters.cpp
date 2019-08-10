#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int check(string str)
{
	int count[26]={0};
	int i=0;
	while(str[i]!='\0')
	{
		count[str[i]-'a']++;
		i++;
	}
	for(i=0;i<26;i++)
	{
		if(count[i])
		{
			if(count[i]!=1)
			return 0;
		}
	}
	return 1;
}
int main()
{
	int i,j,k;
	string str;
	cin>>str;
	int len=str.length();
	int maxi=0;
	string str1;
	int flag=0;
	for(i=0;i<len;i++)
	{
		for(j=1;j<=len-i;j++)
		{
			string st=str.substr(i,j);
			if(check(st))
			{
				if(j>maxi)
				{
					flag=1;
					maxi=j;
					str1=st;
				}
			}
		}
	}
	if(flag==1)
	{
		cout<<str1<<"\n";
	}
	else
	{
		cout<<"not found"<<"\n";
	}
	return 0;
}
