#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,j,k,l;
	char str[100];
	cin>>str;
	int len=strlen(str);
	for(k=0;k<len;k++)
	{
	for(i=0;i<len-k;i++)
	{
		char temp[100];
		int point=k;
		for(j=0;j<=i;j++,point++)
		{
			temp[j]=str[point];	
		}
		temp[j]='\0';
		cout<<temp<<endl;	
	}
	}
	return 0;
}
