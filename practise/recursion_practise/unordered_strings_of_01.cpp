#include<bits/stdc++.h>
using namespace std;
void generate(char str[],int index)
{
	if(index==-1)
	{
		cout<<str<<"\n";
		return;
	}
	str[index]='0';
	generate(str,index-1);
	str[index]='1';
	generate(str,index-1);
	return;
}
int main()
{
	int i,j,k;
	cin>>k;
	char str[k+1];
	str[k]='\0';
	generate(str,k-1);
	return 0;
}
