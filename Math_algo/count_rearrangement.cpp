#include<iostream>
#include<bits/stdc++.h>
#define MAX 1000000007
long int a[1000000];
using namespace std;
long int function(long int num,long int sum)
{
	if(num==0)
	return 0;
	return (sum%MAX+function(num-1,sum)%MAX)%MAX;
}
int main()
{
	long int i,j,k;
	long int n;
	cin>>n;
	a[1]=0;
	a[2]=1;
	//cout<<a[1]<<" "<<a[2]<<" ";
	for(i=3;i<=n;i++)
	{
		//a[i]=(((i-1)%MAX)*((a[i-1])%MAX+(a[i-2])%MAX)%MAX)%MAX;
		//a[i]=(n-1)*(a[i-1]+a[i-2]);
		long temp=(a[i-1]%MAX+a[i-2]%MAX)%MAX;
		if(temp<0)
		temp+=MAX;
		a[i]=function(i-1,temp)%MAX;
		if(a[i]<0)
		a[i]=a[i]+MAX;
		cout<<"i= "<<i<<" "<<a[i]<<"\n";
	}
	cout<<a[n]<<"\n";
	return 0;
}
