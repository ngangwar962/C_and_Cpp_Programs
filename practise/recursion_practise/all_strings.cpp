#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void all_string(char str[],int last)
{
	if(last==-1)
	{
		cout<<str<<"\n";
		return;
	}
	str[last]='0';
	all_string(str,last-1);
	str[last]='1';
	all_string(str,last-1);
	return;
}
int main()
{
	int i,j,k,l;
	cin>>k;
	char str[k+1];
	str[k]='\0';
	all_string(str,k-1);
	return 0;
}
