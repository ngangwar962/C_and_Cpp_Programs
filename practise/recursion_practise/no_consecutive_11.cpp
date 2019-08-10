#include<iostream>
using namespace std;
void permute(char str[],int start,int last)
{
	if(start==last)
	{
		str[last]='\0';
		cout<<str<<"\n";
		return;
	}
	if(str[start-1]=='0')
	{
		str[start]='0';
		permute(str,start+1,last);
		str[start]='1';
		permute(str,start+1,last);
	}
	else
	{
		str[start]='0';
		permute(str,start+1,last);
	}
	return;
}
int main()
{
	int i,j,k;
	cin>>k;
	char str[k+1];
	str[0]='0';
	permute(str,1,k);
	str[0]='1';
	permute(str,1,k);
	return 0;
	
}
