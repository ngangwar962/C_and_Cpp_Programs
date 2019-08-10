#include<iostream>
using namespace std;
int sum_of_digits(int n)
{
	if(n==0)
	return 0;
	return n%10+sum_of_digits(n/10);
}
int main()
{
	int i,j,k,l;
	int n;
	cin>>n;
	int result=sum_of_digits(n);
	cout<<result<<"\n";
	return 0;
}
