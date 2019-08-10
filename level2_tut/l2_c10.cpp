#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"enter the number"<<endl;
	cin>>n
	int sq=sqrt(n);
	for(i=2;i<=sq;i++)
	{
		if(n%i==0)
		{
			cout<<"non prime number"<<endl;
			return;
		}
	}
	cout<<"prime number"<<endl;
	return 0;
}
