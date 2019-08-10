#include<iostream>
using namespace std;
int permutation(int n,int k)
{
	if(n>=0&&k==0)
	return 1;
	if(n==0)
	return 0;
	return k*permutation(n-1,k-1)+permutation(n-1,k);
}
int main()
{
	int i,j,k;
	int n;
	cin>>n>>k;
	int result=permutation(n,k);
	cout<<result<<"\n";
	return 0;
}
