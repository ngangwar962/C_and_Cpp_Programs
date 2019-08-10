#include<iostream>
using namespace std;
int product(int a,int b)
{
	if(b==0)
	return 0;
	return a+product(a,b-1);
}
int main()
{
	int i,k,j;
	int a,b;
	cin>>a>>b;
	int result=product(a,b);
	cout<<result<<"\n";
	return 0;
}
