#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int i,j,k,n;
	cin>>n;
	int a[n+1];
	a[0]=0;
	a[1]=1;
	a[2]=1;
	a[3]=2;
	for(i=4;i<=n;i++)
	{
		a[i]=a[i-1]+a[i-3];
	}
	cout<<a[n]<<"\n";
	return 0;
}
