#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	string str;
	cin>>str;
	int len=str.length();
	for(i=1;i<=len;i++)
	{
		for(j=0;i+j<=len;j++)
		{
			string s=str.substr(j,i);
			cout<<s<<"\n";
		}
	}
	return 0;
}
