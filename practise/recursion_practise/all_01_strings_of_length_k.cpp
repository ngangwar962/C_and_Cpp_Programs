#include<bits/stdc++.h>
using namespace std;
void generate(char str[],int start,int last)
{
	if(start==last)
	{
		cout<<str<<"\n";
		return;
	}
	str[start]='0';
	generate(str,start+1,last);
	str[start]='1';
	generate(str,start+1,last);
	return;
}
int main()
{
	int i,j,k;
	cin>>k;
	char str[k+1];
	str[k]='\0';
	generate(str,0,k);
	return 0;
}
