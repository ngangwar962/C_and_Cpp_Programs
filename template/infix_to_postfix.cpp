#include<iostream>
#include<stack>
using namespace std;
int main()
{
	int i,j,k;
	stack<char> s1;		//+	  //*	    //-	     //^
	int priority[4][4]={{1,0,1,0},{1,1,1,0},{1,0,1,0},{1,1,1,0}};
	char oper[4]={'+','*','-','^'};
	char str[1000];
	cin>>str;
	i=0;	
	int indexi,indexj;
	while(str[i]!='\0')
	{
		if(str[i]=='(')
		{
			s1.push(str[i]);
			i++;
			while(str[i]!=')')
			{
				if(str[i]>='0'&&str[i]<='9')
				{
					cout<<str[i]<<" ";
				}
			else if((str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='^')&&(s1.top()=='('))
				{
					s1.push(str[i]);
				}
				else if((str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='^')&&(!s1.empty()&&s1.top()!='('))
				{
					char tp=s1.top();
					for(j=0;j<4;j++)
					{
						if(str[i]==oper[j])
						{
							indexj=j;
							break;	
						}
					}
					for(j=0;j<4;j++)
					{
						if(tp==oper[j])
						{
							indexi=j;
							break;
						}
					}
					if(priority[indexi][indexj])
					{
						cout<<s1.top()<<" ";
						s1.pop();
						s1.push(str[i]);
					}
					else
					{
						s1.push(str[i]);
					}
				}
				i++;
			}
			while(s1.top()!='(')
			{
				cout<<s1.top()<<" ";
				s1.pop();
			}
			s1.pop();
			
		}
		else if(str[i]>='0'&&str[i]<='9')
		{
			cout<<str[i]<<" ";
		}
		else if((str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='^')&&(s1.empty()))
		{
			s1.push(str[i]);
		}
		else if((str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='^')&&(!s1.empty()))
		{
			char tp=s1.top();
			for(j=0;j<4;j++)
			{
				if(tp==oper[j])
				{
					indexi=j;
					break;
				}
			}
			for(j=0;j<4;j++)
			{
				if(str[i]==oper[j])
				{
					indexj=j;
					break;
				}
			}
			if(priority[indexi][indexj])
			{
				cout<<tp<<" ";
				s1.pop();
				s1.push(str[i]);
			}
			else
			{
				s1.push(str[i]);
			}
		}
		i++;
	}
	while(!s1.empty())
	{
		cout<<s1.top()<<" ";
		s1.pop();
	}
	return 0;
}
