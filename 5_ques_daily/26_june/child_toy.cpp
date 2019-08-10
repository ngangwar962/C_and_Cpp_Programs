#include<iostream>
#include<math.h>
using namespace std;
long int power(long int x,long int n)
{
	long int temp;
	if(n==0)
	return 1;
	temp=power(x,n/2)%1000000007;
	if(n%2==0)
	{
		return temp*temp%1000000007;
	}
	else
	{
		return x*temp*temp%1000000007;
	}
}
int main()
{
	int i,j,k,l;
	long int n;
	long int q;
	cin>>q;
	while(q)
	{
	cin>>n;
	long int temp=power(2,n)%1000000007l;
	if(temp<0)
	temp=temp+1000000007l;
	cout<<temp<<"\n";
	q--;
	}
	return 0;
}
