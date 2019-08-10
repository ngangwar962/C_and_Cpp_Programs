#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,k,l,j;
	char str[200];
	cin>>str;
	int len=strlen(str);
	for(k=0;k<len;k++)
	{
	for(i=0;i<len-k;i++)
	{
		char temp[300];
		int pointer=k;
		for(j=0;j<=i;j++)
		{	
			temp[j]=str[pointer++];
		}
		temp[j]='\0';
		cout<<temp<<endl;
	}
	}
	return 0;
}
