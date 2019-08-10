#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	string str;
	cin>>str;
	int len=str.length();
	int times;
	cin>>times;
	times=times%len;
	for(i=times;i<len;i++)
	{
		cout<<str[i];
	}
	for(i=0;i<times;i++)
	cout<<str[i];
	cout<<"\n";
	/*for(j=0;j<times;j++)
	{
	char temp=str[0];
	for(i=1;i<len;i++)
	{
		str[i-1]=str[i];
	}
	str[len-1]=temp;
	}*/
	return 0;
}
