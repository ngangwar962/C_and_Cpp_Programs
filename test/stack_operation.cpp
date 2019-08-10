#include<iostream>
#include<stack>
#include<string.h>
using namespace std;
int main()
{
	stack<char> st;
	int i,j;
	char str[1000];
	cin>>str;
	int len=strlen(str);
	for(i=0;i<len;i++)
	st.push(str[i]);
	for(i=0;i<len;i++)
	{
		char t=st.top();
		cout<<t<<endl;
		st.pop();
	}
	if(st.empty())
	cout<<"Yes"<<endl;
	else
	cout<<"No"<<endl;
	return 0;
}
