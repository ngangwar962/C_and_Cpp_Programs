#include<iostream>
#include<bits/stdc++.h>
int facto(int n)
{
	int i;
	int fact[n+1];
	fact[0]=1;
	fact[1]=1;
	for(i=2;i<=n;i++)
	fact[i]=i*fact[i-1];
	return fact[n];
}
using namespace std;
int main()
{
	int i,j,k,l;
	string str;
	cin>>str;
	int len=str.length();
	int count[26]={0};
	for(i=0;i<26;i++)
	{
		count[str[i]-'a']++;
	}
	long long den=1;
	long long num=facto(len);
	for(i=0;i<26;i++)
	{
		if(count[i])
		{
			den=den*facto(count[i]);
		}
	}
	long long result=num/den;
	cout<<result<<"\n";
	return 0;
}
