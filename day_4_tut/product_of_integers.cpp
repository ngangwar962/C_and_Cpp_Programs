#include<iostream>
using namespace std;
int product(int n1,int n2)
{
	if(n2==0)
	return 0;
	return n1+product(n1,n2-1);
}
int main()
{
	int n1,n2;
	cin>>n1>>n2;
	cout<<product(n1,n2)<<endl;
	return 0;
}
