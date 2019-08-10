#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void permute(char str[],int start,int last)
{
	int i;
	if(start==last)
	{
		cout<<str<<" ";
		return;
	}
	for(i=0;i<=9;i++)
	{
		str[start]=i+'0';
		permute(str,start+1,last);
	}
	return;
}
int main()
{
	int i,j,k;
	cin>>k;
	char str[k+1];
	str[k]='\0';
	for(i=1;i<=9;i++)
	{
		str[0]=i+'0';
		permute(str,1,k);
	}
	cout<<"\n";
	return 0;
}
