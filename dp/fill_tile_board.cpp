#include<iostream>
using namespace std;
int main()
{
	long int i,j,k;
	long int n;
	cin>>n;
	long int a[n];
	a[0]=0;
	a[1]=1;
	a[2]=2;
	if(n==0)
	{
		cout<<"0"<<"\n";
		return 0;
	}
	if(n==1)
	{
		cout<<"1"<<"\n";
		return 0;
	}
	if(n==2)
	{
		cout<<"2"<<"\n";
		return 0;
	}
	for(i=3;i<=n;i++)
	{
		a[i]=(a[i-1]%10000007+a[i-2]%10000007)%10000007;
		if(a[i]<0)
		a[i]=a[i]+10000007;
	}
	cout<<a[n];
	return 0;
}
