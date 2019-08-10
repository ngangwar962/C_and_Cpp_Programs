#include<iostream>
#include<string.h>
using namespace std;
char fstr[1000];
char str[1000];
void remove_duplicates(char str[],int index)
{
	static int count=1;
	if(str[index]!=str[index-1])
	{
		fstr[count++]=str[index];
	}	
	return;
}
int main()
{
	int i,j,k,l,len;
	
	cin>>str;
	len=strlen(str);
	fstr[0]=str[0];
	for(i=1;i<len;i++)
	{
		remove_duplicates(str,i);
	}
	cout<<"earlier "<<str<<endl;
	cout<<"now "<<fstr<<endl;
	return 0;	
}
