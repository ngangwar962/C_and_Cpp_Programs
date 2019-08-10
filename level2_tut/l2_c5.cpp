#include<iostream>
using namespace std;
int main()
{
	int i,j,k,a=1,b=1,n;
	cin>>n;
	cout<<a<<" "<<b<<" ";
	for(i=3;i<=2*n;i++)
	{
		if(i%2)
		{
			a=a*2;
			cout<<a<<" ";
		}
		else
		{
			b=b*3;
			cout<<b<<" ";
		}
	}
	return 0;
}
