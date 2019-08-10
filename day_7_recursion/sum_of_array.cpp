#include<iostream>
using namespace std;
int sum_of_array(int a[],int n)
{
	if(n<0)
	return 0;
	return a[n]+sum_of_array(a,n-1);
}
int main()
{
	int i,j,n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<sum_of_array(a,n-1)<<endl;
	return 0;
}
