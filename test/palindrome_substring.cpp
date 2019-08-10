#include<iostream>
#include<string.h>
#include<stack>
using namespace std;
static int even_count=0;
static int odd_count=0;
int ispalindrome(char str[],int start,int end)
{
	if(start==end)
	return 1;
	while(start<end)
	{
		if(str[start]!=str[end])
		{
			return 0;
		}
		start++;
		end--;
	}
	return 1;
}
int double_check(char str[],int start,int end)
{
	char temp[end+1];
	int i;
	for(i=0;i<=end;i++)
	{
		temp[i]=str[i];
	}
	temp[i]='\0';
	stack<char> st;
	i=0;
	while(temp[i]!='\0')
	{
		if(st.empty())
		{
			st.push(temp[i]);
		}
		else
		{
			char at_top=st.top();
			if(at_top==temp[i])
			{
				st.pop();
				st.push(temp[i]);
			}
			else
			{
				st.push(temp[i]);
			}
		}
		i++;
	}
	int counter=0;
	while(!st.empty())
	{
		temp[counter++]=st.top();
		st.pop();
	}
	temp[counter]='\0';
	if(ispalindrome(temp,0,strlen(temp)-1))
	{
		cout<<"palindrome "<<temp<<" "<<"earlier was "<<str<<endl;
		if(strlen(str)%2==0)
		even_count++;
		else
		odd_count++;
	}
	return 0;
}
int main()
{
	int n,i,j,k;
	char str[1000];
	cin>>str;
	int len=strlen(str);
	for(k=0;k<len;k++)
	{
		for(i=0;i<len-k;i++)
		{
			char temp[100];
			int pointer=k;
			for(j=0;j<=i;j++,pointer++)
			{
				temp[j]=str[pointer];
			}
			temp[j]='\0';
			int len=strlen(temp);
			if(ispalindrome(temp,0,len-1))
			{
				cout<<"palindrome "<<temp<<endl;
				if(len%2==0)
				even_count++;
				else
				odd_count++;
			}
			else
			{
				double_check(temp,0,len-1);
			}
		}
	}
	cout<<even_count<<" "<<odd_count<<endl;
	return 0;
}
