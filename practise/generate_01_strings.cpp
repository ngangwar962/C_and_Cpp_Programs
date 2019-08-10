#include<bits/stdc++.h>
using namespace std;
void gstring(char str[],int start,int last)
{
	if(start==last)
	{
		cout<<str<<"\n";
		return;
	}
	str[start]='0';
	gstring(str,start+1,last);
	str[start]='1';
	gstring(str,start+1,last);
	return;
}
int main()
{
	int i,j,k,n;
	cin>>k;
	char str[k+1];
	str[k]='\0';
	gstring(str,0,k);
	return 0;
}
