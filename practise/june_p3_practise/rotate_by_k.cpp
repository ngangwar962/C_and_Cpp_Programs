#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	int n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"enter the value of k"<<endl;
	cin>>k;
	for(j=0;j<k;j++)
	{
	int first=a[0];
	for(i=1;i<n;i++)
	{
		a[i-1]=a[i];
	}
	a[n-1]=first;
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}
