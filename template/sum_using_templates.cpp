#include<iostream>
using namespace std;
template<class T>
T sum(T a,T b)
{
	return a+b;
}
int main()
{
	cout<<sum(10,15)<<endl;
	cout<<sum(20.6,30.5)<<endl;
	return 0;
}
