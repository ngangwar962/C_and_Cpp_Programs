#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	int start=0,end=n-1;
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	while(start<end)
	{
		int temp;
		temp=a[start];
		a[start]=a[end];
		a[end]=temp;
		end--;
		start++;
	}
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
