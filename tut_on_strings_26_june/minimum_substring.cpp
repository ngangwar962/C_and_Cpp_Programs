#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int count_pattern[26]={0};
bool check(string st,string pattern,int len_string,int len_pattern,int count_pattern[])
{
	int i;
	int count[26]={0};
	//cout<<st<<"\n";
	i=0;
	while(st[i]!='\0')
	{
		count[st[i]-'a']++;
		i++;
	}
	//cout<<"done"<<"\n";
	for(i=0;i<26;i++)
	{
		if(count_pattern[i])
		{
			if(!(count_pattern[i]==count[i]))
			{
				return false;
			}	
		}
	}
	cout<<"\n";
	return true;
}
bool compare(const pair<string,int> &p1,const pair<string,int> &p2)
{
	return p1.second<p2.second;
}
int main()
{
	int i,j,k,l;
	vector<pair<string,int> > vec(100);
	pair<string,int> p;
	string str,pattern;
	cout<<"enter the input string with spaces"<<"\n";
	getline(cin,str);
	cout<<"enter the pattern"<<"\n";
	cin>>pattern;
	int p_len=pattern.length();
	cout<<p_len<<"\n";
	int len=str.length();
	i=0;
	while(pattern[i]!='\0')
	{
		//cout<<pattern[i]<<" ";
		count_pattern[pattern[i]-'a']++;
		i++;
	}
	/*for(i=0;i<26;i++)
	{
		cout<<count_pattern[i]<<" ";
	}*/
	int mini=10000;
	int count10=0;
	for(i=0;i<len;i++)
	{
		for(j=p_len;j+i<=len;j++)
		{
			string st=str.substr(i,j);
			int len_temp=st.length();
			if(check(st,pattern,len_temp,p_len,count_pattern))
			{	
				if(len_temp<mini)
				{
					mini=len_temp;
					//cout<<st<<"\n";
					p=make_pair(st,mini);
					vec[count10++]=p;
				}
			}
			
		}
	}
	cout<<"vector element are"<<"\n";
	//sort(vec.begin(),vec.end(),compare);
	for(i=0;i<count10;i++)
	cout<<vec[i].first<<" "<<vec[i].second<<"\n";
	return 0;
}
