#include<iostream>
#include<stack>
#include<string.h>
#define MAX 1000
using namespace std;
int main()
{
	int i;
	stack<char> st;
	char str[MAX];
	cin>>str;
	if(str[0]==')')
	{
		cout<<"No"<<endl;
		return 0;
	}
	int len=strlen(str);
	char opening='(';
	char closing=')';
	for(i=0;i<len;i++)
	{
		if(st.empty()&&str[i]==closing)
		{
			cout<<"No"<<endl;
			return 0;
		}
		if(((st.empty()) || (st.top()==opening )) && (str[i]==opening ))
		{
			st.push(str[i]);
		}
		else if(str[i]==')')
		{
			char top=st.top();
			if(top=='(')
			st.pop();
			else
			{
				cout<<"No"<<endl;
				return 0;
			}
		}	
	}
	if(st.empty())
	cout<<"Yes"<<endl;
	else
	cout<<"No"<<endl;
	return 0;
}
