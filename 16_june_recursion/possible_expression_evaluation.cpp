#include<iostream>
#include<string.h>
#include<stack>
using namespace std;
char oper[4]={'+','-','*','/'};
int eval;
int priority[4][4]={{1,1,0,0},{1,1,0,0},{1,1,1,1},{1,1,1,1}};
int postfix_evaluation(char *s,int len)
{
	stack<char> st;
	int i=0,j,k;
	while(s[i]!='\0')
	{
		if(s[i]>='1'&&s[i]<='9')
		{
			st.push(s[i]);
		}
		else
		{
			if(s[i]=='+')
			{
				int b=st.top()-'0';
				st.pop();
				int a=st.top()-'0';
				st.pop();
				int result=a+b;
				st.push(result+'0');
			}
			else if(s[i]=='-')
			{
				int b=st.top()-'0';
				st.pop();
				int a=st.top()-'0';
				st.pop();
				int result=a-b;
				st.push(result+'0');
			}
			else if(s[i]=='*')
			{
				int b=st.top()-'0';
				st.pop();
				int a=st.top()-'0';
				st.pop();
				int result=a*b;
				st.push(result+'0');
			}
			else if(s[i]=='/')
			{
				int b=st.top()-'0';
				st.pop();
				int a=st.top()-'0';
				st.pop();
				int result=a/b;
				st.push(result+'0');
			}
		}
		i++;
	}
	int final_eval=st.top()-'0';
	st.pop();
	if(eval==final_eval)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void postfix(char *s,int len)
{
	stack<char> st;
	//cout<<"original "<<s<<endl;
	int i,j,k;
	i=0;
	char post[100];
	int count=0;
	while(s[i]!='\0')
	{
		if((s[i]>='1')&&(s[i]<='9'))
		{
			post[count++]=s[i];
		}
		else
		{
			if(st.empty())
			{
				st.push(s[i]);
			}
			else
			{
				int indexi,indexj;
				char tp=st.top();
				for(k=0;k<4;k++)
				{
					if(tp==oper[k])
					{
						indexi=k;
						break;
					}
				}
				for(j=0;j<4;j++)
				{
					if(s[i]==oper[j])
					{
						indexj=j;
						break;
					}
				}
				if(priority[indexi][indexj])
				{
					post[count++]=st.top();
					st.pop();
					st.push(s[i]);
				}
				else
				{
					st.push(s[i]);
				}
			}
		}
		i++;
	}
	while(!st.empty())
	{
		post[count++]=st.top();
		st.pop();
	}
	post[count]='\0';
	if(postfix_evaluation(post,count))
	{
		cout<<s<<endl;
		//cout<<"postfix expression is "<<post<<endl;
	}
	return;
}
void gstring(char *s,int start,int last)
{
	int i,j,k;
	if(start==last)
	{
		//cout<<s<<endl;
		int len=strlen(s);
		postfix(s,len);
		return;
	}
	for(i=0;i<4;i++)
	{
		s[start]=oper[i];
		gstring(s,start+2,last);
	}
	return;
}
int main()
{
	int i,j,k;
	cin>>k;
	char temp[k+1];
	cin>>temp;
	cout<<"evaluation of an expression should lead to "<<endl;
	cin>>eval;
	char str[2*k-1];
	int count=0;
	for(i=0;i<2*k-1;i+=2,count++)
	{
		str[i]=temp[count];
	}
	str[2*k-1]='\0';
	gstring(str,1,2*k-1);
	return 0;
}
