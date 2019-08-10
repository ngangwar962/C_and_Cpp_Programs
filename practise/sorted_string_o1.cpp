#include<iostream>
using namespace std;
void gstring(char *s,int present,int last)
{
	if(present==last)
	{
		cout<<s<<endl;
		return;
	}
	s[present]='0';
	gstring(s,present+1,last);
	s[present]='1';
	gstring(s,present+1,last);
	return;
}
int main()
{
	int i,k,l;
	cin>>k;
	char str[k+1];
	str[k]='\0';
	gstring(str,0,k);
	return 0;
}
