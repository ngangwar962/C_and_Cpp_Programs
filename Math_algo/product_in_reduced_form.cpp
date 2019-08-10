#include<bits/stdc++.h>
using namespace std;
long int GCD(long int a,long int b)
{
	if(a==0)
	return b;
	return GCD(b%a,a);
}
int main()
{
	int i,j,k;
	int n;
	cin>>n;
	int num[n],den[n];
	cout<<"enter the numerator entries"<<"\n";
	for(i=0;i<n;i++)
	cin>>num[i];
	cout<<"enter the denominator"<<"\n";
	for(j=0;j<n;j++)
	cin>>den[j];
	long int numerator=1;
	long int denominator=1;
	for(i=0;i<n;i++)
	{
		numerator=numerator*num[i];
		denominator=denominator*den[i];
		cout<<numerator<<" "<<denominator<<"\n";
	}
	//cout<<numerator<<" "<<denominator<<" ";
	long int gcd=GCD(numerator,denominator);
	cout<<gcd<<"\n";
	cout<<(numerator/gcd)<<"/"<<(denominator/gcd)<<" ";
	return 0;
}
