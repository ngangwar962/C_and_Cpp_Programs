#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l;
	int n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	long int lsum,rsum;
	lsum=a[0];
	rsum=0;
	for(i=2;i<n;i++)
	rsum+=a[i];
	if(lsum!=rsum)
	{
		for(i=2;i<n-1;i++)
		{
			lsum+=a[i-1];
			rsum-=a[i];
			if(lsum==rsum)
			{
				cout<<a[i]<<"\n";
				return 0;
			}
		}
	}
	else
	{
		cout<<a[1]<<"\n";
		return 0;
	}
	return 0;
}
