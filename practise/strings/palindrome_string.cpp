#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	string str;
	cin>>str;
	int len=str.length();
	int start=0;
	int last=len-1;
	int flag=0;
	while(start<last)
	{
		if(str[start]!=str[last])
		{
			flag=1;
			break;
		}
		start++;
		last--;
	}
	if(flag==1)
	{
		cout<<"not palindrome"<<"/n";
	}
	else
	cout<<"palindrome"<<"\n";
	return 0;
}
