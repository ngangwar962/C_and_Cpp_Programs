#include<iostream>
using namespace std;
void generate_string(char str[],int start,int last)
{
	if(start>last)
	{
		cout<<str<<endl;
		return;
	}
	str[start]='0';
	generate_string(str,start+1,last);
	str[start]='1';
	generate_string(str,start+1,last);
	return;
}
int main()
{
	int i,j,k;
	cin>>k;
	char str[k+1];
	str[k]='\0';
	generate_string(str,0,k-1);
	return 0;
}
