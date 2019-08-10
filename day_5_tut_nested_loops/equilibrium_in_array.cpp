#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n,flag=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	if(n<=2)
	{
		return 0;
	}
	int lsum=a[0];
	int rsum=0;
	for(i=2;i<n;i++)
	{
		rsum+=a[i];
	}
	if(lsum==rsum)
	{
		cout<<a[1];
		return 0;
	}
	for(i=2;i<n-1;i++)
	{
		lsum+=a[i-1];
		rsum-=a[i];
		if(lsum==rsum)
		{
			flag=1;
			cout<<a[i]<<endl;
			return 0;
		}
	}
	if(flag==0)
	{
		cout<<"element not found"<<endl;
	}
	return 0;
}
