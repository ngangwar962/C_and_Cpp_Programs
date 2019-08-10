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
	cout<<"before reversing "<<str<<endl;
	while(start<end)
	{
		char temp;
		temp=str[start];
		str[start]=str[end];	
		str[end]=temp;
		start++;
		end--;
	}
	cout<<"after swapping "<<str<<endl;
	return 0;
}
