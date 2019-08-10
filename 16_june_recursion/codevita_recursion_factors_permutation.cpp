#include<iostream>
using namespace std;
void gstring(char *s,int present,int last)
{
	int i;
	if(present==last)
	{
		s[present]='\0';
		cout<<s<<endl;
		return;
	}
	for(i=1;i<=last;i++)
	{
		if(s[present-1]+1==(i+'0'))
		{
			continue;
		}
		else
		{
			s[present]=i+'0';
			gstring(s,present+1,last);
		}
	}
	return;
}
int main()
{
	int i,j,k,n;
	cin>>n;
	int count=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		count++;
	}
	char str[count+1];
	for(i=1;i<=count;i++)
	{
		str[0]=i+'0';
		gstring(str,1,count);
	}
	return 0;
}
