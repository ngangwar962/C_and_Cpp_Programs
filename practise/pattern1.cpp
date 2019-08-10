#include<iostream>
using namespace std;
void pattern(int n)
{
	if(n==0)
	return;
	cout<<"*";
	pattern(n-1);
	return;
}
int main()
{
	int n;
	cin>>n;
	pattern(n);
	cout<<endl;
	return 0;
}
