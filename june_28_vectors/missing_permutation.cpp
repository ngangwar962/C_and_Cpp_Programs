#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
long long fact(int num)
{
	if(num==1||num==0)
	return 1;
	return num*fact(num-1);
}
void permute(string str,int start,int last,vector<string> &org1)
{
	int i;
	if(start==last)
	{
		org1.push_back(str);
		//cout<<str<<"\n";
		return;
	}
	for(i=start;i<last;i++)
	{
		swap(str[start],str[i]);
		permute(str,start+1,last,org1);
		swap(str[start],str[i]);
	}
	return;
}
int main()
{
	int i,j,k,l;
	vector<string> org1;
	vector<string> missing;
	string str;
	unordered_set<string> set1,set2;
	cin>>str;
	int len=str.length();
	int factorial=fact(len);
	cout<<"factorial= "<<factorial<<"\n";
	permute(str,0,len,org1);
	vector<string>::iterator it;
	int count=0;
	cout<<"total strings are :"<<"\n";
	for(it=org1.begin();it!=org1.end();it++)
	{
		set1.insert(*it);
		cout<<*it<<"\n";
		if(count<factorial/2)
		{
			missing.push_back(*it);
			set2.insert(*it);
		}
		count++;
	}
	cout<<"\nmissing strings are "<<"\n";
	vector<string>::iterator it1;
	for(it1=org1.begin();it1!=org1.end();it1++)
	{
		if(set2.find(*it1)==set2.end())
		{
			cout<<*it1<<"\n";
		}
	}
	return 0;
}
