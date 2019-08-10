#include<bits/stdc++.h>
using namespace std;
int check(string str,int start,int last)
{
	while(start<last)
	{
		if(str[start]!=str[last])
		return 0;
		start++;
		last--;
	}
	return 1;
}
int main()
{
	int i,j,k;
	string str;
	cin>>str;
	int maxi=0;
	int len=str.length();
	for(i=0;i<len;i++)
	{
		for(j=1;i+j<=len;j++)
		{
			string st=str.substr(i,j);
			if(check(st,0,j-1))
			{
				if(j>maxi)
				maxi=j;
			}
		}
	}
	cout<<maxi<<"\n";
	return 0;
}
