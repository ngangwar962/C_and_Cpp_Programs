#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main()
{
	stack<char> st;
	int i,j,k;
	string str;
	cin>>str;
	i=0;
	while(str[i]!='\0')
	{
		while(str[i]!='('&&str[i]!=')'&&str[i]!='['&&str[i]!=']'&&str[i]!='{'&&str[i]!='}')
		{
			str.erase(i,1);
		}
		i++;
	}
	cout<<str<<"\n";
	i=0;
	while(str[i]!='\0')
	{
		if(str[i]=='('||str[i]=='['||str[i]=='{')
		{
			st.push(str[i]);
		}
		else
		{
			if(st.empty())
			{
				cout<<"No"<<"\n";
				return 0;
			}
			char toop=st.top();
			st.pop();
			if(str[i]==')')
			{
				if(toop!='(')
				{
					cout<<"No"<<"\n";
					return 0;
				}
			}
			else if(str[i]==']')
			{
				if(toop!='[')
				{
					cout<<"No"<<"\n";
					return 0;
				}
			}
			else if(str[i]=='}')
			{
				if(toop!='{')
				{
					cout<<"No"<<"\n";
					return 0;
				}
			}
		}
		i++;
	}
	if(!st.empty())
	{
		cout<<"No"<<endl;
		return 0;
	}
	cout<<"Yes"<<"\n";
	return 0;
}
