#include<iostream>
#include<string.h>
using namespace std;
void reverse(char str[],int begin,int last)
{
	if(begin>=last)
	{
	cout<<str<<" ";
	return;
	}
	char temp;
	temp=str[begin];
	str[begin]=str[last];
	str[last]=temp;
	reverse(str,begin+1,last-1);
}
int main()
{
	int i,j,k,l;
	string str;
	getline(cin,str);
	i=0;
	while(str[i]!='\0')
	{
	        char temp[200];
		int count=0;
		while(str[i]!=' '&&str[i]!='\0')
		{
			temp[count]=str[i];
			count++;
			i++;
		}
		temp[count]='\0';
		reverse(temp,0,strlen(temp)-1);
		//cout<<temp<<endl;
		i++;
	}
	return 0;
}
