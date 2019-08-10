#include<bits/stdc++.h>
using namespace std;
void gstring(char str[],int start,int last)
{
	if(start==last)
	{
		cout<<str<<"\n";
		return;
	}
	if(str[start-1]=='1')
	{
		str[start]='0';
		gstring(str,start+1,last);
	}
	else
	{
		str[start]='0';
		gstring(str,start+1,last);
		str[start]='1';
		gstring(str,start+1,last);
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
	gstring(str,1,k);
	str[0]='1';
	gstring(str,1,k);
	return 0;
}
