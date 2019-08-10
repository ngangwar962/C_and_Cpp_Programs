#include<iostream>
using namespace std;
double fact(double n)
{
	if(n<=1)
	return 1;
	return n*fact(n-1);
}
int main()
{
	double i,j,k,n;
	cin>>n;
	cout<<fact(n)<<endl;
	return 0;
}
