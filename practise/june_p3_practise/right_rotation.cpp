#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int n,k;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"enter the value of k"<<endl;
	cin>>k;
	for(j=0;j<k;j++)
	{
	int last=a[n-1];
	for(i=n-1;i>=1;i--)
	{
		a[i]=a[i-1];
	}
	a[0]=last;
	}
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
