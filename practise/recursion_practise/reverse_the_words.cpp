#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void reverse(string str,int start,int last)
{
	if(start>=last)
	{
		cout<<str<<" ";
		return;
	}
	char temp;
	temp=str[start];
	str[start]=str[last];
	str[last]=temp;
	return reverse(str,start+1,last-1);
}
int main()
{	
	int i,j,k;
	string str;
	getline(cin,str);
	i=0;
	string temp="";
	while(str[i]!='\0')
	{
		if(str[i]==' ')
		{
			int len=temp.length();
			reverse(temp,0,len-1);
			temp="";	
		}
		if(str[i]!=' ')
		temp+=str[i];
		i++;
	}
	if(str[i]=='\0')
	{
		int len=temp.length()-1;
		reverse(temp,0,len);
	}
	return 0;
}
