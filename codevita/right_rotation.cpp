#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,j,k;
	int times;
	char str[]="abcd";
	cin>>times;
	cout<<str<<endl;
	int len=strlen(str);
	for(k=0;k<times;k++)
	{
		char temp=str[len-1];
		for(j=len-1;j>=1;j--)
		{
			str[j]=str[j-1];
		}
		str[0]=temp;
	}
	cout<<str<<endl;
	return 0;
}
