#include<iostream>
using namespace std;
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
int main()
{
	int i,j,k,l,n;
	cin>>n;
	cout<<facto(n);
	return 0;
}
