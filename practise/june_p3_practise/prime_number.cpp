#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,j,k;
	int n,sq;
	cin>>n;
	sq=sqrt(n);
	int flag=0;
	for(i=2;i<=sq;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"prime number"<<endl;
		return 0;
	}
	else
	{
		cout<<"not a prime number"<<endl;
		return 0;
	}
	return 0;
}
