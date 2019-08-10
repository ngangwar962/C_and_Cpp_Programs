#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main()
{
	int i,j,k,l;
	string str;
	stack<char> s;
	cin>>str;
	i=0;
	while(str[i]!='\0')
	{
	while((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')||(str[i]>='0'&&str[i]<='9'))
		{
			str.erase(i,1);
		}
		i++;
	}
	cout<<str<<"\n";
	int flag=0;
	char tops;
	int balanced=0;
	i=0;
	while(str[i]!='\0')
	{
		if(s.empty())
		{
			if(str[i]==')'||str[i]=='}'||str[i]==']')
			{
				flag=1;
				i++;
				continue;
			}
			else if(str[i]=='*')
			{
				i++;
				continue;
			}
		}
		if(str[i]=='*')
		{
			s.push(str[i]);
			i++;
			continue;
		}
		if(str[i]=='('||str[i]=='{'||str[i]=='[')
		{
			s.push(str[i]);
			//cout<<str[i]<<" pushed"<<"\n";
			i++;
			continue;
		}
		if(str[i]==')'||str[i]=='}'||str[i]==']')
		{
			int star_count=0;
			tops=s.top();
			while(tops=='*')
			{
				star_count++;
				s.pop();
				tops=s.top();
			}
			if(star_count<2)
			{
				flag=1;
			}			
			if(str[i]=='}')
			{
				if(tops!='{')
				{
					flag=1;
				}
				else
				{
					s.pop();
					balanced++;
				}
			}
			else if(str[i]==']')
			{
				if(tops!='[')
				{
					flag=1;
				}
				else
				{
					s.pop();
					balanced++;
				}
			}
			else if(str[i]==')')
			{
				if(tops!='(')
				{
					flag=1;
				}
				else
				{
					s.pop();
					balanced++;
				}
			}
			i++;
			continue;
		}
	}
	if(!s.empty())
	flag=1;
	if(flag==1)
	{
		cout<<"No"<<" ";
	}
	else
	{
		cout<<"Yes"<<" ";
	}
	cout<<balanced<<"\n";
	return 0;
}
