#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
void function_reverse(char str[],int len)
{
	int i;
	int start=0,end=len-1;
	while(start<end)
	{
		char temp;
		temp=str[start];
		str[start]=str[end];
		str[end]=temp;
		start++;
		end--;
	}
	cout<<str<<" ";
	return;
}
int main()
{
	string str;
	int i,j,k,l;
	getline(cin,str);
	//cout<<str[3]<<endl;
	i=0;
	int count=0;
	while(str[i]!='\0')
	{
		char temp[100];
		j=i;
		count=0;
		while((str[j]!=(char)32)&&(str[j]!='\0'))
		{
			temp[count]=str[j];
			count++;
			j++;
			i++;
		}
		temp[count]='\0';
		if(str[i]!='\0')
		i++;
		//cout<<temp<<endl;		
		function_reverse(temp,strlen(temp));
	}
	return 0;
}
