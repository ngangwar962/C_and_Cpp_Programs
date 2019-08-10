#include<iostream>
using namespace std;
void gstring(char *s,int start,int last)
{
	int i;
	if(start==last)
	{
		cout<<s<<endl;
		return;
	}
	for(i=1;i<9;i++)
	{
		s[start]='0'+i;
		gstring(s,start+1,last);
	}
	return;
}
int main()
{
	int i,j,k;
	cin>>k;
	char str[k+1];
	str[k]='\0';
	gstring(str,0,k);
	return 0;
}
