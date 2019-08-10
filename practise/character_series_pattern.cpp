#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n;
	if(n>12)
	return 0;
	char a=65,b=70;
	cout<<a<<" "<<b<<" ";
	for(i=2;i<n;i++)
	{
		if(i%2==0)
		{
			a+=2;
			cout<<a<<" ";
		}
		else
		{
			b-=1;
			cout<<b<<" ";
		}
	}
	return 0;
}
