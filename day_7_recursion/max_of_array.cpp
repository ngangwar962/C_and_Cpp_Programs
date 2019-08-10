#include<iostream>
using namespace std;
int maxi=0;
int max_of_array(int a[],int n)
{
	if(n<0)
	return maxi;
	else
	{
		if(a[n]>maxi)
		maxi=a[n];
	}
	return max_of_array(a,n-1);
}
int main()
{
	int i,j,k,n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"max of the array is "<<max_of_array(a,n-1)<<endl;
	return 0;
}
