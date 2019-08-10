#include<bits/stdc++.h>
using namespace std;
long int max_function(long int number)
{
	long int maxi=0;
	while(number)
	{
		long int rem=number%10;
		if(rem>maxi)
		maxi=rem;
		number=number/10;
	}
	return maxi;
}
long int min_function(long int number)
{
	long int mini=100;
	while(number)
	{
		long int rem=number%10;
		if(rem<mini)
		{
			mini=rem;
		}
		number/=10;
	}
	return mini;
}
int main()
{
	long int i,j,k,n;
	cin>>n;
	if(n==0||n>500)
	{
		cout<<"0"<<"\n";
		return 0;
	}
	string str[n];
	long int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	char bitscore[n][3];
	char firstbit[n];
	for(i=0;i<n;i++)
	{
		long int max_bit=max_function(arr[i]);
		long int min_bit=min_function(arr[i]);
		long int temp=max_bit*11+min_bit*7;
		//cout<<"temp= "<<temp<<"\n";
		bitscore[i][2]='\0';
		for(j=1;j>=0;j--)
		{
			long int rem=temp%10;
			bitscore[i][j]=rem+'0';
			temp/=10;
		}
		firstbit[i]=bitscore[i][0];
	}
	map<char,long int> odd;
	map<char,long int> even;
	for(i=0;i<n;i++)
	{
		if(i%2==0)  //even
		{
			even[firstbit[i]]++;
		}
		else        //odd
		{
			odd[firstbit[i]]++;
		}
	}
	long int count=0;
	map<char,long int>::iterator it;
	for(it=odd.begin();it!=odd.end();it++)
	{
		if(it->second==2)
		{
			//cout<<it->first<<" "<<it->second<<"\n";
			count++;
		}
		else if(it->second>=3)
		{
			//cout<<it->first<<" "<<it->second<<"\n";
			count+=2;
		}
	}
	map<char,long int>::iterator it1;
	for(it1=even.begin();it1!=even.end();it1++)
	{
		if(it1->second==2)
		{
			//cout<<it1->first<<" "<<it1->second<<"\n";
			count++;
		}
		else if(it1->second>=3)
		{
			//cout<<it1->first<<" "<<it1->second<<"\n";
			count+=2;
		}
	}
	cout<<count<<"\n";
	return 0;
}
