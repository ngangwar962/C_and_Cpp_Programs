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
	for(j=sq;j>0;j--)
	{
		if(n%j==0)
		cout<<n/j<<" ";
	}
return 0;
}
