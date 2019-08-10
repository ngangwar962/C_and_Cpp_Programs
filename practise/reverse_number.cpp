#include<iostream>
using namespace std;
void reverse(int n)
{
	if(n==0)
	return;
	int temp=n%10;
	cout<<temp;
	reverse(n/10);
	return;
}
int main()
{
	int i,j,k,n;
	cin>>n;
	reverse(n);
	return 0;
}
