#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	int n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	int temp_sum=0,max_sum=0;
	for(i=0;i<n;i++)
	{	
		temp_sum+=a[i];
		if(temp_sum<0)
		temp_sum=0;
		if(temp_sum>max_sum)
		max_sum=temp_sum;
	}
	cout<<max_sum;
	return 0;
}
