#include<bits/stdc++.h>
using namespace std;
void generate(char str[],int start,int last)
{
	if(start==last)
	{
		cout<<str<<"\n";
		return;
	}
	if(str[start-1]=='0')
	{
	str[start]='0';
	generate(str,start+1,last);
	str[start]='1';
	generate(str,start+1,last);
	}
	else
	{
		str[start]='0';
		generate(str,start+1,last);
	}
	return;
}
int main()
{
	int i,j,k;
	cin>>k;
	char str[k+1];
	str[k]='\0';
	str[0]='0';
	generate(str,1,k);
	str[0]='1';
	generate(str,1,k);
	return 0;
}
