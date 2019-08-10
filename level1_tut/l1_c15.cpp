#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,j,l,a,r,n;
	a=2;
	r=2;
	cout<<"enter the term number"<<endl;
	cin>>n;
	cout<<"nth term in the series would be"<<endl;
	double nth_term;
	double power=pow(r,n-1);
	nth_term=a*power;
	cout<<"nth term of the expansion is "<<nth_term<<endl;
	return 0;
}
