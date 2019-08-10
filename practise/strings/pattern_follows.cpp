#include<bits/stdc++.h>
using namespace std;
int check(string str,char x,char y)
{
	int i=0;
	int last_index=0;
	while(str[i]!='\0')
	{
		if(str[i]==x)
		last_index=i;
		i++;
	}
	int first_index=0;
	i=0;
	while(str[i]!='\0')
	{
		if(str[i]==y)
		{
			first_index=i;
			break;
		}
		i++;
	}
	if(last_index<first_index)
	return 1;
	else
	return 0;
}
int main()
{
	int i,j,k;
	string str;
	cin>>str;
	int len1=str.length();
	string pattern;
	cin>>pattern;
	int len2=pattern.length();
	for(i=0;i<len2-1;i++)
	{
		cout<<"checking "<<pattern[i]<<" "<<pattern[i+1]<<"\n";
		if(!check(str,pattern[i],pattern[i+1]))
		{
			cout<<"not maintained"<<"\n";
			break;
		}
	}
	cout<<"maintained"<<"\n";
	return 0;
}
