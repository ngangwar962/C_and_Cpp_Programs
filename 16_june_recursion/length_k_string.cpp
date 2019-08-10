#include<iostream>
using namespace std;
void gstring(char *s,int k)
{
	if(k<0)
	{
		cout<<s<<endl;
		return;
	}
	s[k]='0';
	gstring(s,k-1);
	s[k]='1';
	gstring(s,k-1);
	return;
}
int main()
{
	int i,j,k,l;
	cin>>k;
	char str[k+1];
	str[k]='\0';
	gstring(str,k-1);
	return 0;
}
