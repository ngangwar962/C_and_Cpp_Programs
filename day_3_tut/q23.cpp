#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n;
	int a[n];
	int count=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==1)
		count++;
	}
	int count1=count;
	int count2=n-count;
	int min=(count1>count2)?count2:count1;
	for(i=0;i<2*min;i++)
	{
		if(i%2)
		{
			a[i]=1;
		}
		else
		{
			a[i]=0;
		}
	}
	if(count1>count2)
	{
	for(i=2*min;i<n;i++)
	{
		a[i]=1;
	}
	}
	else
	{
	for(i=2*min;i<n;i++)
	{
		a[i]=0;
	}
	}
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
return 0;
}
