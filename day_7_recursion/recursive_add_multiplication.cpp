#include<iostream>
using namespace std;
int mult(int m,int n)
{
	if(n==0)
	{
		return 0;
	}
	return m+mult(m,n-1);
}
int main()
{
	int m,n;
	cin>>m>>n;
	cout<<mult(m,n)<<endl;
	return 0;
}
