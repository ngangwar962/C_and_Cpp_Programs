#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	int n;
	cin>>n;
	int a[n+1];
	a[0]=1;
	for(i=1;i<=n;i++)
	{
		a[i]=a[i-1]+a[i-2]*(i-1);
	}
	cout<<a[n]<<"\n";
	return 0;
}
