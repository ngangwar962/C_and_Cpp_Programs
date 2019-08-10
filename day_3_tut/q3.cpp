#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l,n;
	cin>>n;
	int a[n];
	double sum=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	double average=sum/n;
	int count=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>average)
		count++;
	}
	cout<<count<<endl;
	return 0;

}
