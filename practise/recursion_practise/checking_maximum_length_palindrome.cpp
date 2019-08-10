#include<iostream>
#include<bits/stdc++.h>
using namespace std;
static int req_count=0;
int check_palindrome(string str,int len)
{
	int count[26]={0};
	int i=0;
	while(str[i]!='\0')
	{
		count[str[i]-'0']++;
		i++;
	}
	int odd_count=0,even_count=0;
	for(i=0;i<10;i++)
	{
		if(count[i])
		{
			if(count[i]%2==0)
			{
				even_count++;
			}
			else
			odd_count++;
		}
	}
	if(even_count>0&&odd_count==1)
	{
		cout<<str<<"\n";
		return 1;
	}
	else if(odd_count>1)
	return 0;
	else if(odd_count==0&&even_count>=1)
	{
		cout<<str<<"\n";
		return 1;
	}
}
void powerset_generation(string str,int start,int last,string outs="")
{
	if(start==last)
	{
		//cout<<outs<<"\n";
		int lens=outs.length();
		if(lens==1)
		{
			cout<<outs<<"\n";
			req_count++;
		}
		if(check_palindrome(outs,last-1))
		req_count++;
		return;
	}
	powerset_generation(str,start+1,last,outs);
	powerset_generation(str,start+1,last,outs+str[start]);
	return;
}
int main()
{
	int i,j,k;
	string str;
	cin>>str;
	int len=str.length();
	powerset_generation(str,0,len);
	cout<<req_count<<"\n";
	return 0;
}
