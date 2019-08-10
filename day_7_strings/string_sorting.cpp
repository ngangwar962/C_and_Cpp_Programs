#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,j,k;
	char str[100];
	cin>>str;
	int count[26]={0};
	int len=strlen(str);
	char b[len+1];
	for(i=0;i<len;i++)
	{
		count[str[i]-'a']++;
	}
	/*for(i=0;i<26;i++)
	{
		if(count[i])
		cout<<i<<" "<<count[i]<<endl;
	}*/
	for(i=1;i<26;i++)
	{
		count[i]=count[i]+count[i-1];
	}
	for(i=len-1;i>=0;i--)
	{
		b[count[str[i]-'a']-1]=str[i];
		count[str[i]-'a']--;
	}
	b[len]='\0';
	cout<<b<<endl;
	return 0;
}
