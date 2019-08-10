#include<bits/stdc++.h>
using namespace std;
void reverse(string &st,int start,int last)
{
	if(start>=last)
	return;
	char temp;
	temp=st[start];
	st[start]=st[last];
	st[last]=temp;
	reverse(st,start+1,last-1);
	return;
}
int main()
{
	int i,j,k,l;
	string str;
	cin>>str;
	int len=str.length();
	int flag=0;
	for(i=0;i<len;i++)
	{
		for(j=1;j+i<=len;j++)
		{
			string st=str.substr(i,j);
			int l1=st.length();
			cout<<st<<"\n";
			reverse(st,0,l1-1);
			cout<<st<<"\n";
			if(str.find(st)==-1)
			{
				flag=1;
				cout<<"not a perfect string"<<"\n";
				return 0;
			}
			cout<<st<<"\n";
		}
	}
	if(flag==0)
	{
		cout<<"perfect string"<<"\n";
		return 0;
	}
	return 0;
}
