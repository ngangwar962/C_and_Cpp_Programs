#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n;
	int sq=sqrt(n);
	for(i=1;i<=sq;i++)
	{
		if(n%i==0)
		{
			cout<<i<<" ";
		}
	}
	for(i=sq;i>0;i--)
	{
		if(n%i==0)
		cout<<n/i<<" ";
	}
	return 0;
}
