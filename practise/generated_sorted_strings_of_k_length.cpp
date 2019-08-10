#include<iostream>
#include<string.h>
using namespace std;
char temp[100];
int check(char str[],int len)
{
	int i;
	int count[26]={0};
	i=0;
	while(str[i]!='\0')
	{
		count[str[i]-'a']++;
		i++;
	}
	for(i=0;i<26;i++)
	{
		if(count[i]>1)
		return 0;
	}
	cout<<endl;
	return 1;
}
void generate(char str[],int index,int last)
{
	if(index>last)
	{
		//cout<<temp<<endl;
		if(check(temp,strlen(temp)-1))
		cout<<temp<<endl;
		return;
	}
	int len=strlen(str);
	int i;
	for(i=0;i<len;i++)
	{
		temp[index]=str[i];
		generate(str,index+1,last);
	}
	return;
}
int main()
{
	int i,j,k;
	char str[100];
	cin>>str;
	//cout<<"all strings are"<<endl;
	int len=strlen(str)-1;
	generate(str,0,len);
	return 0;
}
