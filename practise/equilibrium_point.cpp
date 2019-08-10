#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	int lsum=a[0],rsum=0;
	for(i=2;i<n;i++)
	rsum+=a[i];
	if(lsum==rsum)
	{
		cout<<a[1]<<endl;
		return 0;
	}
	for(i=2;i<n-1;i++)
	{
		lsum+=a[i-1];
		rsum-=a[i];
		if(lsum==rsum)
		{
			cout<<a[i];
			return 0;
		}
	}
	cout<<"not found"<<endl;
	return 0;
}
