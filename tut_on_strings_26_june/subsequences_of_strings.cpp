#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
void subsequence(string str,int start,int last,int number,string outs="")
{
	if(start==last)
	{
		int len=outs.length();
		if(outs=="")
		return;
		if(len!=1&&outs[0]!='0')
		{
			int num=atoi(outs.c_str());
			if(num%number==0)
			cout<<num<<"\n";
		}
		if(len==1)
		{
			int num=atoi(outs.c_str());
			if(num%number==0)
			cout<<num<<"\n";
		}
		return;
	}
	subsequence(str,start+1,last,number,outs);
	subsequence(str,start+1,last,number,outs+str[start]);
	return;
}
int main()
{
	int i,j,k,l,number;
	string str;
	cout<<"enter the string"<<"\n";
	cin>>str;
	cout<<"enter the number"<<"\n";
	cin>>number;
	int len=str.length();
	subsequence(str,0,len,number);
	return 0;
}
