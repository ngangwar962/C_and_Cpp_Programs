#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n;
	double sum=0;
	while(n)
	{
		int a=n%10;
		double fact=1;
		for(i=1;i<=a;i++)
		{
			fact=fact*i;
		}
		sum=sum+fact;
		n=n/10;
	}
	cout<<"sum= "<<sum;
	return 0;
}
