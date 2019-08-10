#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,j,k;
	char str[1000];
	cin>>str;
	int start=0;
	int end=strlen(str)-1;
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
	cout<<"palindrome"<<endl;
	return 0;
}
