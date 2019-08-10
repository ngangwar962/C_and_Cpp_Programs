#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l;
	int n,a,d;
	cout<<"enter the number of terms first term and the common difference"<<"\n";
	cin>>n>>a>>d;
	int sum=(n/2)*(2*a+(n-1)*d);
	cout<<sum<<"\n";
	return 0;
}
