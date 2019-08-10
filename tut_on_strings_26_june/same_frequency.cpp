#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int i,j,k,l;
	vector<int> vec;
	string str;
	cin>>str;
	int count[26]={0};
	i=0;
	while(str[i]!='\0')
	{
		count[str[i]-'a']++;
		i++;
	}
	for(i=0;i<26;i++)
	{
		if(count[i])
		{
			vec.push_back(count[i]);
		}
	}
	sort(vec.begin(),vec.end());
	int len=vec.size();
	if(vec[0]!=vec[len-1])
	{
		if(vec[len-1]==vec[len-2])
		{
			cout<<"No"<<"\n";
			return 0;
		}
		else
		{
			cout<<"Yes"<<"\n";
			return 0;
		}
	}
	else
	{
		cout<<"Yes"<<"\n";
		return 0;
	}
	for(i=0;i<vec.size();i++)
	{
		cout<<vec[i]<<" ";
	}
	cout<<"\n";
	return 0;
}
