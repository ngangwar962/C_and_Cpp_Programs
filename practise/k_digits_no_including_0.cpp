#include<iostream>
using namespace std;
void gstring(char *s,int start,int last)
{
	if(start==last)
	{
		s[start]='\0';
		cout<<s<<endl;
		return;
	}
	int i,j,k;
	for(j=0;j<=9;j++)
	{
		s[start]=j+'0';
		gstring(s,start+1,last);
	}
	return;
}
int main()
{
	int i,j,k;
	cin>>k;
	char str[k+1];
	for(i=1;i<=9;i++)
	{
		str[0]=i+'0';
		gstring(str,1,k);
	}
	return 0;
}
