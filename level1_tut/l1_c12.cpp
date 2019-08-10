#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l,n;
	double a=2,b=10,sum=a+b;
	cin>>n;
	cout<<a<<" "<<b<<" ";
	for(i=3;i<=2*n;i++)
	{
		if(i%2)
		{
			a=a*3;
			sum+=a;
			cout<<a<<" ";
		}
		else
		{
			b=b*2;
			sum+=b;
			cout<<b<<" ";
		}
	}
	cout<<"sum="<<sum<<endl;
return 0;
}
