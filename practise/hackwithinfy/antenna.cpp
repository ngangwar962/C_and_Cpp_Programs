#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int i,j,k;
	long long int n;
	cin>>n;
	long long int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	long long int min1,min2;
	if(a[0]>a[1])
	{
		min1=a[1];
		min2=a[0];
	}
	else
	{
		min1=a[0];
		min2=a[1];
	}
	for(i=2;i<n;i++)
	{
		if(a[i]<=min1)
		{
			min2=min1;
			min1=a[i];
		}
		else if(a[i]>min1&&a[i]<min2)
		{
			min2=a[i];
		}
	}
	if(abs(min1-min2)<min1)
	cout<<abs(min1-min2)<<"\n";
	else
	cout<<min1<<"\n";
	return 0;
}
