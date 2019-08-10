#include<iostream>
using namespace std;
void check(int a[],int size)
{
	if(size<0)
	return;
	if(a[size]<0)
	cout<<a[size];
	check(a,size-1);
}
int main()
{
	int i,j,k,n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	}
	check(a,n-1);
	return 0;
}
