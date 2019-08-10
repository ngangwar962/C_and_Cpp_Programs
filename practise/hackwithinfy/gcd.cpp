#include<bits/stdc++.h>
using namespace std;
long long int GCD(long long int a,long long int b)
{
	if(a==0)
	return b;
	return GCD(b%a,a);
}
int main()
{
	long long int i,j,k,n,t;
	cin>>t;
	while(t)
	{
		long long int maxi=0;
		cin>>n;
		long long int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				long long int gcd=GCD(a[i],a[j])+j-i;
				if(gcd>maxi)
				maxi=gcd;
			}
		}
		cout<<maxi<<"\n";
		t--;
	}
	return 0;
}
