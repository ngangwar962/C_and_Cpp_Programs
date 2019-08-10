#include<iostream>
using namespace std;
int terms(int r,int n)
{
	if(n==0)
	return 1;
	return r*terms(r,n-1);
}
void series(int a,int r,int n)
{
	if(n==0)
	return;
	series(a,r,n-1);
	cout<<a*terms(r,n-1)<< "+" ;
}
int main()
{
	int a,r,n;
	cin>>a>>r>>n;
	series(a,r,n);
	return 0;
}
