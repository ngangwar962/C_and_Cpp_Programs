#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n;
	int a[n+1];
	int temp=0;
	for(i=0;i<=n;i++)
	{
		cin>>a[i];
		temp=temp^a[i];
	}
	for(i=1;i<=n;i++)
	{
		temp=temp^i;
	}
	cout<<"duplicate is "<<temp<<endl;
	return 0;
}
