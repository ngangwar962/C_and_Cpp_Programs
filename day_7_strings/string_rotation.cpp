#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,j,k,l;
	char str[1000];
	cout<<"enter the string and the rotation unit"<<endl;
	cin>>str>>l;
	int len=strlen(str);
	cout<<"string before rotation "<<str<<endl;
	for(j=0;j<l;j++)
	{
	char temp=str[0];
	for(i=1;i<len;i++)
	{
		str[i-1]=str[i];
	}
	str[len-1]=temp;
	cout<<str<<endl;
	}
	cout<<"string after rotation "<<str<<endl;
	return 0;
}
