#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>k;
	for(i=k;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	n--;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}
