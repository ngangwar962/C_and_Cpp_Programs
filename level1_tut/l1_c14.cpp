#include<iostream>
using namespace std;
int main()
{
	int i,j;
	double num=1,den=1;
	double sum=1,x,n;
	cout<<"for exponential series enter the x and n"<<endl;
	cin>>x>>n;
	for(i=1;i<=n;i++)
	{
		num=num*x;
		den=den*i;
		sum+=(double)num/den;
		cout<<"sum="<<sum<<"den="<<den<<endl;
	}
	cout<<"sum of the terms is equal to"<<sum<<endl;
	return 0;
}
