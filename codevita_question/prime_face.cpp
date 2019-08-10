#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	map<char,int> m;
	map<int,char> mrev;
	char c='A';
	for(i=10;i<=35;i++)
	mrev[c]=i;
	for(i=0;i<=9;i++)
	m[i+'0']=i;
	char temp;
	for(temp='A';temp<'Z';temp++,i++)
	m[temp]=i;
	string str;
	char s;
	cin>>str>>s;
	cout<<str<<" "<<s<<"\n";
	int len=str.length();
	int count=1;
	for(i=len-1;i>=0;i--)
	{
		int carry=0;
		int temp=m[str[i]]+count++;
		if(temp%36>=0&&temp%36<=9)
		{
			str[i]=temp%36+carry+'0';
			carry=temp/36;
		}
		else
		{
			str[i]=temp%36+carry+'A';
			carry=temp
		}
	}
	return 0;
}
