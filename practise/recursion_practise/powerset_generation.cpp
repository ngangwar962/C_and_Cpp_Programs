#include<iostream>
#include<string.h>
using namespace std;
void powerset(char str[],int start,int end,string outs="")
{
	if(start==end)
	{
		cout<<outs<<endl;
		return;
	}
	powerset(str,start+1,end,outs);
	powerset(str,start+1,end,outs+str[start]);
	return;
}
int main()
{
	int i,j,k;
	char str[100];
	cin>>str;
	int len=strlen(str);
	powerset(str,0,len);
	return 0;
}
