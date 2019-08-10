#include<bits/stdc++.h>
using namespace std;
static int req_count=0;
int check_palindrome(string str,int len)
{
	int count[10]={0};
	int i=0;
	while(str[i]!='\0')
	{
		count[str[i]-'0']++;
		i++;
	}
	int even_count=0,odd_count=0;
	for(i=0;i<10;i++)
	{
		if(count[i])
		{
			if(count[i]%2==0)
			{
				even_count++;
			}
			else
			{
				odd_count++;
			}
		}
	}
	if(odd_count==1&&even_count>=0)
	{
		cout<<str<<"\n";
		return 1;
	}
	else if(odd_count>1)
	return 0;
	else if(even_count>=1&&odd_count==0)
	{
		cout<<str<<"\n";
		return 1;
	}
}
int main()
{
	int i,j,k;
	string str;
	cin>>str;
	int len=str.length();
	for(i=0;i<len;i++)
	{
		for(j=1;j<=len-i;j++)
		{
			string st=str.substr(i,j);
			if(check_palindrome(st,j))
			{
				req_count++;				
			}
		}
	}
	cout<<req_count<<"\n";
	return 0;
}
