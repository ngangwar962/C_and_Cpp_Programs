#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,j,k,l;
	char str[100];
	cin>>str;
	int len=strlen(str);
	int end=len-1;
	int start=0;
	while(start<end)
	{
		if(str[start]!=str[end])
		{
			cout<<"not a palindrome"<<endl;
			return 0;
		}
		start++;
		end--;
	}
	cout<<"is a palindrome"<<endl;
	return 0;
}
