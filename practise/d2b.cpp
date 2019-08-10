#include<iostream>
using namespace std;
void d2b(int n)
{
	if(n==0)
	return;
	d2b(n/2);
	cout<<n%2;
	return;
	
}
int main()
{
	int i,j,k,n;
	cin>>n;
	d2b(n);
	cout<<endl;
	return 0;
}
