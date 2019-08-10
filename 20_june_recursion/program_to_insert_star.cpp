#include<iostream>
#include<string.h>
using namespace std;
static int count=1;
char temp[1000];
void insert_star(char str[],int start,int end)
{
	if(start==end)
	{
		temp[count]='\0';
		return;
	}
	if(str[start]==str[start-1])
	{
		temp[count++]='*';
		temp[count++]=str[start];
	}
	else
	{
		temp[count]=str[start];
		count++;
	}
	insert_star(str,start+1,end);
}
int main()
{
	int i,j,k;
	char str[1000];
	
	cin>>str;
	int len=strlen(str);
	insert_star(str,1,len);
	temp[0]=str[0];
	cout<<temp<<endl;
	return 0;
}
