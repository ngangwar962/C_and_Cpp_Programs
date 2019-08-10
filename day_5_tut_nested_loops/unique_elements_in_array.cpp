#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l,n;
	cin>>n;
	int a[n];
	int max=0;	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>max)
		max=a[i];
	}
	int count[max+1]={0};
	for(i=0;i<n;i++)
	{
		count[a[i]]++;
	}
	for(i=0;i<=max;i++)
	{
		if(count[i]>0)
		{
			cout<<i<<" ";
			count[i]=0;
		}
	}
	cout<<endl;
	return 0;
}
