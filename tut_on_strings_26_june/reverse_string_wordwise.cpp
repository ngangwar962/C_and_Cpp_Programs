#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<string> vec;
void reverse_my(string str,int start,int last)
{
	while(start<last)
	{
		char temp=str[start];
		str[start]=str[last];
		str[last]=temp;
		last--;
		start++;
	}
	cout<<str<<" ";
	return;
}
int main()
{
	int i,j,k,l;
	
	string str;
	getline(cin,str);
	i=0;
	string st="";
	while(str[i]!='\0')
	{
		if(str[i]==' ')
		{
			vec.push_back(st);
			st="";
		}
		st+=str[i];
		i++;
	}
	if(str[i]=='\0')
	{
		vec.push_back(st);
	}
	for(i=0;i<vec.size();i++)
	{
		int temp_len=vec[i].length();
		reverse_my(vec[i],0,temp_len-1);
		//reverse(vec[i].begin(),vec[i].end());
		//cout<<vec[i]<<" ";
	}
	cout<<"\n";
	return 0;
}
