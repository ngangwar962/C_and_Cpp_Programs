#include<iostream>
using namespace std;
int isprime(int n,int i)
{
	if(n==2)
	return 1;
	if(n<2)
	{
		cout<<"enter a valid number"<<endl;
		return 0;
	}
	if(n%i==0)
	return 0;
	if(i*i>n)
	return 1;
	return isprime(n,i+1);
	
}
int main()
{
	int i,j,n;
	cin>>n;
	cout<<isprime(n,2);
	return 0;
}
