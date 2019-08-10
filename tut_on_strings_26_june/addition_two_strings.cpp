#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,l;
	string str1,str2;
	cin>>str1>>str2;
	int len1=str1.length();
	int len2=str2.length();
	reverse(str1.begin(),str1.end());
	reverse(str2.begin(),str2.end());
	cout<<str1<<"\n";
	cout<<str2<<"\n";
	int carry=0;
	string str="";
	i=0;j=0;
	while(i<len1&&j<len2)
	{
		int temp=(str1[i]-'0')+(str2[j]-'0')+carry;
		int rem=(temp%10);
		char zoo=rem+'0';
		str=str+zoo;
		carry=temp/10;	
		i++;
		j++;
	}
	while(i<len1)
	{
		int temp=str1[i]-'0'+carry;
		int rem=temp%10;
		char zoo=rem+'0';
		str=str+zoo;
		carry=carry/10;
		i++;
	}
	while(j<len2)
	{
		int temp=(str2[j]-'0')+carry;
		int rem=temp%10;
		char zoo=rem+'0';
		str=str+zoo;
		carry=carry/10;
		j++;
	}
	while(carry!=0)
	{
		int rem=carry%10;
		char zoo=rem+'0';
		str=str+zoo;
		carry/=10;
	}
	cout<<str<<"\n";
	reverse(str.begin(),str.end());
	cout<<str<<"\n";
	return 0;
}
