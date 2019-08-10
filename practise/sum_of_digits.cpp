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
	int digits,sum;
	cin>>digits;
	sum=sum_of_digits(digits);
	cout<<sum<<endl;
	return 0;
}
