#include<bits/stdc++.h>
using namespace std;
int check_min(int a,int b)
{
	if(a>b)
	return b;
	else
	return a;
}
int main()
{
	int i,j,k,a1,b1,n;
	cin>>n;
	cin>>a1>>b1;
	int a[n+1];
	a[0]=0;
	a[1]=0;
	a[2]=a1;
	for(i=3;i<=n;i++)
	{
		a[i]=check_min(a[i-1]+a1,a[i-3]+b1);
	}
	cout<<a[n]<<"\n";
	return 0;
}
