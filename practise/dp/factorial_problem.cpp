#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k;
	cin>>n;
	int fact[n+1];
	fact[0]=1;
	fact[1]=1;
	for(i=2;i<=n;i++)
	fact[i]=i*fact[i-1];
	cout<<fact[n]<<"\n";
	return 0;
}
