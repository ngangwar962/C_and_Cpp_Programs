#include<iostream>
using namespace std; 
int power_function(int a,int n)
{
	if(n==0)
	return 1;
	return a*power_function(a,n-1);
}
int main()
{
	int a,n;
	cin>>a>>n;
	cout<<power_function(a,n)<<endl;
	return 0;
}
