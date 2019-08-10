#include<iostream>
using namespace std;
int power(int r,int n)
{
	if(n==0)
	return 1;
	return r*power(r,n-1);
}
void ap_gp(int a,int d,int r,int n)
{
	if(n==0)
	return;
	int temp=power(r,n);
	ap_gp(a,d,r,n-1);
	cout<<(a+(n)*d)*temp<<" + ";
	return;
}
int main()
{
	int i,j,k,n,a,d,r;
	cin>>a>>d>>r>>n;
	cout<<a<<" + ";
	ap_gp(a,d,r,n-1);
	return 0;
}
