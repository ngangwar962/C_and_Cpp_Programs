#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n;
	int sum=0;
	while(n)
	{
		sum+=(n%10);
		n/=10;	
	}
	cout<<"sum="<<sum;
}
