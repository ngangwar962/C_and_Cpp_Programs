#include<iostream>
using namespace std;
int c(int n,int k)
{	
	if(k==0||k==n)
	return 1;
	if(n==0)
	return 0;
	return c(n-1,k-1)+c(n-1,k);
}
int main()
{
	int i,j,l;
	cout<<"selecting k elements out of n elements"<<endl;
	int n,k;
	cin>>n>>k;
	int result=c(n,k);
	cout<<result<<endl;
	return 0;
}
