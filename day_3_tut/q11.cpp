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
	int max=0;
	for(i=n-1;i>=0;i--)
	{
		if(a[i]>max)
		{
			max=a[i];
			cout<<a[i]<<" ";
		}
	}
	return 0;
}
