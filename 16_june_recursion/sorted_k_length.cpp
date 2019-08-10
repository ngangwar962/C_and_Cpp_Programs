#include<iostream>
using namespace std;
void gstring(char *s,int start,int end)
{
	if(start>end)
	{
		cout<<s<<endl;
		return;
	}
	s[start]='0';
	gstring(s,start+1,end);
	s[start]='1';
	gstring(s,start+1,end);
	return;
}
int main()
{
	int i,j,k;
	cin>>k;
	char str[k+1];
	str[k]='\0';
	gstring(str,0,k-1);
	return 0;
}
