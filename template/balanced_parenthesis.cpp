#include<iostream>
#include<stack>
using namespace std;
int main()
{
	int i,j,k;
	stack<char> st;
	char str[1000];
	cin>>str;
	i=0;
	int flag=0;
	while(str[i]!='\0')
	{
		if((str[i]=='(')||(str[i]=='{')||(str[i]=='['))
		{
			st.push(str[i]);
		}
		else
		{
			if(st.empty())
			{
				flag=1;
				break;
			}
			char temp=st.top();
			st.pop();
			if(str[i]==')')
			{
				if(temp!='(')
				{
					flag=1;
					break;
				}
			}
			else if(str[i]=='}')
			{
				if(temp!='{')
				{
					flag=1;
					break;
				}
			}
			else if(str[i]==']')
			{
				if(temp!='[')
				{
					flag=1;
					break;
				}
			}
		}
		i++;
	}
	if(!st.empty())
	{
		flag=1;
	}
	if(flag==0)
	{
		cout<<"balanced parenthesis"<<endl;
	}
	else
	{
		cout<<"not a balanced parenthesis"<<endl;
	}
	return 0;
}
