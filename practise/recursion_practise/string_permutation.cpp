#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void permute(string str,int start,int last)
{
	int i;
	if(start==last)
	{
		cout<<str<<"\n";
		return;
	}
	for(i=start;i<last;i++)
	{
		if((str[start]!=str[i])||(i==start))
		{
		swap(str[start],str[i]);
		permute(str,start+1,last);
		swap(str[start],str[i]);
		}
	}
	return;
}
int main()
{
	int i,j,k,l;
	string str;
	cin>>str;
	int len=str.length();
	permute(str,0,len);
	return 0;
}
