#include<iostream>
using namespace std;
int check(string str,int len,int k)
{
	int count[26]={0};
	int i=0;
	while(str[i]!='\0')
	{
		count[str[i]-'a']++;
		i++;
	}
	int temp=0;
	for(i=0;i<26;i++)
	{
		if(count[i])
		temp++;
	}
	if(temp==k)
	return 1;
	return 0;
}
int main()
{
	int i,j,k,l;
	string str;
	cout<<"enter the string"<<"\n";
	cin>>str;
	int len=str.length();
	cout<<"enter the length of the substring"<<"\n";
	cin>>k;
	int temp_var=0;
	for(i=0;i<len;i++)
	{
		for(j=1;j+i<=len;j++)
		{
			string st=str.substr(i,j);
			if(check(st,j,k))
			{
				temp_var++;
			}
		}
	}
	cout<<temp_var<<"\n";
	return 0;
}
