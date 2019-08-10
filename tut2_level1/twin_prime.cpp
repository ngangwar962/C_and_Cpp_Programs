#include<iostream>
#include<math.h>
#include<cstdlib>
using namespace std;
int main()
{
	int i,j,n1,n2,flag1=0,flag2=0;
	cin>>n1>>n2;
	int sq1=sqrt(n1);
	int sq2=sqrt(n2);
	for(i=2;i<=sq1;i++)
	{
		if(n1%i==0)
		{
			cout<<"not a prime number "<<endl;
			return 0;
		}
	}
	for(i=2;i<=sq2;i++)
	{
		if(n2%i==0)
		{
			cout<<"second number not a prime number"<<endl;
			return 0;
		}
	}
	if((abs(n1-n2))==2)
	{
		cout<<"twin prime numbers"<<endl;
	}
	return 0;
}
