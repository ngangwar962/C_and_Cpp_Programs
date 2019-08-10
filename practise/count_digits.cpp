#include<iostream>
using namespace std;
int count_digits(int n)
{
	if(n==0)
	return 0;
	return 1+count_digits(n/10);
}
int main()
{
	int i,j,k,n;
	cin>>n;
	cout<<count_digits(n)<<endl;
	return 0;
}
