#include<iostream>
#include<string.h>
using namespace std;
void palindrome_check(char str[],int start,int end)
{
	if(start>=end)
	return;
	char temp;
	temp=str[start];
	str[start]=str[end];
	str[end]=temp;
	palindrome_check(str,start+1,end-1);
	return;
}
int main()
{
	int i,j,k;
	char str[1000];
	cin>>str;
	int len=strlen(str);
	palindrome_check(str,0,len-1);
	cout<<str<<"\n";
	return 0;
}
