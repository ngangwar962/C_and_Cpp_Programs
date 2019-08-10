#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l,n;
	int lower_limit,upper_limit;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"enter the bounds"<<endl;
	cin>>lower_limit>>upper_limit;
	int count=0;
	for(i=0;i<n;i++)
	{
		if((a[i]>=lower_limit)&&(a[i]<=upper_limit))
		{
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
	
}
