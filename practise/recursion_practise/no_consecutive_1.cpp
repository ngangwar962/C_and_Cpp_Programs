#include<iostream>
using namespace std;
void generate_string(char str[],int start,int end)
{
	if(start==end)
	{
		cout<<str<<endl;
		return;
	}
	if(str[start-1]=='1')
	{
		str[start]='0';
		generate_string(str,start+1,end);
	}
	else
	{
		str[start]='0';
		generate_string(str,start+1,end);
		str[start]='1';
		generate_string(str,start+1,end);
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
	generate_string(str,1,k);
	str[0]='1';
	generate_string(str,1,k);
	return 0;
}
