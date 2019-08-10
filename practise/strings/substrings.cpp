#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	string str;
	cin>>str;
	int len=str.length();
	for(i=0;i<len;i++)
	{	
		for(j=1;j<=len-i;j++)
		{
			string s=str.substr(i,j);
			cout<<s<<"\n";
		}
	}
	return 0;
}
