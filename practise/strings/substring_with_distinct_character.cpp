#include<bits/stdc++.h>
using namespace std;
int check(string str)
{
	int i=0;
	int count[26]={0};
	while(str[i]!='\0')
	{
		count[str[i]-'a']++;
		i++;
	}
	for(i=0;i<26;i++)
	{
		if(count[i])
		{
			if(count[i]>1)
			return 0;
		}
	}
	return 1;
}
int main()
{
	int i,j,k;
	string str;
	cin>>str;
	int len=str.length();
	int count=0,maxi=0;
	for(i=0;i<len;i++)
	{
		for(j=1;j<=len-i;j++)
		{
			string s=str.substr(i,j);
			if(check(s))
			{
				if(j>maxi)
				maxi=j;
				cout<<s<<"\n";
				count++;
			}
		}
	}
	cout<<"maximum length "<<maxi<<" "<<count<<"\n";
	return 0;
}
