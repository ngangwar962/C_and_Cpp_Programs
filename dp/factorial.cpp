#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	int res[10000];
	res[0]=2;
	int count=0;
	int n;
	cin>>n;
	int carry=0;
	for(i=3;i<=n;i++)
	{
		carry=0;
		for(j=0;j<=count;j++)
		{
			int temp=i*res[j]+carry;
			res[j]=temp%10;
			carry=temp/10;
		}
		while(carry)
		{	
			res[++count]=carry%10;
			carry=carry/10;
		}
	}
	for(i=count;i>=0;i--)
	{
		cout<<res[i];
	}
	cout<<"\n";
	return 0;
}
