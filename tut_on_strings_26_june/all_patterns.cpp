#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int req_sum;
void permutation(char str[],int start,int last)
{
	int i;
	if(start==last)
	{
		str[last]='\0';
		int sommy=str[0]-'0'+str[1]-'0'+str[2]-'0'+str[3]-'0';
		if(sommy==req_sum)
		cout<<str<<"\n";
		return;
	}
	for(i=0;i<=9;i++)
	{
		str[start]='0'+i;
		permutation(str,start+1,last);
	}
	return;
}
int main()
{
	char str[5];
	int i,j,k,l;
	cin>>req_sum;
	permutation(str,0,4);
	return 0;
}

