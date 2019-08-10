#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int check(string str1,string str2)
{
	int count1[26]={0};
	int count2[26]={0};
	int i,j,k;
	i=0;
	while(str1[i]!='\0')
	{
		count1[str1[i]-'a']++;
		i++;
	}
	j=0;
	while(str2[j]!='\0')
	{
		count2[str2[j]-'a']++;
		j++;
	}
	for(i=0;i<26;i++)
	{
		if(count1[i]!=count2[i])
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int i,j,k;
	string str1,str2;
	cin>>str1>>str2;
	int len1=str1.length();
	int len2=str2.length();
	if(check(str1,str2))
	{
		cout<<"Yes"<<"\n";
	}
	else
	{
		cout<<"No"<<"\n";
	}
	return 0;
}
