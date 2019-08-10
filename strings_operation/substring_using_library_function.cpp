#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l;
	string str;
	cin>>str;
	int len=str.length();
	for(i=0;i<len;i++)
	{
		for(j=1;j<=len-i;j++)
		{
			cout<<str.substr(i,j)<<"\n";
		}
	}
	return 0;
}
