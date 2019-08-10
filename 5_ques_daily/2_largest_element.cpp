#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	int n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];	
	}
	int max1,max2;
	if(a[0]>a[1])
	{
		max1=a[0];
		max2=a[1];
	}
	else
	{
		max1=a[1];
		max2=a[0];
	}
	for(i=2;i<n;i++)
	{
		if(a[i]>max1)
		{
			max2=max1;
			max1=a[i];
		}
		else if(a[i]>max2&&a[i]<max1)
		{
			max2=a[i];
		}
	}
	cout<<max2<<"\n";
	return 0;
}
