#include<iostream>
#include<string.h>
using namespace std;
void reverse(char *str,int start,int end)
{
	if(start>end)
	return;
	else
	{
		char temp;
		temp=str[start];
		str[start]=str[end];
		str[end]=temp;
	}
	return reverse(str,start+1,end-1);
}
int main()
{
	char str[100];
	cin>>str;
	cout<<str<<endl;
	reverse(str,0,strlen(str)-1);
	cout<<str<<endl;
	return 0;
}
