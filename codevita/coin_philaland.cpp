#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int i,j,k;
	long long int price,t;
	cin>>t;
	while(t)
	{
	cin>>price;
	long long int temp=0;
	i=1;
	while(temp<price)
	{
		temp=temp+i;
		i++;	
	}
	t--;
	cout<<i-1<<"\n";
	}
	return 0;
}
