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
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			if(a[0]>a[1])
			cout<<a[0]<<" ";
		}
		else if(i==n-1)
		{
			if(a[n-1]>a[n-2])
			cout<<a[n-1]<<" ";
		}
		else
		{
			if((a[i]>a[i-1])&&(a[i]>a[i+1]))
			cout<<a[i]<<" ";
		}
	}
	return 0;
}
